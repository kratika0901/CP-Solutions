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
    int n,k; cin>>n>>k;
    vi v(n); inp_vec(x,v)
    int l=0,r=n-1;
    int ans=0;
    int c=n-k+1;

    if(k>n/2){
        l=n-k;
        r=k-1;
        rep(i,c){
            ans+=max(v[l],v[r]);
            l--;
            r++;
        }
    }

    else{
        rep(i,n){
            ans+=v[i];
        }

        c=n-c;
        rep(i,c){
            ans-=min(v[l],v[r]);
            l++;
            r--;
        }
    }

    // else{
    //     while(c>0 &&l<=r){

    //         if(l<=0 && r>n-1){
    //             break;
    //         }
    //         if(l<0 &&r<n){
    //             ans+=v[r];
    //             r++;
    //         }

    //         else if(r>=n &&l>=0){
    //             ans+=v[l];
    //             l--;
    //         }

    //         else{
    //             if(v[l]>v[r]){
    //                 ans+=v[l];
    //                 l--;
    //             }

    //             else{
    //                 ans+=v[r];
    //                 r++;
    //             }
    //         }
    //         c--;
    //     }
    // }
    

    cout<<ans;
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