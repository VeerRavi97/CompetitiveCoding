#include <bits/stdc++.h>
using namespace std;
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long

bool solve(vector<int> &v)
{
    int f = 0, t = 0, ft = 0;
    // f for fives, t for tens, ft for fiveteens
    for (auto x : v)
    {
        if (x == 5)
        {
            f++;
        }
        else if (x == 10)
        {
            t++;
            if (f <= 0)
                return false;
            f--;
        }
        else
        {
            ft++;
            if (t <= 0 && f <= 1)
                return false;
            if (t >= 1)
                t--;
            else if (f >= 2)
                f -= 2;
        }
    }

    return true;
}

int32_t main()
{

    IOS;
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;

        cin >> n;
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        bool ans = solve(v);
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}