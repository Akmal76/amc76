/*Akmal Ramadhan*/
/*KSN-P 2020 - B6. Mewarnai Kanvas*/
/*Fast Modular Exponential & Prefix Sum*/

#include <bits/stdc++.h>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define mod 1000000007
#define endl "\n"
using namespace std;

ll N, M, K, f[1000100], prefixsum[1000100];

ll fastmodularexponential (ll x, ll y){
    ll res = 1;
    x %= mod;
    if(x == 0) return 0;
    while(y > 0){
        if(y & 1) res = (res * x) % mod;
        y >>= 1;
        x = (x*x) % mod;
    }
    return res;
}

int main(){
    fastio;
    cin >> N >> M >> K;
    f[0] = 1; prefixsum[0] = 1;
    for(ll i=1; i<=N; i++){
        if(i == N){
            if(i-K < 0) {f[i] = (M * (prefixsum[i-1])) % mod;}
            else {f[i] = (M * (prefixsum[i-1] - prefixsum[i-K])) % mod;}
        } else {
            if(i-K < 0) {f[i] = ((M-1) * (prefixsum[i-1])) % mod;}
            else {f[i] = ((M-1) * (prefixsum[i-1] - prefixsum[i-K])) % mod;}
        }
        prefixsum[i] = (f[i] + prefixsum[i-1]) % mod;
    }
    ll hasil = (fastmodularexponential(M, N) - f[N] + mod) % mod;
    cout << hasil << endl;
}