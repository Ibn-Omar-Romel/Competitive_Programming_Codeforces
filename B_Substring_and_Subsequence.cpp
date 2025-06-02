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
        
        string a, b;
        cin >> a >> b;

        if ( a == b ) {
            cout << a.size() << endl;
        }
        else {

            int value = INT_MIN;
            for ( int i = 0 ; i < b.size(); i++ ) {
                
                int temp = i;
                for ( int j = 0 ; j < a.size(); j++ ) {

                    if ( b[i] == a[j] ) {
                        temp++;
                    }
                }
                value = max(value, temp - i - 1);
                cout << value << endl;
            }

            cout << a.size() + b.size() - value << endl;
            
        }
    }

    return 0;
}
