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
    //IOS;

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        vi v(n, 0);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        int maxm = -99999999;
        int minm = 99999999;
        for (ll i = 0; i < n; i++)
        {
            int infected = v[i];

            // left
            int j = i - 1;
            int cnt = 1;

            while (j >= 0)
            {

                if (infected - v[j] > 2)
                    break;
                infected = v[j];

                cnt++;

                j--;
            }

            //right
            j = i + 1;
            infected = v[i];

            while (j < n)
            {

                if (v[j] - infected > 2)
                    break;

                infected = v[j];
                j++;
                cnt++;
            }

            maxm = max(maxm, cnt);
            minm = min(minm, cnt);
            // cout << cnt << " " <<  minm << " " << maxm << "\n";
            
        }
       
        cout << minm << " " << maxm << "\n";
    }
}