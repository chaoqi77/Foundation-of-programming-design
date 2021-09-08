#include <iostream>

using namespace std;

int main()
{
    int temp = 1;
    int a[5] = { 28, 39, 1048, 465, 777 };
    for (int i = 0; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            if (a[i] < a[j]) {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for (int k = 0; k < 5; k++) {
        cout << a[k] << endl;
    }
    return 0;
}