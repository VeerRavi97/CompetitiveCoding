#include <bits/stdc++.h>
using namespace std;
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define endl '\n'
#define all(c) c.begin(), c.end()
typedef pair<int, int> ii;

typedef vector<int> vi;
const int MOD = 1e9 + 7;
const int INF = 1e18;
struct Point
{
    int x;
    int y;
};
bool cmp(Point a, Point b)
{
    if (a.x == b.x)
        return a.y < b.y;
    return a.x < b.x;
}
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
        vector<ii> v(4 * n - 1);
        for (int i = 0; i < 4 * n - 1; i++)
        {
            int x, y;
            cin >> x >> y;
            v[i].first = x;
            v[i].second = y;
        }

        sort(all(v));
        // for (int i = 0; i < 4 * n - 1; i++)
        //     cout << v[i].first << " " << v[i].second << endl;

        ii ans;
        for (int i = 0; i < n; i++)
        {
            ii a = v[4 * i];
            ii b = v[4 * i + 1];
            ii c = v[4 * i + 2];
            ii d = v[4 * i + 3];
            if (a.first == b.first && c.first == d.first)
                continue;
            else if (a.first != b.first && a.second != b.second)
            {
                // cout << " First ";
                ans.first = a.first;
                ans.second = b.second;
                break;
            }
            else if (a.first != b.first && a.second == b.second)
            {
                //   cout << "2nd ";
                ans.first = a.first;
                ans.second = c.second;
                break;
            }
            else if (c.first != d.first && c.second == a.second)
            {
                // cout << "3rd ";
                ans.first = c.first;
                ans.second = b.second;
                break;
            }
            else if (c.first != d.first && c.second == b.second)
            {
                //   cout << "4th ";
                ans.first = c.first;
                ans.second = a.second;
                break;
            }
        }
        //cout << endl;
        cout << ans.first << " " << ans.second << "\n";
    }
}