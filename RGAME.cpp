#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

const int N = (int)(1e5+4);
const ll mod = (ll)(1e9+7);
int tt;
int n;
int arr[N];
ll dp[N];
ll dp2[N];
ll val[N];
ll solve(int n,int *arr){
    memset(dp,0,sizeof dp);
    dp[0] = dp[1] = 1;
    for(int i = 2 ;i<=n;i++)
        dp[i] = (dp[i-1]*2)%mod;
     ll p2 = 1LL;
     ll tot_val = 0LL;
     ll cur = 0;
     ll val = 0LL;
     ll fval = 0;
     for(int i = n-1;i>=0;i--){
            p2 = (p2*2)%mod;
            val = (val%mod+((p2%mod*arr[i+1]%mod)%mod))%mod;
            fval = (arr[i]%mod*dp[i]%mod*val%mod)%mod;
            tot_val = (tot_val%mod+fval%mod)%mod;
     }
    return tot_val;
}

   int main(){

       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
       cin >> tt;
       while( tt-- ){
            cin >> n;
       for(int i = 0; i<=n; i++)
       {
           cin >> arr[i];
       }
       if(n==1){
            ll ans = (2LL * (arr[0]%mod) * (arr[1]%mod))%mod;
        cout << ans << endl;
        continue;
       }
       ll ans = solve(n,arr);

       cout << ans << endl;

     }
      return 0;
   }
