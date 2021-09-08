#include <cstring>
#include <iostream>

using namespace std;

struct mk {
    int num;
    mk* next;
};

int main()
{
    int n, m;
    cout << "请输入猴子数量：";
    cin >> n;
    cout << "请输入踢出数字：";
    cin >> m;
    if (!n || !m) {
        cout << "请输入猴子数量和踢出数字！";
        return 0;
    }
    // 创建链表头指针和临时指针，并先对表头插入1
    mk *phead = NULL, *temp = NULL;
    phead = new mk;
    phead->num = 1;
    phead->next = NULL;
    temp = phead;
    // 根据输入数字创建链表
    for (int j = 2; j <= n; j++) {
        mk* mon;
        mon = new mk;
        mon->num = j;
        mon->next = NULL;
        temp->next = mon;
        temp = mon;
    }
    // 将临时变量指向表头
    temp->next = phead;
    // 创建q指针，并将链表头赋值给它，以便下边的循环使用
    mk* q;
    q = new mk;
    q = phead;
    int sign = 0;
    // 创建该链表的头一个指针，以便在删除节点时，将该指针的next指向删除指针的后一位
    mk* pre;
    pre = temp;
    while (n > 1) {
        sign++;
        // 标记变量与踢出数字相同即为需要删除的节点
        if (sign == m) {
            pre->next = q->next;
            delete q;
            // 总数-1 sign归0
            n--;
            sign = 0;
        } else {
            // 将节点赋值给pre，以便下次使用
            pre = q;
        }
        q = q->next;
    }
    cout << q->num << endl;
    return 0;
}