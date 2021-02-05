#include <bits/stdc++.h>
using namespace std;
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define endl '\n'
#define all(c) c.begin(), c.end()

typedef vector<int> vi;
const int MOD = 1e9 + 7;
const int INF = 1e18;
int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        int rem = 0;
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int in;
            cin >> in;
            int have = in + rem;
            if (have < k && !ans)
            {
                ans = i;
            }
            rem = have - k;
            rem = (rem < 0) ? 0 : rem;
        }
        if (!ans && rem)
        {
            ans += (rem / k + 1);
            ans += n;
        }
        cout << ans << endl;
    }
}