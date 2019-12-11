#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)
#define REP2(i, x, n) for (int i = x; i < (n); i++)
#define ALL(n) begin(n), end(n)

int main()
{
    int N;
    cin >> N;
    vector<int> t(N + 1);
    vector<int> x(N + 1);
    vector<int> y(N + 1);
    t.at(0) = 0;
    x.at(0) = 0;
    y.at(0) = 0;
    REP(i, N) { cin >> t.at(i + 1) >> x.at(i + 1) >> y.at(i + 1); }
    REP(i, N)
    {
        int diff_t = abs(t.at(i) - t.at(i + 1));
        int diff = abs(x.at(i) - x.at(i + 1)) + abs(y.at(i) - y.at(i + 1));
        if (!((diff_t % 2 == diff % 2) && (diff_t >= diff)))
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
