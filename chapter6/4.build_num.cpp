#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    for (int i = 7; i < 10; i++)
    {
        for (int j = 7; j < 10; j++)
        {
            for (int k = 7; k < 10; k++)
            {
                count++;
                if (i != j && i != k && j!=k)
                {
                    cout << i << j << k << endl;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}