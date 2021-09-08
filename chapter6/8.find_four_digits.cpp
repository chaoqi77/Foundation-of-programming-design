#include <iostream>

using namespace std;

int main()
{
    // A是一个4位数,且是一个完全平方数;B是一个4位数﹐且每一位的数字都相同;
    // C也是一个4位的完全平方数。已知C=A-B,请编程求出所有这样的4位数A。
    int b_arr[] = { 1111, 2222, 3333, 4444, 5555, 6666, 7777, 8888, 9999 };
    for (int i = 32; i < 100; i++) {
        for (int j = 32; j < 100; j++) {
            for (int k = 0; k < 10; k++) {
                if (j * j + b_arr[k] == i * i) {
                    cout << "A:" << i << "  "
                         << "C:" << j << "  "
                         << "B:" << b_arr[k] << "  "
                         << "result:" << i * i << endl;
                }
            }
        }
    }
    return 0;
}