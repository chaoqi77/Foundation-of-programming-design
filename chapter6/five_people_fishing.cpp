#include <iostream>

using namespace std;

int main()
{
    int fish[6] = {1, 1, 1, 1, 1, 1};
    int i = 0;
    do
    {
        fish[5] = fish[5] + 5;
        for (i = 4; i >= 1; i--)
        {
            if (fish[i + 1] % 4 != 0)
            {
                break;
            }
            else
            {
                fish[i] = fish[i + 1] * 5 / 4 + 1;
            }
        }
    } while (i >= 1);
    for (int j = 1; j <= 5; j++)
    {
        cout << fish[j] << endl;
    }
    return 0;
}