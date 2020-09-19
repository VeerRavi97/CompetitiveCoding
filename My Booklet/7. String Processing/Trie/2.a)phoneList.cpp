// https://www.spoj.com/problems/PHONELST/

#include <iostream>
using namespace std;
#define MAX_NODES 1111111
#define ALPHABET_SIZE 10

typedef long long ll;
const ll inf = 1e10;
int trie[MAX_NODES][ALPHABET_SIZE];
int mark[MAX_NODES];
int id = 1;
void preset()
{
    id = 1;
    for (ll i = 0; i < MAX_NODES; i++)
    {
        mark[i] = 0;
        for (ll j = 0; j < ALPHABET_SIZE; j++)
            trie[i][j] = 0;
    }
}

int insert(string s)
{
    int v = 0;
    for (int i = 0; i < s.length(); i++)
    {

        int d = s[i] - '0';

        if (!trie[v][d])
        {
            trie[v][d] = id++;
        }
        if (mark[v])
            return 0; // not consistent

        v = trie[v][d];
    }
    mark[v] = 1;
    for (int c = 0; c < ALPHABET_SIZE; c++)
        if (trie[v][c])
            return 0; // not  consistent
    return 1;
}

// int search(string s)
// {
//     int v = 0;
//     for (int i = 0; i < s.length(); i++)
//     {

//         int d = s[i] - 'a';
//         if (!trie[v][d])
//             return -1;
//         v = trie[v][d];
//     }
//     return mark[v];
// }

int main()
{
    ios::sync_with_stdio();
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll tc;
    cin >> tc;
    while (tc--)
    {

        preset();
        ll n;
        cin >> n;

        int ans = 1;
        int start = 1;
        for (ll i = 0; i < n; i++)
        {
            string in;
            cin >> in;
            if (start && ans)
                ans &= insert(in);
            // cout << in << "\n";
            // for (ll k = 0; k < id; k++)
            // {
            //     cout << k << " : ";
            //     for (ll j = 0; j < ALPHABET_SIZE; j++)
            //         cout << trie[k][j] << " ";
            //     cout << "\n";
            // }
            // cout << "\n";
            // for (ll k = 0; k < id; k++)
            // {
            //     cout << mark[k] << " ";
            // }
            // cout << "\n";
        }
        if (ans)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
}