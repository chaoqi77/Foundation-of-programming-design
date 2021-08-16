#include <iostream>
#include <memory.h>

using namespace std;

int main()
{
    float sheep[5];
    memset(sheep,0,sizeof(sheep));
    float big_sheep = 0.0;
    int big_sheep_no = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "请输入第" << (i+1) << "只羊的重量" << endl;
        cin >> sheep[i];
        if(sheep[i] > big_sheep)
        {
            big_sheep = sheep[i];
            big_sheep_no = i;
        }
    }
    cout << "最肥的羊编号为" << ++big_sheep_no << "重量为" << big_sheep <<endl;
    return 0;
}