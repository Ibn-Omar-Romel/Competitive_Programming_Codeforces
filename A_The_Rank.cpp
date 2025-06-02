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

    int n;
    cin >> n;

    int count = 1;

    int marks = 0 , com = 0;
    int a , b , c , d;
    cin >> a >> b >> c >> d;

    marks = a + b + c + d;

    for ( int i = 1 ; i < n ; i++ ) {

        cin >> a >> b >> c >> d;
        com = a + b + c + d;

        if ( com > marks ) count++;
    }

    cout << count << endl;

    return 0;
}
