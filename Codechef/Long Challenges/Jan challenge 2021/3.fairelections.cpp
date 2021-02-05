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
int solve(vector<int> &v1, vector<int> &v2, int n, int m, int sum1, int sum2)
{
    int cnt = 0;
    int tot1 = sum1;
    int tot2 = sum2;
    int temp1, temp2;
    for (int i = 0; i < min(n, m); i++)
    {
        if (tot1 > tot2)
            return cnt;
        temp1 = tot1 - v1[i] + v2[i];
        temp2 = tot2 - v2[i] + v1[i];

        tot1 = temp1;
        tot2 = temp2;
        cnt++;
    }
    if (tot1 > tot2)
        return cnt;
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
        int n, m;
        cin >> n >> m;
        vi votes(n, 0);
        vi votes_twin(m, 0);
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            int in;
            cin >> in;
            votes[i] = in;
            sum1 += in;
        }
        for (int i = 0; i < m; i++)
        {
            int in;
            cin >> in;
            votes_twin[i] = in;
            sum2 += in;
        }
        sort(all(votes));
        sort(all(votes_twin), comp);
        int ans = solve(votes, votes_twin, n, m, sum1, sum2);
        cout << ans << endl;
    }

    clock_t end = clock();
#ifndef ONLINE_JUDGE
    double cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    cout << "\n\nExecuted In: " << cpu_time_used << "s" << endl;
#endif
}