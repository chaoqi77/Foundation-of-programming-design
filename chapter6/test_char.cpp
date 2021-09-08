#include <iostream>
#include <sstream>
#include <string>
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
    // char s[] = "12154513";
    // cin >> s;
    // cout << s << endl;

    // 測試使用指針循环计算字符串长度
    // char a[4] = "asd",*p = NULL;
    // p = a;
    // cout << *p << endl;
    // while (*p != '\0')
    // {
    //     //cout << p << endl;
    //     p++;
    // }
    // cout << p-a << endl;

    // 测试while循环倒序输出数字，并查明指针的执行和循环条件的作用
    //char a[] = "987654321";
    //char * p = &a[8];
    // p = a;
    //cout << p << *p << endl;
    //do
    //{
    //    cout << * p;cout << endl;
    //    cout << "    " << p << "    " << a << endl;
    //    p--;
    //} while (p >= a);
    //cout << endl;

    // 寻找肇事者 求2位数的平方数，且长度大于4，从左至右递增。
    // string temp;
    // for (int i = 32; i < 100; i++)
    // {
    //     std::string s = std::to_string(i * i);
    //     if (s[0] < s[1] && s[1] < s[2] && s[2] < s[3])
    //     {
    //         std::cout << s << std::endl;
    //     }
    // }

    // 字符串匹配 （存在问题，不是最优解，最好的解决方法应该是kmp）
    // string long_str, short_str;
    // cout << "请输入第一个字符串:";
    // cin >> long_str;
    // cout << "请输入第二个字符串:";
    // cin >> short_str;
    // int long_str_len = long_str.length(), short_str_len = short_str.length(),
    //     count = 0, sign = 0, num = long_str_len - short_str_len + 1;
    // if (long_str_len < short_str_len)
    // {
    //     string temp_str = long_str;
    //     long_str = short_str;
    //     short_str = temp_str;
    //     num = short_str_len - long_str_len + 1;
    //     long_str_len = short_str_len;
    // }
    // int sign2 = 0;
    // for (int i = 0; i <= num; i++)
    // {
    //     if (long_str[i] == short_str[0])
    //     {
    //         for (int j = 1; j < short_str_len; j++)
    //         {
    //             if (sign2 == 0 && short_str[0] == long_str[j + i])
    //             {
    //                 sign2 = j + i - 1;
    //             }
    //             if (long_str[j + i] != short_str[j])
    //             {
    //                 sign = j + i;
    //                 break;
    //             }
    //         }
    //         if (sign > 0)
    //         {
    //             if (sign2 > 0)
    //             {
    //                 i = sign2;
    //             }
    //             else
    //             {
    //                 i = sign - 1;
    //             }
    //             sign = 0;
    //         }
    //         else
    //         {
    //             count++;
    //             i += short_str_len - 1;
    //         }
    //     }
    // }
    // cout << "较短字符串“" << short_str << "”在较长字符串“" << long_str << "”中出现了" << count << "次。" << endl;

    return 0;
}
