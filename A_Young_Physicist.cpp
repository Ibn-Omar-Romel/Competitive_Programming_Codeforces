#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    int sum1 = 0, sum2 = 0, sum3 = 0;
    while( t-- ) {
        
        int a, b, c;
        cin >> a >> b >> c;

        sum1 += a;
        sum2 += b;
        sum3 += c;
    }
    
    if ( sum1 == 0 and sum2 == 0 and sum3 == 0)
        yes;
    else 
        no;
    
    return 0;
}
