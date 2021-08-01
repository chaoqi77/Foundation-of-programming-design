#include <iostream>
using namespace std;

/*
    参数1:x的值
    参数2:系数和阶乘
*/
float calculate(int x, int c)
{
    if (c == 0)
    {
        return 1;
    }
    float numerator = 1,denominator = 1;
    for (int k = 1; k <= c; k++)
    {
        numerator *= x;
        denominator = k * denominator;
    }
    return numerator / denominator;
}

/*
    参数1:x的值
    参数2:展开几次
    参数3: 0 代表cos，1 代表sin
*/
float expanding(float x, int n, int c)
{
    int sign = 0;
    float sum, res;
    int coefficient_and_factorial = c;
    for (int i = 0; i < n; i++)
    {
        res = calculate(x, coefficient_and_factorial);
        if (sign == 0)
        {
            ++sign;
            sum += res;
        }
        else if (sign == 1)
        {
            --sign;
            sum -= res;
        }
        coefficient_and_factorial += 2;
    }
    return sum;
}

int main()
{
    float res = expanding(10, 3, 0);
    cout << res << endl;
    return 0;
}

