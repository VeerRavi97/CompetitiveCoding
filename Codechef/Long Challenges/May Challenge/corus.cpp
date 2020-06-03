#include <bits/stdc++.h>
using namespace std;
#define all(c) c.begin(), c.end()
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
typedef long long ll;
typedef vector<ll> vi;
int main()
{
    IOS;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        unordered_map<char, int> mapper;
        for (auto ch : s)
            mapper[ch]++;
        ll ans = 0;
        // for (auto x : mapper)
        //     cout << x.first << " " << x.second << "\n";
        while (q--)
        {
            ans = 0;
            ll cabinets;
            cin >> cabinets;
            for (auto x : mapper)
                ans += ((x.second - cabinets >= 0) ? x.second - cabinets : 0);
            cout << ans << "\n";
        }
    }
}