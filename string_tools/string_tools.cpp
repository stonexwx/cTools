#include "string_tools.h"

#if _USING_STRING_TOOLS

namespace stringTools
{
    string &deletelchr(string &str, const int cc)
    {
        auto pos = str.find_first_not_of(cc); // 从字符串的左边查找第一个不是cc的字符的位置。

        if (pos != 0)
            str.replace(0, pos, ""); // 把0-pos之间的字符串替换成空。

        return str;
    }

    char *deletelchr(char *str, const int cc)
    {
        if (str == nullptr)
            return nullptr; // 如果传进来的是空地址，直接返回，防止程序崩溃。

        char *p = str;   // 指向字符串的首地址。
        while (*p == cc) // 遍历字符串，p将指向左边第一个不是cc的字符。
            p++;

        memmove(str, p, strlen(str) - (p - str) + 1); // 把结尾标志0也拷过来。

        return str;
    }

    string &deleterchr(string &str, const int cc)
    {
        auto pos = str.find_last_not_of(cc); // 从字符串的右边查找第一个不是cc的字符的位置。

        if (pos != 0)
            str.erase(pos + 1); // 把pos之后的字符删掉。

        return str;
    }

    char *deleterchr(char *str, const int cc)
    {
        if (str == nullptr)
            return nullptr; // 如果传进来的是空地址，直接返回，防止程序崩溃。

        char *p = str + strlen(str); // 指向字符串的尾地址。
        while (p > str && *(p - 1) == cc)
            p--; // 遍历字符串，p将指向右边第一个不是cc的字符。

        *p = 0; // 删除右边的cc字符。

        return str;
    }

    string &deletelrchr(string &str, const int cc)
    {
        deletelchr(str, cc); // 删除左边的cc字符。
        deleterchr(str, cc); // 删除右边的cc字符。

        return str;
    }

    char *deletelrchr(char *str, const int cc)
    {
        deletelchr(str, cc); // 删除左边的cc字符。
        deleterchr(str, cc); // 删除右边的cc字符。

        return str;
    }

    char *toupper(char *str)
    {
        if (str == nullptr)
            return nullptr; // 如果传进来的是空地址，直接返回，防止程序崩溃。

        char *p = str; // 指向字符串的首地址。

        while (*p)
        {
            if (*p >= 'a' && *p <= 'z')
                *p -= 32; // 小写字母转大写字母。

            p++;
        }
        return str;
    }

    string &toupper(string &str)
    {
        for (auto &cc : str)
        {
            if ((cc >= 'a') && (cc <= 'z'))
                cc = cc - 32;
        }

        return str;
    }

    string &tolower(string &str)
    {
        for (auto &cc : str)
        {
            if ((cc >= 'A') && (cc <= 'Z'))
                cc = cc + 32;
        }

        return str;
    }

    char *tolower(char *str)
    {
        if (str == nullptr)
            return nullptr; // 如果传进来的是空地址，直接返回，防止程序崩溃。

        char *p = str; // 指向字符串的首地址。

        while (*p)
        {
            if (*p >= 'A' && *p <= 'Z')
                *p += 32; // 大写字母转小写字母。

            p++;
        }
        return str;
    }

    bool replacestr(string &str, const string &str1, const string &str2, const bool bloop)
    {
        if (str.empty() || str1.empty())
            return false;
        if ((bloop == true) && (str2.find(str1) != string::npos))
            return false;

        int pos = 0;
        while ((pos = str.find(str1, pos)) != string::npos)
        {
            str.replace(pos, str1.size(), str2);
            if (bloop == false)
                pos += str2.size();
        }
        return true;
    }

    bool replacestr(char *str, const string &str1, const string &str2, const bool bloop)
    {
        if (str == nullptr)
            return false;

        string strtemp(str);

        bool ret = replacestr(strtemp, str1, str2, bloop);
        if (ret == false)
            return false;

        strtemp.copy(str, strtemp.length());
        str[strtemp.length()] = 0; // string的copy函数不会给C风格字符串的结尾加0。

        return true;
    }

} // namespace stringTools

#endif // _USING_STRING_TOOLS