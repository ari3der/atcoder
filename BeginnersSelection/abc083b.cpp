#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)
#define REP2(i, x, n) for (int i = x; i < (n); i++)
#define ALL(n) begin(n), end(n)
#define ctoi(c) c - '0'

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    int sum = 0;
    REP2(i, 1, N + 1)
    {
        string _N = to_string(i);
        int sum2 = 0;
        REP(j, _N.size()) { sum2 += ctoi(_N.at(j)); }
        if (sum2 >= A && sum2 <= B)
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}
