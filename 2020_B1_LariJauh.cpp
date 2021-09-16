/*Akmal Ramadhan*/
/*KSN-P 2020 - B1. Lari Jauh*/
/*Binary Search & Prefix Sum*/
#include <bits/stdc++.h>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int N, K, A, B, PrefixSum[100100], kiri, kanan, tengah, hasil;

int main(){
    fastio;
    cin >> N >> K;
    for(int i=1; i<=N; i++){
        cin >> A;
        //Prefix Sum
        PrefixSum[i] = PrefixSum[i-1] + A;
    }
    for(int i=1; i<=K; i++){
        cin >> B;
        //Binary Search
        kiri = 1;
        kanan = N;
        while(kiri <= kanan){
            tengah = kiri + (kanan-kiri)/2;
            if(B >= PrefixSum[tengah]) {hasil = tengah; kiri = tengah + 1;}
            else if(B < PrefixSum[tengah]) kanan = tengah - 1;
        }
        cout << hasil << endl;
    }
}