// https://www.spoj.com/problems/PHONELST/

#include <iostream>
using namespace std;
#define MAX_NODES 1111111
#define ALPHABET_SIZE 10

typedef long long ll;
const ll inf = 1e10;
class trieNode
{
public:
    trieNode *children[ALPHABET_SIZE];
    bool isEnd;
    char data;
    trieNode(char data)
    {
        for (int i = 0; i < ALPHABET_SIZE; i++)
            children[i] = nullptr;
        this->isEnd = false;
        this->data = data;
    }
};

trieNode *root = NULL;
int insert(string s)
{
    trieNode *curr = root;
    for (int i = 0; i < s.length(); i++)
    {

        int idx = s[i] - '0';
        if (!curr->children[idx])
        {
            trieNode *nNode = new trieNode(s[i]);
            curr->children[idx] = nNode;
        }
        if (curr->children[idx]->isEnd)
            return 0; // not consistent

        curr = curr->children[idx];
    }
    curr->isEnd = true;
    for (int c = 0; c < ALPHABET_SIZE; c++)
        if (curr->children[c])
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

        root = new trieNode('\0');
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