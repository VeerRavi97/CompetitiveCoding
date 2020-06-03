#include <iostream>
using namespace std;
#define MAX_NODES 1111111
#define ALPHABET_SIZE 26
typedef long long ll;
ll trie[MAX_NODES][ALPHABET_SIZE];
ll mark[MAX_NODES];
ll id = 1;
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

void insert(string &s)
{
    int v = 0;
    for (ll i = 0; i < s.length(); i++)
    {
        ll d = s[i] - 'a';
        if (!trie[v][d])
        {
            trie[v][d] = id++;
        }
        v = trie[v][d];
        mark[v] += 1;
    }
}

int search(string s)
{
    int v = 0;
    for (int i = 0; i < s.length(); i++)
    {

        int d = s[i] - 'a';
        if (!trie[v][d])
            return 0;
        v = trie[v][d];
    }
    return mark[v];
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    preset();
    ll n, q;
    cin >> n >> q;
    for (ll i = 0; i < n; i++)
    {
        string in;
        cin >> in;
        insert(in);
        // cout << in << "\n";
        // for (ll k = 0; k < id; k++)
        // {
        //     cout << k << " : ";
        //     for (ll j = 0; j < ALPHABET_SIZE; j++)
        //         cout << trie[k][j] << " ";
        //     cout << "\n";
        // }
        // cout << "\n\n";
        // for (ll k = 0; k < id; k++)
        // {
        //     cout << mark[k] << " ";
        // }
        // cout << "\n";
    }
    while (q--)
    {
        string s;
        cin >> s;
        int ans = -1;
        ans = search(s);
        cout << ans << "\n";
    }
}