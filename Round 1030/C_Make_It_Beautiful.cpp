#include<bits/stdc++.h>

using namespace std;

#define ll unsigned long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }


    ll total = 0;
    
    for (int i = 0; i <= 60; i++) {

        ll setOne = 0, setZero = 0;
        for (int j = 0; j < n; j++) {
            if (v[j] & (1LL << i)) {
                setOne++;
            }
            else {
                setZero++;
            }
        }

        ll index_value = (1LL << i); // value of that index, like if index was 2, then 2^2 = 4 

        ll minimum_operation = min(k/index_value , setZero); // minimum operation that I can perform

        total += (setOne + minimum_operation); // adding new values

        k -= (index_value * minimum_operation); // subtracting k from the values

        // if (k < index_value) // no more changes cause next index value will be bigger
        //     break;
    }
    cout << total << endl;
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {
        solve();
    }
    return 0;
}
