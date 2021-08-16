#include <iostream>
using namespace std;

int main()
{
    // 测试输入超出字符串长度之后显示的内容，结果为空
    // char h[] = "1";
    // for (int i = 0; i < 3; i++)
    //     cin >> h[i];
    // for (int i = 0; i < 3; i++)
    //     cout << h[i] << endl;

    // 测试定义之后直接给变量赋值，编译过不去
    // char s[] = "123";
    // s = "321";
    // cout << s;
    
    // 测试输入比定义长或者短的字符串并赋值给原字符串，结果是能赋值并且输出出来，
    // 但是数字类型的字符串如果重新赋值字母的话，能输出，但是会又一个错误提示。
    char s[] = "12154513";
    cin >> s;
    cout << s << endl;
    
    return 0;
}