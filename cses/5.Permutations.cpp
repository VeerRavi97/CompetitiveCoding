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
    //     IOS;
    //     int tc;
    //     cin >> tc;
    // while (tc--)
    // {
    int n;
    cin >> n;
    if (n == 2 || n == 3)
        cout << "NO SOLUTION"
             << "\n";
    else
    {
        for (int i = 2; i <= n; i += 2)
            cout << i << " ";
        for (int i = 1; i <= n; i += 2)
            cout << i << " ";

        // for (int i = 2; i <= n; i += 2)
        //     cout << i << " ";
        // }
    }
}