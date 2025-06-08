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
    int size, even = 0 , odd = 0;
    cin >> size;

    int arra[size];

    for(int i = 0 ; i < size ; i++){

        cin >> arra[i];

        if(arra[i] % 2 == 0){
            even = even + arra[i];
        }
        else{
            odd = odd + arra[i];
        }
    }

    if(even > odd){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
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
