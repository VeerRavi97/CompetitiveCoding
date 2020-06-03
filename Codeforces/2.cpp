#include <bits/stdc++.h>
using namespace std;
#define all(c) c.begin(), c.end()
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
typedef long long ll;
typedef vector<int> v;
int solve(vector<int> &v, set<int> &p, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                if (p.find(j + 1) == p.end())
                {
                    // cout << i << " " << j+1 << " " <<  v[j] << " " << v[j+1] << "\n";
                    return 0;
                }
                else
                {
                    swap(v[j], v[j + 1]);
                }
            }
        }
    }
    return 1;
}
int main()
{
    IOS;
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++)
        {
            int in;
            cin >> in;
            v[i] = in;
        }
        set<int> p;
        for (int i = 0; i < m; i++)
        {
            int in;
            cin >> in;
            p.insert(in);
        }
        int ans = solve(v, p, n);
        if (ans)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
}