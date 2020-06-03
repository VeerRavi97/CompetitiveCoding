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
void prefix_function(string str, vector<int> &z)
{
    int n = str.length();
    int l = 0, r = 0;
    for (int i = 1; i < n; i++)
    {
        if (i <= r)
            z[i] = min(r - i + 1, z[i - l]);
        while (i + z[i] < n && str[z[i]] == str[i + z[i]])
            z[i]++;
        if (i + z[i] - 1 > r)
        {
            l = i, r = i + z[i] - 1;
        }
    }
}

// for (int i = 1, l = 0, r = 0; i < n; ++i) {
//         if (i <= r)
//             z[i] = min (r - i + 1, z[i - l]);
//         while (i + z[i] < n && s[z[i]] == s[i + z[i]])
//             ++z[i];
//         if (i + z[i] - 1 > r)
//             l = i, r = i + z[i] - 1;
//     }
int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    string str;
    cin >> str;
    int n = str.length();
    vector<int> z(n, 0);
    prefix_function(str, z);
    for (auto x : z)
        cout << x << " ";
}