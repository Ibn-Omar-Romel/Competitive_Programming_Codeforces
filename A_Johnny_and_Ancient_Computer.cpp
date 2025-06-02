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

        ll a, b;
        cin >> a >> b;

        if ( a < b ) swap(a,b);

        int flag = 0;
        int count = 0;

        while( a > b ) {
            
            if ( a % 8 == 0  and a / 8 >= b ) { 
                a = a / 8;
                count++;
            }
            else if ( a % 4 == 0 and a / 4 >= b ) {
                a /= 4;
                count++;
            }
            else if ( a % 2 == 0 and a / 2 >= b ) {
                a /= 2;
                count++;
            }
            else {
                break;
            }
        }
        
        if ( a == b ) cout << count << endl;
        else cout << -1 << endl;
    }
    return 0;
}
