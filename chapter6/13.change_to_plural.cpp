#include <iostream>
#include <string.h>

using namespace std;

void change_to_plural(char *input_str);

int main()
{
    int s;
    char in[20] = {0}, out[20] = {0};
    // 可以循环输入多个单词，如果每次只判断一个单词，那么将循环去掉即可
    cout << "你想输入几个单词，请输入数字：" << endl;
    cin >> s;
    for (int i = 0; i < s; i++)
    {
        cout << "请输入单词：";
        cin >> in;
        change_to_plural(in);
        cout << endl;
    }
    return 0;
}

void change_to_plural(char *input_str)
{
    int l = strlen(input_str);
    // 因为char是数组，所以根据下标即可判断最后一位或者两位需要使用以下哪个替换规则
    if (input_str[l - 1] == 'y')
    {
        input_str[l - 1] = 'i';
        input_str[l] = 'e';
        input_str[l + 1] = 's';
        input_str[l + 2] = '\n';
    }
    else if (input_str[l - 1] == 's' || input_str[l - 1] == 'x' || input_str[l - 1] == 'o' ||
             ((input_str[l - 2] == 's') && (input_str[l - 1] == 'h')) || ((input_str[l - 2] == 'c') && (input_str[l - 1] == 'h')))
    {
        input_str[l] = 'e';
        input_str[l + 1] = 's';
        input_str[l + 2] = '\n';
    }
    else
    {
        input_str[l] = 's';
        input_str[l + 1] = '\n';
    }
    cout << input_str;
}
