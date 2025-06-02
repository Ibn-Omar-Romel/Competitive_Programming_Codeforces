#include<bits/stdc++.h>


using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int size;
        cin >> size;

        vector < int > vec(size,0);
        for ( int i = 0 ; i < size ; i++ ) {

            cin >> vec[i];
        }

        sort( vec.begin(), vec.end() );

        int count = 1;

        for ( int i = 1 ; i < size ; i++ ) {

            if( vec[i] != vec[i-1] ){
                count++;
            }
        }

        cout << count << '\n';

    }
    return 0;
}