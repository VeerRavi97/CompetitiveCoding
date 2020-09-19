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
    IOS;
    string str;
    cin >> str;

    int maxm = 1;
    int cnt = 1;
    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] == str[i - 1])
            cnt++;
        else
        {
            // cout << "NOt equal"
            //      << "\n";
            maxm = max(maxm, cnt);
            cnt = 1;
        }
        // cout << cnt << "\n";
    }
    maxm = max(maxm, cnt);
    cout << maxm << "\n";
}