#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl

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

        ll sum = 0;

        int a = 0;
        fr( 0 , size ) {

            cin >> a;

            if ( a < 0 ) a = (-1) * a;
            sum += a;
        }

        cout << sum << endl;
        
    }
    return 0;
}
