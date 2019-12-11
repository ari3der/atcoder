#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)
#define REP2(i, x, n) for (int i = x; i < (n); i++)
#define ALL(n) begin(n), end(n)

size_t check(string _S)
{
    vector<string> _T = {"dream", "dreamer", "erase", "eraser"};
    size_t s_size = _S.size();
    REP(i, _T.size())
    {
        string t = _T.at(i);
        int pos = _S.find(t, s_size - t.size());
        if (pos != string::npos)
        {
            return pos;
        }
    }
    return string::npos;
}

int main()
{
    string S;
    cin >> S;
    for (;;)
    {
        size_t pos = check(S);
        if (pos != string::npos)
        {
            if (pos == 0)
            {
                cout << "YES" << endl;
                break;
            }
            S = S.erase(pos);
        }
        else
        {
            cout << "NO" << endl;
            break;
        }
    }

    return 0;
}
