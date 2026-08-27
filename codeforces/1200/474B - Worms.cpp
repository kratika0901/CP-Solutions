#include<bits/stdc++.h>
#define int long long
#define double long double
#define endl "\n"
#define rep(i, n) for (int i = 0; i < n; i++)
#define inp_vec(x,v) for(auto &x : v) { cin>>x;}
#define out_vec(x,v) for(auto x : v) 
#define all(v) v.begin(),v.end()
#define vi vector<int>
using namespace std;

const int MOD = 1e9 + 7; // 998244353

// int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
// int lcm(int a, int b) { return (a / gcd(a, b)) * b; }
// int power(int base, int exp) {
//     int res = 1; base %= MOD;
//     while (exp > 0) {
//         if (exp % 2 == 1) res = (res * base) % MOD;
//         base = (base * base) % MOD;
//         exp /= 2;
//     }
//     return res;
// }

void solve()
{
    int n,m; cin>>n; vi v1(n); inp_vec(x,v1)
    cin>>m; vi v2(m); inp_vec(x,v2)
    vector<pair<int,int>> pm;
    vector<pair<pair<int,int>,int>> p;
    p.push_back({{1,v1[0]},1});
    int last=v1[0];
    int i=1;
    while(i<n){
        p.push_back({{last+1,last+v1[i]},i+1});
        last=last+v1[i];
        i++;
    }
    sort(all(p));

    i=0;
    while(i<m){
        pm.push_back({v2[i],i}); // sec one tell the correct pos!!
        i++;
    }

    sort(all(pm));
    int j=0,k=0;
    vi ans(m);
    while(j<m && k<n){
        if(pm[j].first>=p[k].first.first && pm[j].first<=p[k].first.second){
            ans[pm[j].second]=p[k].second;
            j++;
        }
        else k++;
    }

    for(int i=0; i<m; i++){
        cout<<ans[i]<<endl;
    }

    return;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // int t; cin >> t;
    // while(t--)
    // {
        solve();
        cout << "\n";
    // }
    return 0;
}
// ./\_/\.
// (>^.^<)
// /  )