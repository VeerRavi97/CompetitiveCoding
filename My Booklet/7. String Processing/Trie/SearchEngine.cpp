#include <iostream>
using namespace std;
#define MAX_NODES 1111111
#define ALPHABET_SIZE 26

typedef long long ll;
const ll inf = 1e10;
int trie[MAX_NODES][ALPHABET_SIZE];
int mark[MAX_NODES];
int nnodes = 0;
void preset()
{
    nnodes = 0;
    for (ll i = 0; i < MAX_NODES; i++)
    {
        mark[i] = 0;
        for (ll j = 0; j < ALPHABET_SIZE; j++)
            trie[i][j] = 0;
    }
}

int id = 1;
void insert(string s, int pr)
{
    int v = 0;
    for (int i = 0; i < s.length(); i++)
    {

        int d = s[i] - 'a';
        if (!trie[v][d])
        {
            trie[v][d] = id++;
        }
        v = trie[v][d];
        mark[v] = max(mark[v], pr);
    }
}

int search(string s)
{
    int v = 0;
    for (int i = 0; i < s.length(); i++)
    {

        int d = s[i] - 'a';
        if (!trie[v][d])
            return -1;
        v = trie[v][d];
    }
    return mark[v];
}

int main()
{
    ios::sync_with_stdio();
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n, q;
    cin >> n >> q;

    preset();

    for (ll i = 0; i < n; i++)
    {
        string in;
        int pr;
        cin >> in >> pr;
        insert(in, pr);
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