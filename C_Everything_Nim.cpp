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

        ll size;
        cin >> size;
        vector <ll> vec(size);
         vector<ll> diff;
        for ( int i = 0 ; i < size ; i++ ) {
            cin >> vec[i]; 
        }
        
        sort( vec.begin(), vec.end() );

        diff.push_back(vec[0]);

        for ( int i = 1 ; i < size ; i++ ) {

            if(vec[i] != vec[i-1])

            diff.push_back( vec[i] - vec[i-1] );
        }

        bool cnt = 1;

        for ( int i = 0 ; i < diff.size() ; i++ ) {

            if ( i == diff.size() - 1 )
                break;

            if ( diff[i] == 1 ) {
                cnt = !cnt ;
            }
            else{
                break;
            }
        }
        cout << ( cnt ? "Alice" : "Bob" ) <<endl;
    }
    return 0;
}
