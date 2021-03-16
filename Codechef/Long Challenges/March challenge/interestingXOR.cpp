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

int main()
{
    clock_t start = clock();
    file_io();
    int tc;
    cin >> tc;
    while (tc--)
    {
        int c;
        cin >> c;
        int count = 0;
        int a = 0, b = 0;
        while (c)
        {
            int last_bit = c & 1;
            if (last_bit)
            {
                a = a | (1 << count);
                b = b & ~(1 << count);
            }
            else
            {
                a = a | (1 << count);
                b = b | (1 << count);
            }

            c = c >> 1;
            count++;
        }
        count--;
        a = a & ~(1 << count);
        b = b | (1 << count);
        cout << a * b << endl;
    }

    clock_t end = clock();
#ifndef ONLINE_JUDGE
    double cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    cout << "\n\nExecuted In: " << cpu_time_used << "s" << endl;
#endif
}