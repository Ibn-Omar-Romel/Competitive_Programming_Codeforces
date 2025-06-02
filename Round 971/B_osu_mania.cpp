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


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {
        
        int a;
        cin >> a;

        char arra[a][4];
        for (int i = 0 ; i < a; i++) {

            for ( int j = 0; j < 4 ; j++ ) {
                cin >> arra[i][j];
            }
        } 

        vector<int>vec;
        for (int i = 0 ; i < a; i++) {

            for ( int j = 0; j < 4 ; j++ ) {
                if ( arra[i][j] == '#') {
                    vec.push_back(j+1);
                }
            }
        } 

        for ( int i = vec.size()-1 ; i >= 0; i--) {
            cout << vec[i] << " ";
        }
        cout << endl;
        
    }
    return 0;
}
