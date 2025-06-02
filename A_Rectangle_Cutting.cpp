#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "Yes\n"
#define no cout << "No\n"

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

        int a, b;
        cin >> a >> b;

        if ( a < b ) swap (a,b);

        if ( a % 2 == 0 and (b*2) != a ) yes;
        else if ( b % 2 == 0 and (a*2) != b ) yes;
        else no;     
    }
    return 0;
}
