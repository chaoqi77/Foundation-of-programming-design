#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    // 10、一个数如果从左往右读和从右往左读数字是相同的,则称这个数为回文数,
    // 比如898,1221,15651都是回文数。求:既是回文数又是质数的5位十进制数有多少个?
    int num[6];
    int sign = 0;
    for (int i = 11111; i <= 99999; i++) {
        std::string s = std::to_string(i);
        if (s[0] == s[4] && s[1] == s[3]) {
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    sign = 1;
                    break;
                }
            }
            if (sign == 0) {
                std::cout << s << std::endl;
            }
            sign = 0;
        }
    }
    return 0;
}