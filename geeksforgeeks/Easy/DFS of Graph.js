class Solution {
  public:
    void dfs(int node, vector<int> &ls, vector<int> &vis, vector<vector<int>> &adj){
        vis[node]=1;
        ls.push_back(node);
        for(auto it: adj[node]){
            if(!vis[it]){
                dfs(it,ls,vis,adj);
            }
        }
        return;
    }
  
  
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        int n=adj.size();
        vector<int> vis(n+1,0);
        vector<int> ls;
        dfs(0,ls,vis,adj);
        return ls;
    }
};