#ifndef _STRING_TOOLS_H
#define _STRING_TOOLS_H

#include "_publicConfig.h"

#if _USING_STRING_TOOLS

#include <string>
#include <string.h>

using namespace std;

namespace stringTools
{

    /**
     *  @brief 删除字符串左边指定的字符。（c风格）
     *   例如：str = "  hello world!  ";
     *   删除左边的空格：str = "hello world!  ";
     *  @param str 待处理的字符串。
     *  @param cc 待删除的字符。
     *  @return 返回处理后的字符串。
     */

    char *deletelchr(char *str, const int cc = ' ');

    /**
     *  @brief 删除字符串左边指定的字符。（c++风格）
     *   例如：str = "  hello world!  ";
     *   删除左边的空格：str = "hello world!  ";
     *  @param str 待处理的字符串。
     *  @param cc 待删除的字符。
     *  @return 返回处理后的字符串。
     */
    string &deletelchr(string &str, const int cc = ' ');

    /**
     *  @brief 删除字符串右边指定的字符。（c风格）
     *   例如：str = "  hello world!  ";
     *   删除右边的空格：str = "  hello world!";
     *  @param str 待处理的字符串。
     *  @param cc 待删除的字符。
     *  @return 返回处理后的字符串。
     */
    char *deleterchr(char *str, const int cc = ' ');

    /**
     *  @brief 删除字符串右边指定的字符。（c++风格）
     *   例如：str = "  hello world!  ";
     *   删除右边的空格：str = "  hello world!";
     *  @param str 待处理的字符串。
     *  @param cc 待删除的字符。
     *  @return 返回处理后的字符串。
     */
    string &deleterchr(string &str, const int cc = ' ');

    /**
     *  @brief 删除字符串左右边指定的字符。（c风格）
     *   例如：str = "  hello world!  ";
     *   删除左右的空格：str = "hello world!";
     *  @param str 待处理的字符串。
     *  @param cc 待删除的字符。
     *  @return 返回处理后的字符串。
     */
    char *deletelrchr(char *str, const int cc = ' ');

    /**
     *  @brief 删除字符串左右边指定的字符。（c++风格）
     *   例如：str = "  hello world!  ";
     *   删除左右的空格：str = "hello world!";
     *  @param str 待处理的字符串。
     *  @param cc 待删除的字符。
     *  @return 返回处理后的字符串。
     */
    string &deletelrchr(string &str, const int cc = ' ');

    /**
     *  @brief 把字符串中的小写字母转换成大写，忽略不是字母的字符。（c风格）
     *  @param str 待处理的字符串。
     *  @return 返回处理后的字符串。
     */
    char *toupper(char *str);

    /**
     *  @brief 把字符串中的小写字母转换成大写，忽略不是字母的字符。（c++风格）
     *  @param str 待处理的字符串。
     *  @return 返回处理后的字符串。
     */
    string &toupper(string &str);

    /**
     *  @brief 把字符串中的大写字母转换成小写，忽略不是字母的字符。（c风格）
     *  @param str 待处理的字符串。
     *  @return 返回处理后的字符串。
     */
    char *tolower(char *str);

    /**
     *  @brief 把字符串中的大写字母转换成小写，忽略不是字母的字符。（c++风格）
     *  @param str 待处理的字符串。
     *  @return 返回处理后的字符串。
     */
    string &tolower(string &str);

    /**
     *  @brief 字符串替换函数。（c风格）
     *  在字符串str中，如果存在字符串str1，就替换为字符串str2。
     *  注意：
     *  1、如果str2比str1要长，替换后str会变长，所以必须保证str有足够的空间，否则内存会溢出（C++风格字符串不存在这个问题）。
     *  2、如果str2中包含了str1的内容，且bloop为true，这种做法存在逻辑错误，replacestr将什么也不做。
     *  3、如果str2为空，表示删除str中str1的内容。
     *  @param str 待处理的字符串。
     *  @param str1 旧的内容。
     *  @param str2 新的内容。
     *  @param bloop 是否循环执行替换。
     *  @return 返回是否替换成功
     */
    bool replacestr(char *str, const string &str1, const string &str2, const bool bloop = false);

    /**
     *  @brief 字符串替换函数。（c++风格）
     *  在字符串str中，如果存在字符串str1，就替换为字符串str2。
     *  注意：
     *  1、如果str2比str1要长，替换后str会变长，所以必须保证str有足够的空间，否则内存会溢出（C++风格字符串不存在这个问题）。
     *  2、如果str2中包含了str1的内容，且bloop为true，这种做法存在逻辑错误，replacestr将什么也不做。
     *  3、如果str2为空，表示删除str中str1的内容。
     *  @param str 待处理的字符串。
     *  @param str1 旧的内容。
     *  @param str2 新的内容。
     *  @param bloop 是否循环执行替换。
     *  @return 返回是否替换成功
     */
    bool replacestr(string &str, const string &str1, const string &str2, const bool bloop = false);

} // namespace stringTools

#endif // _USING_STRING_TOOLS

#endif // _STRING_TOOLS_H