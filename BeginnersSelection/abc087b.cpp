#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)
#define REP2(i, x, n) for (int i = x; i < (n); i++)
#define ALL(n) begin(n), end(n)

int main()
{
    int A, B, C, X;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> X;

    int count = 0;
    for (int _a = 0; _a <= A; _a++)
    {
        if (500 * _a > X)
            continue;
        for (int _b = 0; _b <= B; _b++)
        {
            if (500 * _a + 100 * _b > X)
                continue;
            for (int _c = 0; _c <= C; _c++)
            {
                if (500 * _a + 100 * _b + 50 * _c == X)
                    count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}
