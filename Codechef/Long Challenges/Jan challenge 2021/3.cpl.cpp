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
bool comp(int a, int b)
{
    return a > b;
}
int minNum(int height, vector<int> &v, int index = 0)
{

    int cnt = 0;
    int sum = 0;
    for (int i = index; i < v.size(); i++)
    {
        if (sum >= height)
            return cnt;
        sum += v[i];
        cnt++;
    }
    return 0;
}

int main()
{
    clock_t start = clock();
    file_io();
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, sum;
        cin >> n >> sum;
        vi v(n, 0);
        for (int i = 0; i < n; i++)
        {
            int in;
            cin >> in;
            v[i] = in;
        }
        sort(all(v));
        reverse(all(v));
        int ans = minNum(sum, v);
        ans += minNum(sum, v, ans);
        cout << ans << endl;
    }

    clock_t end = clock();
#ifndef ONLINE_JUDGE
    double cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    cout << "\n\nExecuted In: " << cpu_time_used << "s" << endl;
#endif
}