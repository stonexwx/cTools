#include <iostream>
#include "_public.h"

int main()
{
    string str = "  hello world!  ";
    cout << "Before: " << str << endl;
    stringTools::deletelchr(str);
    cout << "After: " << str << endl;

    char str1[] = "!!!!!hello world!  ";
    cout << "Before: " << str1 << endl;
    stringTools::deletelchr(str1, '!');
    cout << "After: " << str1 << endl;

    return 0;
}