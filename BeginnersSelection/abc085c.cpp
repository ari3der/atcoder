#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)
#define REP2(i, x, n) for (int i = x; i < (n); i++)
#define ALL(n) begin(n), end(n)

int main()
{
    int N, Y;
    cin >> N >> Y;
    int _x = -1, _y = -1, _z = -1;
    REP(x, N + 1)
    {
        if (_x != -1)
        {
            break;
        }
        REP(y, N + 1 - x)
        {
            if (9000 * x + 4000 * y + 1000 * N == Y)
            {
                _x = x;
                _y = y;
                _z = N - x - y;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    cout << _x << " " << _y << " " << _z << endl;
    return 0;
}
