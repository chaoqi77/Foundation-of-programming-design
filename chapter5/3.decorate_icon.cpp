#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= 10; j = j + 2)
        {
            for (int k = 0; k <= 10; k = k + 5)
            {
                count++;
                if (i + j + k == 10)
                {
                    cout << "一角硬币"<< i/1 << "个，两角硬币" << j/2 << "个，五角硬币" << k/5 << "个。" << endl;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}