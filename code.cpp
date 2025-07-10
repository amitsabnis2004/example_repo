#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr)
#define pcnt(x) __builtin_popcount(x)
#define pcntll(x) __builtin_popcountll(x)
#define clz(x) __builtin_clz(x)
#define clzll(x) __builtin_clzll(x)
#define ctz(x) __builtin_ctz(x)
#define ctzll(x) __builtin_ctzll(x)
#define loop(n) for(long long i=0;i<n;i++)
#define rloop(n) for(long long i=(n)-1;i>=0;i--)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define vi(a,n) vector<long long> a(n); for(auto &it:a) cin>>it
#define mod (ll)(1e9+7)

void solve(){
    int n,q;
    cin>>n>>q;
    vi(a,n);
    vector<int> pre(n);
    pre[0] = a[0];
    for(int i=1;i<n;i++){
        pre[i] = pre[i-1] + a[i];
    }
    int sum = accumulate(all(a),0);
    while(q--){
        int l,r,k;
        cin>>l>>r>>k;
        l--,r--;
        int ans = sum - (pre[r] - (l==0 ? 0 : pre[l-1])) + k*(r-l+1);
        if(ans&1) yes;
        else no;
    }  
}

int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}