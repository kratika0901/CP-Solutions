class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {

        if(n==1) return 1;

        vector<vector<int>> adj(n+1, vector<int> (n+1,0));
        vector<int> ans(n+1,0);
        for(int i=0; i<trust.size(); i++){
            int u=trust[i][0];
            int v=trust[i][1];
            adj[u][v]=1;
            ans[v]++;
            ans[u]--;
        }

        // for(int i=0; i<n+1; i++){
        //     for(int j=0; j<n+1; j++){
        //         ans[j]=ans[j]+adj[i][j];
        //         ans[i]=ans[i]-adj[i][j];
        //     }
        // }

        for(int i=0; i<=n; i++){
            if(ans[i]==n-1) return i;
        }
        return -1;
    }
};