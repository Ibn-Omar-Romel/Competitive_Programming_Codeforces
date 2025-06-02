#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define vec vector
#define st string

#define yes cout << "YES\n"
#define no cout << "NO\n"

#define ain cin >> arra[i]
#define aout cout << arra[i]
#define vin cin >> vec[i]
#define vout cout << vec[i]

#define aii arra[i+1]
#define iia arra[i-1]

#define ccount cout << count << '\n'
#define cp count++


int Binary_Search( int arra[], int size , int key ) {

    int start = 0;
    int end = size - 1;

    while ( end - start > 1 ) {

        int mid = ( start + end ) / 2 ;

        if ( arra[mid] <= key ) 
            start = mid + 1 ;
        else
            end = mid ;
    }
    if( arra[start] > key ) return start;
    if( arra[end] > key ) return end;
    return -1 ;
}



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int arra[n];

    for ( int i = 0 ; i < n ; i++ ) ain;
    sort ( arra , arra + n );

    int q;
    cin >> q;

    for ( int i = 0 ; i < q ; i++ ) {

        int a;
        cin >> a;

        if ( a < arra[0] ) cout << 0 << '\n';
        else if ( a >= arra[n-1] ) cout << n << '\n';
        else{

            int value = Binary_Search( arra, n, a );
            cout << value << '\n';

            // or we can just use this
            // auto it = upper_bound(arra, arra + n , a);
            // cout << it - arra << '\n';
        }
  
    }
    return 0;
}