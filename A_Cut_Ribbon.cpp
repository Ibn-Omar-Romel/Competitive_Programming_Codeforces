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


    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int arra[n+1];
    arra[0] = 0;

    for ( int i = 1 ; i <= n ; i++ ) {

        int x = INT_MIN, y = INT_MIN,  z = INT_MIN;

        if ( i >= a ) x = arra[i-a];
        if ( i >= b ) y = arra[i-b];
        if ( i >= c ) z = arra[i-c];

        arra[i] = 1 + max(x,max(y,z));
    }

    cout << arra[n] << endl;
    
    return 0;
}
