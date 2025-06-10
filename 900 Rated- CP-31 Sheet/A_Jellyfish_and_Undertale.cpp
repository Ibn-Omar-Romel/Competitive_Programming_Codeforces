#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define vec vector
#define st string

#define yes cout << "YES\n"
#define no cout << "NO\n"

#define ain cin >> arra[i]
#define aout cout << arra[i]
#define vin cin >> vec[i]
#define vout cout << vec[i]

#define ccount cout << count << '\n'
#define cp count+


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int a, b, n;
        cin >> a >> b >> n;

        int arra[n];
        ll sec = b ;

        b = 1 ;
        for ( int i = 0 ; i < n ; i++ ) {

            ain;

            if ( b + arra[i] > a )  sec += a - 1;
            else sec += arra[i];
        }
        
        cout << sec << endl;
    }
    return 0;
}