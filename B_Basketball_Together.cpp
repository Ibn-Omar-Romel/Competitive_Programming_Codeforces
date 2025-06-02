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

    int size, d ;
    cin >> size >> d;

    vector < int > vec(size);

    for ( int i = 0 ; i < size ; i++ ) {

        cin >> vec[i];
    }

    vsort;
    int count = 0;
    for ( int i = size-1 ; i >= 0 ; i-- ) {

        ll value = ceil( (double) d / (double) vec[i]);

        if( ceil( (double) d / (double) vec[i]) == d/vec[i] ) value++;

        if ( size >= value and vec[i]*value > d) {
            count++;
            size -=  value;
        }
        else{
            break;
        }
    }
    cout << count << "\n";
    

    return 0;
}
