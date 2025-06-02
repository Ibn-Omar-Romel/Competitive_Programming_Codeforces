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

        int n, k;
        cin >> n >> k;

        int first[n];
        int second[n];

        ll sum = 0 , count = 0 ;

        for ( int i = 0 ; i < n ; i++ ) {

            cin >> first[i];

            count++;
            if ( count <= k ) sum += first[i];
        }

        for ( int i = 0 ; i < n ; i++ ) {

            cin >> second[i] ;
        }

        vector < int > vec;
        int maxi = 0, upsum = 0 ;
        count = 0;

        for ( int i = 0 ; i < n ; i++ ) {

            count++;

            maxi = max( maxi , second[i]);

            ll value = first[i] + upsum + ((k - count)*maxi);

            vec.push_back(value);
            upsum += first[i];
            //cout << value << " ";

            if ( count == k ) break;
        }
        //cout << endl;

        ll maxElement = -1;

        for ( int i = 0 ; i < vec.size() ; i++ ) {

            if ( maxElement < vec[i] )
                maxElement = vec[i];
        }



        if ( maxElement > sum ) cout << maxElement << endl;
        else cout << sum << endl;
    }
    return 0;
}
