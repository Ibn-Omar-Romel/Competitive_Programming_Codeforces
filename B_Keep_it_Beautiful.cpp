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
        cin >> n;

        vector < int > vec(n);

        for ( int i = 0 ; i < n ; i++ ) {

            cin >> vec[i];
        }

        int c1 = vec[0] , c2 = 0, end = -1; 

        string s = "";
        bool flag = false;

        for ( int i = 0 ; i < n ; i++ ) {

            if ( vec[i] >= c1 and vec[i] >=  c2 and flag == false ) { // taking value initially
                s += '1';
                c2 = vec[i];
            }

            else if (  vec[i] < c2 and flag == false ) { 
                flag = true;
                if ( vec[i] <= c1 ) {
                    s += '1';
                    end = vec[i];
                } 
                else {
                    s += '0';
                }
            }
            else if ( flag == true and vec[i] >= c2  and end == -1 ) {
                s += '1';
                c2 = vec[i];
            }
            else if ( flag == true and end <= vec[i] and vec[i] <= c1 ) {
                s += '1';
                end = vec[i];
            }
            else {
                s += '0';
            }
        }
        cout << s << endl;
    }
    return 0;
}
