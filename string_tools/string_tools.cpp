#include "string_tools.h"

#if _USING_STRING_TOOLS

namespace stringTools
{
    string &deletelchr(string &str, const int cc)
    {
        if (str.empty())
            return str; // 如果传进来的是空字符串，直接返回，防止程序崩溃。

        string::size_type p = 0; // 指向字符串的首地址。
        while (p < str.size() && str[p] == cc)
            p++; // 遍历字符串，p将指向左边第一个不是cc的字符。

        str.erase(0, p); // 删除左边的cc字符。

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
} // namespace stringTools

#endif // _USING_STRING_TOOLS