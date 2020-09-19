#include <bits/stdc++.h>
using namespace std;
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define endl '\n'

int32_t main()
{
    fast;
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        int Before = 0, After = 0;
        for (int i = 0; i < n; i++)
        {
            int in;
            cin >> in;
            Before += in;
            if (in > k)
                in = k;
            After += in;
        }
        cout << Before - After << "\n";
    }
}