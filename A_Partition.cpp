#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int size;
    cin >> size;

    ll sum1 = 0, sum2 = 0;

    int arra[size];

    for ( int i = 0 ; i < size ; i++  ) {

        cin >> arra[i];
        if ( arra[i] < 0 ) sum1 += arra[i];
        else sum2 += arra[i]; 
    }
    cout << sum2 - sum1 << endl;

    return 0;
}


