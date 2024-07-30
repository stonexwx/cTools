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
} // namespace stringTools

#endif // _USING_STRING_TOOLS

#endif // _STRING_TOOLS_H