#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1e9 + 7
#define INF 1e18
#define endl '\n'
#define all(c) c.begin(), c.end()
typedef vector<int> vi;
void file_io()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
ll computeBinary(string temp)
{
    ll bin = 0;
    ll pf = 1;
    for (int i = temp.length() - 1; i >= 0; i--)
    {
        ll num = temp[i] - '0';
        bin += (pf * num);
        pf = pf << 1;
    }
    return bin;
}
void solve(string str, int n, string &ans)
{
    if (n % 4 != 0)
        return;
    for (int i = 0; i < n; i += 4)
    {
        string sub = str.substr(i, 4);
        ll bin = computeBinary(sub);
        char ch = bin + 'a';
        ans += ch;
    }
}

int main()
{
    clock_t start = clock();
    file_io();
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string str, ans = "";
        cin >> str;
        solve(str, n, ans);
        cout << ans << endl;
    }

    clock_t end = clock();
#ifndef ONLINE_JUDGE
    double cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    cout << "\n\nExecuted In: " << cpu_time_used << endl;
#endif
}