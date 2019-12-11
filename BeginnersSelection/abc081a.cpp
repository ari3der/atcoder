#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)
#define REP2(i, x, n) for (int i = x; i < (n); i++)
#define ALL(n) begin(n), end(n)
#define ctoi(c) c - '0'

int main()
{
    string in;
    cin >> in;
    cout << ctoi(in[0]) + ctoi(in[1]) + ctoi(in[2]) << endl;
    return 0;
}
