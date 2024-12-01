#include <bits/stdc++.h>
using namespace std;
///////////////////////////////////***********TC -> V*(logV + ElogV) *********************************/////////////////
//////////////////////////////////////////////***EVlog(V)*******//////////////////////////////////////////////////////

#define P pair<int, int>
vector<int> dijkstra(vector<vector<P>> &adj, int n, int src)
{
  vector<int> result(n, INT_MAX);

  priority_queue<P, vector<P>, greater<P>> pq; // min heap
  pq.push({0, src});
  result[src] = 0;

  while (!pq.empty())
  {
    auto p = pq.top();
    int wt = p.first;
    int node = p.second;

    for (auto &vec : adj[node])
    {
      int neighbour_node = vec.first;
      int neighbour_wt = vec.second;

      if (wt + neighbour_wt < result[neighbour_node])
      {
        result[neighbour_node] = wt + neighbour_node;
        pq.push({wt + neighbour_node, neighbour_node});
      }
    }
  }
  return result;
}
