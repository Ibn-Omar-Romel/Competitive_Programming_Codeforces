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

        vector < int > vec(size);
        vector < int > o;
        vector < int > e;

        for ( int i = 0 ; i < size ; i++ ) {
            cin >> vec[i];
        }
        if ( count(vec.begin(),vec.end(),vec[0]) == size ) cout << -1 << endl;
        else {

            sort(vec.begin(),vec.end());

            o.push_back(vec[0]);
            int flag = 0;
            for ( int i = 1 ; i < size ; i++ ) {

                if ( vec[i-1] != vec[i] ) {

                    flag = 1;
                    e.push_back(vec[i]);
                }
                else if ( flag == 1 ) {
                    e.push_back(vec[i]);
                }
                else{
                    o.push_back(vec[i]);
                }
            }

            cout << o.size() << " " << e.size() << endl;

            for ( auto &x : o ) {
                cout << x << " ";
            }
            nl;
            for ( auto &x : e ) {
                cout << x << " ";
            }
            nl;

        }
        
    }
    return 0;
}
