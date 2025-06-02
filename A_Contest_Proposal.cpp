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

        int size;
        cin >> size;

        vector<int> a(size);
        vector<int> b(size);

        for( int i = 0 ; i < size ; i++ ) cin >> a[i];
        for( int i = 0 ; i < size ; i++ ) cin >> b[i];

        int i = 0 , j = 0;
        int count = 0;
        while( i < size and j < size ) {

            if ( a[i] > b[j] ) {
                count++;
                j++;
            }
            else{
                i++;
                j++;
            }
        }
        cout << count << endl;
        
    }
    return 0;
}
