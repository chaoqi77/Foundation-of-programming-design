#include <iostream>

using namespace std;

int main()
{
    // 指针循环
    int a[4] = { 1, 3, 5, 9 }, num = 1;
    // int *p = NULL;
    // p = a;
    for (int* p = a; p < a + 4; p++) {
        cout << "a[" << num++ << "]=" << *p << endl;
    }
    return 0;
}