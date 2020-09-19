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
int sumOfDigits(int n)
{
    int res = 0;
    while (n)
    {
        res += (n % 10);
        n /= 10;
    }
    return res;
}
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
        int chef = 0, monty = 0;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (sumOfDigits(a) > sumOfDigits(b))
                chef++;
            else if (sumOfDigits(a) < sumOfDigits(b))
                monty++;
            else
            {
                chef++;
                monty++;
            }
        }
        if (chef > monty)
            cout << "0 "
                 << chef << "\n";
        else if (chef < monty)
            cout << "1 " << monty << "\n";
        else
            cout << "2 " << chef
                 << "\n";
    }
}