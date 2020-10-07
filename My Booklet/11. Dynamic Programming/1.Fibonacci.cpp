#include <bits/stdc++.h>
using namespace std;
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define endl '\n'
#define all(c) c.begin(), c.end()
#define MAX_N 1111111

typedef vector<int> vi;
const int MOD = 1e9 + 7;
const int INF = 1e18;
int memo[MAX_N];
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (memo[n])
        return memo[n];
    int ans = fibonacci(n - 1) + fibonacci(n - 2);
    memo[n] = ans;
    return ans;
}
int fibonacciBU(int n)
{
    memo[0] = 0;
    memo[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        memo[i] = memo[i - 1] + memo[i - 2];
    }
    return memo[n];
}

int fibonacciOptimized(int n)
{
    int a, b, c;
    a = 0;
    b = 1;
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
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
        memset(memo, 0, sizeof(memo));
        cout << fibonacci(n) << " ";
        memset(memo, 0, sizeof(memo));
        cout << fibonacciBU(n) << " ";
        memset(memo, 0, sizeof(memo));
        cout << fibonacciOptimized(n) << endl;
    }
}