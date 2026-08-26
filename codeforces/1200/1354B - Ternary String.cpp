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
    string s; cin>>s;
    int l=0,r=1;
    int c1=0,c2=0,c3=0;
    if(s[0]=='1') c1++;
    if(s[0]=='2') c2++;
    if(s[0]=='3') c3++;
    int ans=LLONG_MAX;
    while(l<r && r<s.size()){
        if(s[r]=='1') c1++;
        if(s[r]=='2') c2++;
        if(s[r]=='3') c3++;

        if(c1>0 && c2>0 && c3>0){
            ans=min(ans,(r-l+1));
            while(c1>0 && c2>0 && c3>0 && l<r){
                if(s[l]=='1') c1--;
                if(s[l]=='2') c2--;
                if(s[l]=='3') c3--;
                l++;
            }
            ans=min(ans,(r-l+1));
        }
        r++;
    }

    if(ans==LLONG_MAX) cout<<0;
    else cout<<ans+1;
    return;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
// ./\_/\.
// (>^.^<)
// /  )