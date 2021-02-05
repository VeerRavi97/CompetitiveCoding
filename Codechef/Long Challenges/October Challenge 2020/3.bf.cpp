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
bool isGreater(vector<int> &v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        // cout << v[i] << " " << v[i + 1] << " " << (v[i] & v[i + 1]) << endl;
        if ((v[i] & v[i + 1]) == 0)
            return 0;
    }
    return 1;
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
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            v.push_back(i);
        }
        bool ans = false;
        sort(all(v));
        do
        {
            ans = isGreater(v);
            // cout << ans << endl;
            if (ans)
            {
                for (int i = 0; i < v.size(); i++)
                {
                    cout << v[i] << " ";
                }
                cout << endl;
                //  break;
            }
        } while (next_permutation(all(v)));
        if (!ans)
            cout << "-1" << endl;
    }
}