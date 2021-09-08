#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, well_depth;
    for (well_depth = 1; well_depth <= 1000; well_depth++) {
        for (a = 1; a <= 1000; a++) {
            b = well_depth - 2 * a;
            c = well_depth - 3 * b;
            d = well_depth - 4 * c;
            e = well_depth - 5 * d;
            if (a == b || a == c || a == d || a == e || b == c || b == d || b == e || c == d || c == e || d == e)
                continue;
            if (6 * e + a == well_depth) {
                // c++ 想将整数转变为小数时，直接将整数乘以1.0，再进行乘除即可
                cout << "A:" << a * 1.0 / 100 << "  B:" << b * 1.0 / 100 << "  C:" << c * 1.0 / 100 << "  D:" << d * 1.0 / 100 << "  E:" << e * 1.0 / 100 << endl;
            }
        }
    }
    return 0;
}