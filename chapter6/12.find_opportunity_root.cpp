#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string count_num(string s);
int main()
{
    int n;
    cin >> n;
    std::string s = std::to_string(n);
    int len = s.length();
    if (len > 0) {
        if (len > 1) {

        } else {
            cout << "乘机根为：" << s << endl;
        }
    } else {
        cout << "请输入长度大于0的数字" << endl;
    }
    cout << s.length();

    return 0;
}
string count_num(string s)
{
    static int arr[10] = { 0 };
    int res, temp;
    if (s.length() > 1) {
        for (int i = 0; i < 6; i++) {
            if (s[i] > 0) {
                arr[s[i]]++;
                temp = s[i];
                res *= temp;
            }
            if (res > 10) {
                std::string s1 = std::to_string(res);
                count_num(s1);
            }
        }
    } else {
      //  return arr;
    }
}
