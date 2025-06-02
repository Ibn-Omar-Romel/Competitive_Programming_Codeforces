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
#define cp count++

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, l;
    cin >> n >> l;

    int arra[n];
    for ( int i = 0 ; i < n ; i++ ) {
        
        cin >> arra[i];
    }
    sort( arra, arra + n );

    int maxi = INT_MIN;
    for ( int i = 1 ; i < n ; i++ ) {

        maxi = max ( maxi, arra[i] - arra[i-1]);
    }

    if ( (maxi / 2) < arra[0] and arra[0] > ( l - arra[n-1]) ) {
        
        cout << fixed << setprecision(10) << (double) arra[0] << endl;
    }
    else if( (maxi / 2) < ( l - arra[n-1] ) ) {
        
        cout << fixed << setprecision(10) << (double) l - (double)arra[n-1] << endl;
    }
    else{
        cout << fixed << setprecision(10) <<  (double) maxi / (double)2 << endl;
    }

    return 0;
}
