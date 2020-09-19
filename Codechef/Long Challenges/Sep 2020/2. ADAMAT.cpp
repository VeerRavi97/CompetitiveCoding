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
        int mat[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int in;
                cin >> in;
                mat[i][j] = in;
            }
        }
        int ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            //  cout << mat[0][i] << " " << i + 1 << endl;
            if (mat[0][i] != i + 1)
            {
                //   cout << "Transpose " << endl;
                ans++;
                for (int j = 0; j <= i; j++)
                {
                    swap(mat[0][j], mat[j][0]);
                }
            }
        }

        cout << ans << endl;
    }
}