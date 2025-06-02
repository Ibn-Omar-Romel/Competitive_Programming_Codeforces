#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "First\n"
#define no cout << "Second\n"

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

        int a, b, c;
        cin >> a >> b >> c;

        ll sum = a + b + c ;

        if ( a > b ) yes;
        else if ( a < b ) no;
        else{
            if ( c % 2 == 0 ) no;
            else yes;
        }
        
    }
    return 0;
}
