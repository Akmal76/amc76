/*Akmal Ramadhan*/
/*OSP 2017 - C2. Hubungan Kakek Cucu*/
/*Linear Search*/
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
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
