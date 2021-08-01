#include <iostream>
using namespace std;

int main()
{
    int x = 105;
    for (int i = 2; i < x-1; i++)
    {
        if(x%i == 0){
            cout << i << endl;
        }
    }
}
