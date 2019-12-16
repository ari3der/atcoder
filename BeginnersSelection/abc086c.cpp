#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)
#define REP2(i, x, n) for (int i = x; i < (n); i++)
#define ALL(n) begin(n), end(n)

int main()
{
    int N;
    cin >> N;
    int tb = 0, xb = 0, yb = 0;
    int tn, xn, yn;
    int diff_t, diff;
    string r = "Yes";
    REP(i, N)
    {
        cin >> tn >> xn >> yn;
        if (r == "No")
        {
            continue;
        }
        diff_t = tn - tb;
        diff = abs(xb - xn) + abs(yb - yn);
        if (!((diff_t % 2 == diff % 2) && (diff_t >= diff)))
        {
            r = "No";
        }
    }
    cout << r << endl;
    return 0;
}
