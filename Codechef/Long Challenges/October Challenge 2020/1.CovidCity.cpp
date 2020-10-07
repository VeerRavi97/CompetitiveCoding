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
class Solution
{
public:
    int solve(int n, int k, int x, int y)
    {
        if (x == y)
            return 1;
        if (k == 0)
            return 0;
        int diff = y - x;
        if (diff < 0)
            diff += n;
        if (diff % k == 0)
            return 1;
        return 0;
    }
};
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
        int n, k, x, y;
        cin >> n >> k >> x >> y;
        Solution Obj;
        bool ans = Obj.solve(n, k, x, y);
        if (!ans)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}