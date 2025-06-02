#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        ll size;
        cin >> size;

        ll a, b, c,d;
        for ( int i = 0 ; i < size ; i++ ) {

            cin >> d;
            
            if( i == 0) a = d;
            else if( i == 1 ) b = d;
            else if( i == size -1 ) c = d;
        }

        if( a + b <= c) cout << "1 2 " << size << '\n';
        else cout << "-1\n";

    }
    return 0;
}
