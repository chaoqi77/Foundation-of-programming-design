#include <iostream>
#include <cstring>

using namespace std;

struct info
{
    char name[10];
    int year, month;
    info *next;
};

int main()
{
    info *phead = NULL, *temp = NULL;
    phead = new info;
    info *t;
    t = new info;
    temp = phead;

    // cout << temp << "    " << t << endl;    0x1853c20    0x1853c40
    // t->month =1;
    // cout << t->month << endl;  1
    // return 0;

    for (int i = 0; i < 3; i++)
    {
        info *stu;
        stu = new info;
        // cout << "请输入学生姓名：";
        // cin >> stu->name;
        cout << "请输入学生出生年份：";
        cin >> stu->year;
        // cout << "请输入学生出生月份：";
        // cin >> stu->month;
        temp->next = stu;
        temp = stu;
    }
    temp = phead->next;
    info *p = NULL;
    p = phead;
    while (temp != NULL)
    {
        cout << temp->year << "       "
             << "7777" << endl;
        if (temp->year > temp->next->year)
        {
            p->next = temp->next;
            temp->next->next = temp;
            temp->next = temp->next->next;

            cout << 1 << endl;
        }
        else
        {
            temp = temp->next;
            cout << 5 << endl;
        }
        // else
        // {
        //     p->next = temp->next;
        //     temp = temp->next->next;
        //     cout << 2 << endl;
        // }
        // else if (temp->year == temp->next->year)
        // {
        //     if (temp->month > temp->next->month)
        //     {
        //         p->next = temp->next;
        //         temp->next->next = temp->next;
        //     }
        // }
    }

    // for (int i = 0; i < 7; i++)
    // {
    //     for (int j = 0; j < 7; j++)
    //     {
    //         if(){

    //         }
    //     }

    // }

    temp = phead->next;
    for (int k = 0; k < 3; k++)
    {
        if (temp != NULL)
        {
            cout << "出生年份：" << temp->year << endl;
            // cout << "姓名：" << temp->name << "出生年份：" << temp->year << "出生月份：" << temp->month << endl;
            temp = temp->next;
        }
    }
    return 0;
}