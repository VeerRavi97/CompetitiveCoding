#include <bits/stdc++.h>
using namespace std;
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
int32_t main()
{

    fast;
    int tc;
    cin >> tc;
    while (tc--)
    {
        int ts;
        cin >> ts;
        if (!(ts & 1LL))
        {
            while (!(ts & 1LL))
                ts /= 2;
        }

        cout << ts / 2 << "\n";
    }
}