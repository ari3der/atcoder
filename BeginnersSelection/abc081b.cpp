#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)
#define REP2(i, x, n) for (int i = x; i < (n); i++)
#define ALL(n) begin(n), end(n)

bool check(vector<int> A)
{
    REP(i, A.size())
    {
        if (A.at(i) % 2 == 0)
            continue;
        else
            return false;
    }
    return true;
}

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    REP(i, N) { cin >> A.at(i); }
    int count;
    for (count = 0; check(A); ++count)
    {
        REP(i, A.size()) { A.at(i) /= 2; }
    }
    cout << count << endl;

    return 0;
}
