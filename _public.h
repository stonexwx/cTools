/***********************************************************************
 *  _public.h 2024/07/29
 *  用于公共工具函数的声明
 ***********************************************************************/

#ifndef __PUBLIC_H
#define __PUBLIC_H

#include "_pubicHead.h"

using namespace std;

namespace publicTool
{
    // 字符串处理

    /**
     *  @brief 删除字符串左边指定的字符。
     *   例如：str = "  hello world!  ";
     *   删除左边的空格：str = "hello world!  ";
     *  @param str 待处理的字符串。
     *  @param cc 待删除的字符。
     *  @return 返回处理后的字符串。
     */

    char *deletelchr(char *str, const int cc = ' ');
    string &deletelchr(string &str, const int cc = ' ');
}

#endif