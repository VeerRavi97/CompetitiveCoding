#include <bits/stdc++.h>
using namespace std;
#define all(c) c.begin(), c.end()

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int n;
        cin >> n;
        int frequency = 0;
        int dead = 0;
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            int input;
            cin >> input;
            v.push_back(input);
        }
        sort(all(v));
        for (int i = 0; i < n; i++)
        {
            int x = v[i];
            if (x > i+1) dead = 1;
            frequency += (i+1 - x);
        }
        string winner = "Second";
        if (!dead && (frequency & 1))
            winner = "First";
        cout << winner << endl;
    }

}