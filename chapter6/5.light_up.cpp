#include <iostream>

using namespace std;

int main()
{
    // 将等于自己和自己的倍数的状态改为0或者1，0为熄灭，1为点亮，最后输出所有灯的状态。
    int n;
    cin >> n;
    int arr[n + 1] = { 0 };
    for (int i = 2; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            if (i == j || j % i == 0) {
                if (arr[j] == 0) {
                    arr[j] = 1;
                } else {
                    arr[j] = 0;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}