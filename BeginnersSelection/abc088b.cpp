#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)
#define REP2(i, x, n) for (int i = x; i < (n); i++)
#define ALL(n) begin(n), end(n)

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    REP(i, N) { cin >> A.at(i); }
    sort(A.begin(), A.end(), greater<int>());
    int diff = 0;
    REP(i, N)
    {
        if (i % 2 == 0){
            diff += A.at(i);
        }
        else
        {
            diff -= A.at(i);
        }
    }
    cout << diff << endl;
    return 0;
}
