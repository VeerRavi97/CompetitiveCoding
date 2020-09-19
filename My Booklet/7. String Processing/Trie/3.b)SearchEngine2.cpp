
#include <iostream>
using namespace std;
#define MAX_NODES 1111111
#define ALPHABET_SIZE 26

typedef long long ll;
const ll inf = 1e18;
class trieNode
{
public:
    trieNode *children[ALPHABET_SIZE];
    bool isEnd;
    char data;
    int priority;
    trieNode(char data)
    {
        for (int i = 0; i < ALPHABET_SIZE; i++)
            children[i] = nullptr;
        this->isEnd = false;
        this->data = data;
        this->priority = 0;
    }
};
trieNode *root = NULL;
void insert(string s, int pr)
{
    trieNode *curr = root;
    for (int i = 0; i < s.length(); i++)
    {

        int idx = s[i] - 'a';
        if (!curr->children[idx])
        {
            trieNode *nNode = new trieNode(s[i]);
            curr->children[idx] = nNode;
        }
        curr->children[idx]->priority = max(pr, curr->children[idx]->priority);
        curr = curr->children[idx];
    }
    curr->isEnd = true;
}

int search(string s)
{
    trieNode *curr = root;
    for (int i = 0; i < s.length(); i++)
    {

        int idx = s[i] - 'a';
        if (!curr->children[idx])
            return -1;
        curr = curr->children[idx];
    }
    return curr->priority;
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
    root = new trieNode('\0');

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