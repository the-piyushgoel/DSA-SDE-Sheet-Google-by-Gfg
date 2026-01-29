#include <bits/stdc++.h>
using namespace std;
vector<int> dijkstra(int V, vector<vector<int>> &edges, int src)
{
    vector<vector<pair<int, int>>> adj(V);
    for (auto it : edges)
    {
        adj[it[0]].push_back({it[1], it[2]});
        adj[it[1]].push_back({it[0], it[2]});
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> res(V, INT_MAX);
    pq.push({0, src});
    res[src] = 0;
    while (!pq.empty())
    {
        int wt = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        if (wt > res[node])
            continue;
        for (auto it : adj[node])
        {
            if (res[it.first] > wt + it.second)
            {
                res[it.first] = wt + it.second;
                pq.push({res[it.first], it.first});
            }
        }
    }
    return res;
}