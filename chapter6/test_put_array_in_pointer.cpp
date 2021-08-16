#include <iostream>

using namespace std;

int main()
{
    int a[6] = {1, 2, 3, 4, 5, 6};
    int *p = NULL;
    p = a;
    for (int j = 0; j <= 5; j++)
    {
        cout << "a[" << j << "]为" << *p << endl;
        p++;
    }
    return 0;
}