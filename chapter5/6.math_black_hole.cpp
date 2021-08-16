#include <iostream>
// #include <string>
using namespace std;

string s,temp_str;
int numArr[4];


/*
    参数1：四位整数
*/
int bobble_sort(int x[])
{
    
    return 0;
}

int main()
{
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        temp_str = s[i];
        numArr[i] = atoi(temp_str.c_str());
    }

    // for (int i = 0; i <= sign; i++)
    // {
    //输出分割好的字符串

    cout << numArr << endl;
    // }

    //int res = calculate(7615);
    //cout << res << endl;
    return 0;
}
