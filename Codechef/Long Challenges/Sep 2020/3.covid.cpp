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
        int n;
        cin >> n;
        vector<int> v(n + 1, 0);
        for (int i = 1; i <= n; i++)
            cin >> v[i];
        int best = -INF;
        int worst = INF;
        for (int i = 1; i <= n; i++)
        {
            int cnt = 1;
            for (int j = 1; j <= n; j++)
            {
                int dr = abs(i - j);
                int dv = abs(v[i] - v[j]);
                // cout << i << " " << j << " " << dr << " " << dv << endl;
                if (i > j && v[i] < v[j] && (dv % dr == 0))
                    cnt++;
                if (i < j && v[i] > v[j] && (dv % dr == 0))
                    cnt++;
            }
            best = max(best, cnt);
            worst = min(worst, cnt);
        }
        cout << worst << " " << best << endl;
    }
}