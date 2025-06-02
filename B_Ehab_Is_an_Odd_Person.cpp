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

    
    int n;
    cin >> n;

    int even = 0, odd = 0;
    vector<int>vec(n);

    for( int i = 0 ; i < n ; i++ ) {
        cin >> vec[i];
        if ( vec[i] % 2 != 0 )
            odd++; // counting odd
        else
            even++; // counting even
    }


    /*
    If all the elements are odd , then any two ODD + ODD = EVEN.
    If all the elements are even, then any two EVEN + EVEN = EVEN.

    so we can't do any swapping;
    */

    if ( odd == n or even == n  ) { 
        for( int i = 0 ; i < n ; i++ ) {
            cout << vec[i] << " ";
        }
        cout << endl;
    }



    else {

        sort(vec.begin(), vec.end());

        for( int i = 0 ; i < n ; i++ ) {
            cout << vec[i] << " ";
        }
        cout << endl;

    }


    return 0;
}
