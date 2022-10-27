#include <iostream>
using namespace std;

int main()
{
    // 将输入的正整数拆分成n个整数后并进行相乘，得到所有分解出来结果相乘后的最大值，
    // 因为任何数字都能被2和3所表达，且使用3分解的整数相乘乘积结果最大，所以先循环将整体减去3，
    // 直到整数为2或者4，就将他再次减2，最终被完全分解开，然后将得到的数字相乘即可得到最大值
    int s, count = 0, res = 1, temp;
    int arr[100] = {0};
    cout << "请输入正整数" << endl;
    cin >> s;
    temp = s;
    // 这一步将数字一直减去3，直接等于2和4
    while (s != 2 && s != 4)
    {
        arr[count++] = 3;
        s -= 3;
    }
    // 等于2和4之后，只需一直减2就能使该整数完全被n多个正整数拆分开来
    while (s)
    {
        arr[count++] = 2;
        s -= 2;
    }
    // 将数组中的数字循环乘积就是相乘之后最大的数字
    for (int i = 0; i < count; i++)
    {
        res *= arr[i];
    }
    cout << temp << "最大的最大乘积为：" << res << endl;
    return 0;
}