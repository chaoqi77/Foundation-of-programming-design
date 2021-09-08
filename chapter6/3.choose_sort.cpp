#include <iostream>

using namespace std;

int main()
{
    int a[5] = { 5, 3, 6, 1, 4 }, temp = 0;
    for (int i = 0; i < 5; i++) {
        // 注意这个地方是在 i 上加1开始循环，每次循环都会将最小的值挪动到数组的最前面（下面为上述数字循环结果）
        // 5 -- 3
        // 3 -- 6
        // 3 -- 1
        // 1 -- 4
        // 5 -- 6
        // 5 -- 3
        // 3 -- 4
        // 6 -- 5
        // 5 -- 4
        // 6 -- 5
        for (int j = i + 1; j < 5; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int k = 0; k < 5; k++) {
        cout << a[k] << endl;
    }
    return 0;
}