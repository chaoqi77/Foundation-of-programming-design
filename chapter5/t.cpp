#include <iostream>
using namespace std;

void swap1(int *p,int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q =temp;
    cout << temp << endl << *p << endl << p <<endl << *q << endl << q << endl ;

}

int main()
{
    int x = 20;
    int y = 10;
    cout << x << endl << y << endl ;
    swap1(&x,&y);
    cout << x << endl << y << endl ;
    return 0;
    int a = 1;
    int *p;
    *p = a;
    int *w = &a;
    cout << a << endl
         << p << endl
         << *p << endl
         << *w << endl;
}