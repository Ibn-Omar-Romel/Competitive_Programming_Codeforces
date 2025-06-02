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

    int t;
    cin >> t;

    while( t-- ) {

        // int size;
        // cin >> size;

        // vector <int> vec(size);
        // for (int i = 0; i < size; i++) {
        //     cin >> vec[i];
        // }

        // int a = vec[0];

        // int l = 0;
        // int r = size-1;

        // bool flag1 = false, flag2 = false;

        // while( l <= r ) {

        //     if ( vec[l] == a and flag1 == false ) l++;
        //     else flag1 = true;
            
        //     if ( vec[r] == a and flag2 == false ) r--;
        //     else flag2 = true;
            
        //     if( flag1 == true and flag2 == true ) break;
        // }

        // if ( l > r ) cout << 0 << endl;
        // else {
        //     int value = r - l + 1;
        //     int a = vec[0];

        //     l = 0;
        //     r = size-1;
        //     a = vec[size-1];

        //     flag1 = false;
        //     flag2 = false;

        //     while( l <= r ) {

        //         if ( vec[l] == a and flag1 == false ) l++;
        //         else flag1 = true;
                
        //         if ( vec[r] == a and flag2 == false ) r--;
        //         else flag2 = true;
                
        //         if( flag1 == true and flag2 == true ) break;
        //     }

        //     cout << min(value, r - l + 1 ) << endl;
        // }
    }
    return 0;
}

