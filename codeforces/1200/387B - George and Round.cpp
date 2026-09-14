//------- राधावल्लभ श्री हरिवंश -------//
//------- त्वदीयं वस्तु गोविन्द: तुभ्यमेव समर्पये -------//
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
    int n,m; cin>>n>>m;
    vi v1(n);inp_vec(x,v1)
    vi v2(m); inp_vec(x,v2)
    int i1=0,i2=0;
    int ans=0;
    while(i1<n && i2<m){
        if(v1[i1]<=v2[i2]){
            i1++; i2++;
            ans++;
        }
        else{
            i2++;
        }
    }
    cout<<n-ans;
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