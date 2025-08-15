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


void solve() {

    int n;
    cin >> n;

    vector<ll> a(n), b(n);

    for (int i = 0; i < n; i++) 
        cin >> a[i];

    for (int i = 0; i < n; i++) 
        cin >> b[i];


    if ( a[n-1] != b[n-1] ) {
        no;
        return;
    }

    vector<int>vec;

    for (int i = 0; i < n-1 ; i++) {
        vec.push_back(a[i] ^ b[i]);
    }

    int i = 0, j;

    while(i < n-1) {

        if (vec[i] == 0) {
            i++;
            continue;
        }

        j = i;

        while(true) {

            if (vec[j] == a[j+1]) {
                i = j+1;
                break;
            }

            if (j == n-2 || (vec[j+1] != (vec[j] ^ a[j+1]))) {
                no;
                return;
            }

            j++;
        }
    }
    yes;
    

  

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
