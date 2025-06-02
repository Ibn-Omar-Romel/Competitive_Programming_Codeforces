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

    int n ;
    cin >> n;

    if ( n == 0 ) 
        cout << 1 << endl;

    else if ( n % 4 == 0 )
        cout << 6 << endl;

    else if ( n % 4 == 1 )
        cout << 8 << endl;

    else if ( n % 4 == 2 )
        cout << 4 << endl;

    else if ( n % 4 == 3 )
        cout << 2 << endl;
    

    return 0;
}
