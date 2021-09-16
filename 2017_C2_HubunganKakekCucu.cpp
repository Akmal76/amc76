/*Akmal Ramadhan*/
/*OSP 2017 - C2. Hubungan Kakek Cucu*/
/*Linear Search*/
#include <bits/stdc++.h>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pll pair<ll, ll>
#define plll pair<ll, pll>
#define mod 1000000007
#define fi first
#define se second
#define mp make_pair
#define pb push_back
using namespace std;

int N, A[100100], banyakhubungan = 0;

int main(){
    fastio;
    cin >> N;
    for(int i=2; i<=N; i++){
        cin >> A[i];
        if(A[i] != 1) banyakhubungan++;
    }
    cout << banyakhubungan << endl;
}