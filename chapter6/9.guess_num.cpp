#include <iostream>
using namespace std;

int GetRandomNumber()
{
    int RandomNumber;
    srand((unsigned)time(NULL));     //time()用系统时间初始化种。为rand()生成不同的随机种子。
    RandomNumber = rand() % 100 + 1; //生成1~100随机数
    return RandomNumber;
}

/*
    参数1：随机数
    参数2：用户输入数字
*/
void varify_num(int random_number, int x)
{
    if (random_number == x)
    {
        cout << "恭喜您猜对了" << endl;
    }
    else
    {
        int temp;
        string big_or_small = "大";
        if (random_number < x)
        {
            big_or_small = "小";
        }
        cout << "随机数字比您选的要" << big_or_small << "，请选择更" << big_or_small << "的数字" << endl;
        cin >> temp;
        varify_num(random_number, temp);
    }
}

int main()
{
    int random_number = GetRandomNumber(),x;
    cout << "请输入您所猜的数字" << endl;
    cin >> x;
    varify_num(random_number, x);
    return 0;
}
