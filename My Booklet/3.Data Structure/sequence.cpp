#include <bits/stdc++.h>
using namespace std;
#define int long long
int sequence[1000002];
void reset()
{
    for (int i = 0; i < 1000002; i++)
        sequence[i] = -1;
}
void generate(int m, int limit)
{
    long long a = 0;
    long long b = 1;
    sequence[0] = a;
    sequence[1] = b;
    //  cout << a << " " << b << " ";
    for (int i = 2; i <= limit + 1; i++)
    {
        sequence[i] = (sequence[i - 1] * sequence[i - 1] * sequence[i - 1] + sequence[i - 2] * sequence[i - 2] * sequence[i - 2]) % m;
        // if (i <= 100)
        //     cout << sequence[i] << " ";
        // if ((i + 2) % 10 == 0 && i <= 100)
        //     cout << endl;
    }
    // cout << endl;
}
int solve(int n, int m)
{
    int ans = -1;
    if (n > 1000000)
    {
        generate(m, 1000001);
        int a = sequence[1000000 - 1];
        int b = sequence[1000000];
        int x;
        // cout << "pair " << a << " " << b << " " << c << endl;
        for (int i = 0; i <= 100000; i++)
        {
            if (sequence[i] == a && sequence[i + 1] == b)
            {
                x = i;
                break;
            }
        }
        int b2 = 1000001;
        int b1 = x + 2;
        int index = (n - b2) % (b2 - b1) + b1;
        // cout << x << " " << sequence[x] << " " << sequence[x + 1] << " " << sequence[x + 2] << " " << index << endl;
        b2 = 1000001 - 2;
        b1 = x;
        int index2 = (n - b2) % (b2 - b1) + b1;
        // cout << index << " " << index2 << " " << (index == index2) << endl;
        ans = sequence[index];
    }
    else
    {
        generate(m, n);
        ans = sequence[n];
    }

    return ans;
}

int32_t main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int tc, index;
    cin >> tc;
    index = 1;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        reset();
        // generate(m);
        int ans = solve(n, m);
        cout << "# " << index << " " << ans << endl;
        index++;
    }
    cout << "Done in " << clock() / CLOCKS_PER_SEC << "sec" << endl;
    return 0;
}