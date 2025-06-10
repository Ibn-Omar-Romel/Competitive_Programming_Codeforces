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

        int size;
        cin >> size;

        int x = 0 , y = 0 , z = 0;
        int flag = 0;

        vector < int > vec(size);

        for ( int i = 0 ; i < size ; i++ ) {

            cin >> vec[i];
        }

        for ( int i = 0 , j = 1, k = 2 ; i < size - 2 ; i++ , j++ , k++ ) {

            if ( vec[i] < vec[j] and vec[j] > vec[k] ) {

                flag = 1;
                x = i+1;
                y = j+1;
                z = k+1;
                break;
            }
        }

        if ( flag == 1 ) {
            yes;
            cout << x << " " << y << " " << z << endl;
        }
        else no;

        
    }
    return 0;
}