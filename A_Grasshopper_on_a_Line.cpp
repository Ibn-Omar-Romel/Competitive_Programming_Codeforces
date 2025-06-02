#include<bits/stdc++.h>

using namespace std;

#define ll long long int

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ain cin >> arra[i]
#define aout cout << arra[i]
#define vin cin >> vec[i]
#define vout cout << vec[i]
#define ccount cout << count << '\n'
#define cp count++
#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size );
#define ok cout << "ok" << endl


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int x , k ;
        cin >> x >> k;

        if ( x % k != 0 ) {
            cout << 1 << endl;
            cout << x << endl;
        }
        else {
            cout << 2 << endl;
            cout << k+1 << " " << x - (k+1) << endl;
        } 
    }
    return 0;
}
