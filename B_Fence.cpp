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

    int n, k;
    cin >> n >> k;

    int arra[n];

    int index = 1, sum = 0 , presum = 0, minus = 0;

    for ( int i = 0 ; i < n ; i++ ) {

        cin >> arra[i];

        if ( i+1 > k ) {
            sum += arra[i] - arra[minus];
            minus++;

            if ( sum < presum ){
                index = minus+1;
                presum = sum;
            }
        }
        else if ( i+1 == k ) {
            sum += arra[i];
            presum = sum;
        }
        else sum += arra[i];

        // cout << sum << " " << presum << endl;
    }

    if ( n == k ) cout << "1" << endl;
    else cout << index << endl; 
    
    return 0;
}
