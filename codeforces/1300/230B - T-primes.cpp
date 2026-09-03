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

const int K=10e6+7;
vi v_gbl(K,1);
// using sieve(no. theory me use hota kaafi), precompute primes
void sieve(){
    v_gbl[0]=0; v_gbl[1]=0;
    int i=2;
    while(i<sqrt(K)){
        if(v_gbl[i]){
            for(int j=i*i; j<K; j=j+i){
                v_gbl[j]=0;
            }
        }
        i++;
    }
}

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
    rep(i,n){
        int tmp=sqrt(v[i]);
        if(tmp*tmp==v[i] && v_gbl[tmp]) cout<<"YES\n";
        else cout<<"NO\n";
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
        sieve();
        solve();
        cout << "\n";
    // }
    return 0;
}
// ./\_/\.
// (>^.^<)
// /  )