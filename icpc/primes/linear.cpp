#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n){
    for(long long i = 2; i < n; i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){
    freopen("input.txt","r",stdin); freopen("out.txt","w",stdout);
    ios::sync_with_stdio(false); cin.tie(nullptr);
    auto start = chrono::steady_clock::now();

    long long n = 1e9+7;
    // cin >> n;
    cout << n << " is ";
    if( !isPrime(n) ) cout << "not ";
    cout << "prime\n";

    auto end = chrono::steady_clock::now();

    cout << "runtime: " << chrono::duration_cast<chrono::milliseconds>(end-start).count() << "ms\n";
}