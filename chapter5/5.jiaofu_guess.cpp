// #include <iostream>
// using namespace std;
// int main()
// {
//     long a;
//     cout << "input a number:" << endl;
//     cin >> a;
//     while (1)
//     {
//         if (a % 2 == 0)
//         {
//             if (a == 0)
//             {
//                 cout << "0 cannot be operated!" << endl;
//                 return 0;
//             }
//             else
//             {
//                 a /= 2;
//                 cout << "a becomes " << a << endl;
//             }
//         }
//         else
//         {
//             a *= 3;
//             a++;
//             cout << "a becomes " << a << endl;
//         }
//         if (a == 1)
//             break;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int q;
    cout << "请输入整数" << endl;
    cin >> q;
    while (1)
    {
        if (q % 2 == 0)
        {
            if (q == 0)
            {
                cout << "此时的q为:" << q << endl;
                break;
            }
            else
            {
                q = q / 2;
                cout << "此时的q为:" << q << endl;
            }
        }
        else
        {
            q = q * 3 + 1;
            cout << "此时的q为:" << q << endl;
        }
        if (q == 1)
        {
            cout << "此时的q为:" << q << endl;
            break;
        }
    }
    return 0;
}
