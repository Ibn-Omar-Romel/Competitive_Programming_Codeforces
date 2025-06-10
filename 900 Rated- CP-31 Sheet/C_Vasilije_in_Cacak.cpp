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

        ll n , k , x;
        cin >> n >> k >> x;

        ll sum1 = ( k * ( k + 1 )) / 2;
        ll sum = ( n * ( n + 1 )) / 2;
        
        k = n - k;

        ll sum2 = ( k * ( k + 1 )) / 2;
        sum2 = sum - sum2;

        if ( sum1 <= x and x <= sum2 ) yes;
        else no;  
    }
    return 0;
}