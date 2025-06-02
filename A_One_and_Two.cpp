#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int size;
        cin >> size;

        int a , two = 0, ones = 0;

        vector <int> vec; 


        for ( int i = 0 ; i < size ; i++ ) {

            cin >> a;
            if ( a % 2 == 0 ) {
                two++;
                vec.push_back(i+1);
            }
            else ones++;
        }

        if ( ones == size ) cout << 1 << endl;
        else if ( two % 2 != 0 ) cout << -1 << endl;
        else {
            cout << vec[(vec.size() / 2)-1] << endl;
        }
        
    }
    return 0;
}
