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

        int narr;
        cin >> narr;

        vector<vector<int> > vec(narr);
        for (int j = 0 ; j < narr; j++) {

            int size;
            cin >> size;

            for( int i = 0 ; i < size; i++ ) {
                int a;
                cin >> a;

                vec[i].push_back(a);
            }
        }

        
        
    }
    return 0;
}
