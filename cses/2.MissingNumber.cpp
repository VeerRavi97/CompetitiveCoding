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
int32_t main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    // IOS;
    // int tc;
    // cin >> tc;
    // while (tc--)
    // {
    int n;
    cin >> n;
    int sum = n * (n + 1) / 2;
    int tot = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int in;
        cin >> in;
        tot += in;
    }
    cout << sum - tot << "\n";
    // }
}