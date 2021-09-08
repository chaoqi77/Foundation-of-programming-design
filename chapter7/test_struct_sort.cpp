#include <cstring>
#include <iostream>

using namespace std;

struct student {
    char name[20];
    char sex;
    unsigned long birthday;
    float height;
    float weight;
};
student Room[4] = {
    { "Lixin", 'M', 19840318, 1.82, 65.0 },
    { "Zhangmen", 'M', 19840918, 1.75, 58.0 },
    { "Helei", 'M', 19841209, 1.83, 67.1 },
    { "Geyujian", 'M', 19840101, 1.70, 59.0 }
};
int main()
{
    student q;
    int i = 0, j = 0;
    // 类似于二维数组根据某一列查找
    for (j = 0; j < 3; j++) {
        for (i = 0; i < 3 - j; i++) {
            if (Room[i].height < Room[i + 1].height) {
                q = Room[i];
                Room[i] = Room[i + 1];
                Room[i + 1] = q;
            }
        }
    }
    for (i = 0; i < 4; i++) {
        cout << Room[i].name << "  "
             << Room[i].sex << "  "
             << Room[i].birthday << "  "
             << Room[i].height << "  "
             << Room[i].weight << "\n";
    }
    return 0;
}