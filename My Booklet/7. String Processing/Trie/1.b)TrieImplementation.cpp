#include <bits/stdc++.h>
using namespace std;
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define endl '\n'
#define all(c) c.begin(), c.end()

typedef vector<int> vi;
const int MOD = 1e9 + 7;
const int INF = 1e18;
#define ALPHABET_SIZE 26

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
void insert(string str)
{
    trieNode *curr = root;
    for (auto ch : str)
    {
        int idx = ch - 'a';
        if (!curr->children[idx])
        {
            trieNode *nNode = new trieNode(ch);
            curr->children[idx] = nNode;
        }
        curr = curr->children[idx];
    }
    curr->isEnd = true;
}

vector<string> words;
void dfs(trieNode *curr, int level, string str)
{
    // cout << "standing at  " << curr->data << " " << level << "\n";
    if (curr->isEnd)
    {
        words.push_back(str);
    }

    for (int i = 0; i < ALPHABET_SIZE; i++)
    {
        if (curr->children[i])
        {

            // cout << curr->data << "\n";
            char ch = curr->children[i]->data;
            string temp = str + ch;
            dfs(curr->children[i], level + 1, temp);
        }
    }
}

bool search(string str)
{
    trieNode *curr = root;
    for (auto ch : str)
    {
        int idx = ch - 'a';
        if (!curr->children[idx])
            return false;
        curr = curr->children[idx];
    }

    return curr->isEnd;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    int tc;
    // cin >> tc;
    tc = 1;
    while (tc--)
    {

        // cin >> n;
        root = new trieNode('\0');
        string dict[] =
            {
                "lexicographic", "sorting", "of", "a", "set", "of", "keys", "can",
                "be", "accomplished", "with", "a", "simple", "trie", "based",
                "algorithm", "we", "insert", "all", "keys", "in", "a", "trie",
                "output", "all", "keys", "in", "the", "trie", "by", "means", "of",
                "preorder", "traversal", "which", "results", "in", "output", "that",
                "is", "in", "lexicographically", "increasing", "order", "preorder",
                "traversal", "is", "a", "kind", "of", "depth", "first", "traversal"};
        int n = sizeof(dict) / sizeof(dict[0]);
        for (int i = 0; i < n; i++)
        {
            string str;
            str = dict[i];
            // cin >> str;
            insert(str);
        }

        string str = "";
        dfs(root, 0, str);
        // for (int i = 0; i < n; i++)
        // {
        //     string str;
        //     cin >> str;
        //     bool isFound = search(str);
        //     if (isFound)
        //         cout << str << " FOUND "
        //              << "\n";
        //     else
        //         cout << str << " NOT FOUND "
        //              << "\n";
        // }

        cout << "THE WORDS are "
             << "\n";
        for (auto word : words)
            cout << word << "\n";
    }
}