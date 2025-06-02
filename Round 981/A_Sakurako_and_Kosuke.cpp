#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
#define ok cout << "ok" << endl
#define nl cout << endl

#define fr(a, b) for(int i = a; i < b; i++) 

void solve() {
    int n;
    cin >> n;
    if (n % 2 != 0) {
        cout << "Kosuke" << endl;
    } else {
        cout << "Sakurako" << endl;
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
