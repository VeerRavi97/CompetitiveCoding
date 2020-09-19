#include <bits/stdc++.h>
using namespace std;
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define MAX_N 1111111
int32_t main()
{
    fast;
    int tc;
    cin >> tc;
    while (tc--)
    {
        string str;
        cin >> str;
        int n = str.length();
        bitset<MAX_N> bs;
        bs.reset();
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'x')
            {
                // cout << "curr " << str[i] << "\n";
                if (i > 0 && !bs[i - 1] && !bs[i] && str[i - 1] == 'y')
                {

                    cnt++;
                    bs[i] = 1;
                    bs[i - 1] = 1;
                }
                else if (i < n - 1 && !bs[i] && !bs[i + 1] && str[i + 1] == 'y')
                {

                    cnt++;
                    bs[i] = 1;
                    bs[i + 1] = 1;
                }
            }
            else
            {

                if (i > 0 && !bs[i] && !bs[i - 1] && str[i - 1] == 'x')
                {

                    cnt++;
                    bs[i] = 1;
                    bs[i - 1] = 1;
                }
                else if (i < n - 1 && !bs[i] && !bs[i + 1] && str[i + 1] == 'x')
                {

                    cnt++;
                    bs[i] = 1;
                    bs[i + 1] = 1;
                }
            }
        }

        cout << cnt << "\n";
    }
}