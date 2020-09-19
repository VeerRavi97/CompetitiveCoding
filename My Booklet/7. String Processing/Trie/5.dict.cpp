#include <bits/stdc++.h>
using namespace std;
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl '\n'
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

void dfs(trieNode *curr, string str, vector<string> &ans)
{
    // cout << "standing at " << src << " " << s << "\n";
    if (curr->isEnd)
    {
        ans.push_back(str);
    }
    for (int i = 0; i < ALPHABET_SIZE; i++)
    {
        if (curr->children[i])
        {

            // cout << curr->data << "\n";
            char ch = curr->children[i]->data;
            string temp = str + ch;
            dfs(curr->children[i], temp, ans);
        }
    }
}

bool search(string s, vector<string> &ans)
{
    trieNode *curr = root;
    for (int i = 0; i < s.length(); i++)
    {
        int idx = s[i] - 'a';
        if (!curr->children[idx])
            return false;
        curr = curr->children[idx];
    }
    // cout << "\nI am at " << node << "\n";
    dfs(curr, s, ans);
    return true;
}

int32_t main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    IOS;
    int n;
    cin >> n;
    root = new trieNode('\0');
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        insert(s);
    }
    // for (int i = 0; i < nodes; i++)
    // {
    //     for (int j = 0; j < ALPHABET_SIZE; j++)
    //         cout << trie[i][j] << " ";
    //     cout << "\n";
    // }
    // for (int i = 0; i <= nodes; i++)
    // {

    //     cout << visited[i] << " ";
    // }
    // cout << "\n";

    int k;
    cin >> k;
    int index = 0;

    while (k--)
    {
        cout << "Case #" << index + 1 << ":"
             << "\n";
        index++;
        vector<string> ans;
        string s;
        cin >> s;

        bool isFound = search(s, ans);
        if (!isFound)
            cout << "No match."
                 << "\n";
        else
        {
            for (int i = 0; i < ans.size(); i++)
            {
                if (ans[i] != s)
                    cout << ans[i] << "\n";
            }
        }
    }
}
/*
Edge Cases:
1 
set
1
set

2
se
set
2
set
se
*/