#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int n;
        cin >> n ;
        if ( n <= 6 or n == 9 ) no;
        else if ( n % 3 == 0 ) {
            yes;
            cout << "1 4 " << n - 5 << endl;
        }
        else {
            yes;
            cout << "1 2 " << n - 3 << endl;
        }
    }
    return 0;
}
