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
int goRight(int i, int j)
{

    if (j & 1LL)
        return j * j - i + 1;
    else
        return (j - 1) * (j - 1) + i;
}
int goLeft(int i, int j)
{
    if (!(i & 1LL))
        return i * i - j + 1;
    else
        return (i - 1) * (i - 1) + j;
}
int32_t main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    IOS;
    int tc;
    cin >> tc;
    while (tc--)
    {
        // int n;
        // cin >> n;
        int y, x;
        cin >> y >> x;
        int ans = 0;
        if (y < x)
        {
            ans = goRight(y, x);
        }
        else
            ans = goLeft(y, x);

        cout << ans << endl;
    }
}