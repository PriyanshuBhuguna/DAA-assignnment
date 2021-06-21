#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> &vis, vector<int> adj[], vector<int> &storeDfs)
{
    storeDfs.push_back(node);
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, vis, adj, storeDfs);
        }
    }
    return;
}

vector<int> dfsOfGraph(int v, vector<int> adj[])
{
    vector<int> vis(v, 0);
    vector<int> storeDfs;

    for (int i = 0; i < v; i++)
    {
        if (!vis[i])
        {
            // vis[i] = 1;
            dfs(i, vis, adj, storeDfs);
        }
    }
    return storeDfs;
}

int main()
{
    int v, e;
    cin >> v >> e;

    vector<int> adj[v];

    for (int i = 0; i < e; i++)
    {
        int f, s;
        cin >> f >> s;

        adj[f].push_back(s);
        adj[s].push_back(f);
    }

    for (int i = 0; i < e; i++)
    {
        cout << "Size:" << adj[i].size() << "->";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    vector<int> dfs = dfsOfGraph(v, adj);
    for (auto it : dfs)
    {
        cout << it << " ";
    }

    return 0;
}