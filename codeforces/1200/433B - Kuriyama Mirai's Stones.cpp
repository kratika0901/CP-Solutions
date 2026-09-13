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

// bool prime(int n){
//     if(n<2) return false;
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0) return false;
//     }
//     return true;
// }

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
    int n; cin>>n;
    vi v(n); inp_vec(x,v)
    int m; cin>>m;
    vector<vector<int>> v2(m); 
    rep(i,m){
        rep(j,3){
            int c; cin>>c;
            v2[i].push_back(c);
        }
    }
    
    vi vcpy=v;
    sort(all(vcpy));
    vi pref1(n+1), pref2(n+1);
    pref1[0]=0;
    pref2[0]=0;

    rep(i,n){
        pref1[i+1]=pref1[i]+v[i];
        pref2[i+1]=pref2[i]+vcpy[i];
    }

    rep(i,m){
        if(v2[i][0]==1){
            cout<<(pref1[v2[i][2]]-pref1[v2[i][1]-1])<<endl;
        }

        else{
            cout<<(pref2[v2[i][2]]-pref2[v2[i][1]-1])<<endl;
        }
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