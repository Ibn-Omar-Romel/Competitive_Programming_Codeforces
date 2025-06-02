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
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int a, b, c = 0;
        cin >> a >> b >> c;

        ll sum = a + b + c ;

        int mini = min( a, min(b,c));
        int times = sum / 9;

        if ( sum == (times*9) and mini >= times ) yes;
        else no;
        
    }
    return 0;
}
