#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 


vector<bool> prime(1e7 + 1, true);
void SieveOfEratosthenes() {

    prime[0] = prime[1] = false;

    for (int p = 2; p * p <= 1e7; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= 1e7; i += p)
                prime[i] = false;
        }
    }
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; 1LL * i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve() {

    int x, k;
    cin >> x >> k;

    if (x == 1 and k == 2) {
        yes;
        return;
    }
    else if (x >= 1e7) {

        if (k == 1 and isPrime(x)) {
            yes;
        }
        else {
            no;
        }
    } 
    else {
        if (prime[x] and k == 1) {
            yes;
        }
        else {
            no;
        }
    }
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    SieveOfEratosthenes();

    while( t-- ) {
        solve();
    }
    return 0;
}
