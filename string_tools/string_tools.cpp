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
} // namespace stringTools

#endif // _USING_STRING_TOOLS