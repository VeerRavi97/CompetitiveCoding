#include <bits/stdc++.h>
using namespace std;
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
int32_t main()
{

    fast;
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int mat[n + 1][n + 1];
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                mat[i][j] = ++cnt;
            }
        }

        if (!(n & 1LL))
        {

            for (int i = 2; i <= n; i += 2)
            {
                for (int j = 1; j <= n; j += 2)
                {
                    swap(mat[i][j], mat[i][j + 1]);
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {

                cout << mat[i][j] << " ";
            }
            cout << "\n";
        }
        // cout << endl;
    }
}