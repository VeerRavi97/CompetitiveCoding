#include <bits/stdc++.h>
using namespace std;
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define endl '\n'
#define all(c) c.begin(), c.end()
#define pb push_back

typedef vector<int> vi;
const int MOD = 1e9 + 7;
struct triplet
{
    int a, b, c;
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

        int n, k;
        cin >> n >> k;
        vi v(n + 2, 0);
        vector<triplet> res(n + 2);
        unordered_map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            int in;
            cin >> in;
            v[i] = in;
            mp[in] = i;
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i != v[i])
            {
                int v3 = i;
                int v1 = v[i];
                int v2 = mp[i];
                int a = mp[v1];
                int b = mp[v2];
                int c = mp[v3];
                v[a] = v3;
                v[b] = v1;
                v[c] = v2;
                // cout << a << " " << b << " " << c << endl;
                cnt++;
                triplet temp;
                temp.a = a;
                temp.b = b;
                temp.c = c;
                // cout << temp.a << "\n";
                if (cnt <= k)
                    res[i] = temp;
            }
        }
        if (!cnt)
            cout << "0"
                 << "\n";
        else
        {
            for (int i = 1; i <= cnt; i++)
            {
                cout << i << "\n";
                triplet temp = res[i];
                cout << temp.a << " " << temp.b << " " << temp.c << "\n";
            }
        }
    }
}