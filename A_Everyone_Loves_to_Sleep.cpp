#include<bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int n,H,M;
        cin >> n >> H >> M ;

        int sleep = ( H * 60 ) + M;

        vector < int > alarm(n);
        for ( int i = 0 ; i < n ; i++ ) {

            int a, b;
            cin >> a >> b;
            alarm[i] = ( a * 60 ) + b ;
        }

        sort ( alarm.begin() , alarm.end() ); 
        int flag = 0;
        int ans = INT_MAX; 
        for ( int i = 0 ; i < n ; i++ ) {

            if ( alarm[i] >= sleep ) {

                ans =  min( ans , alarm[i] - sleep ) ;
                flag = 1;
                break;
            }
        }

        if ( flag == 1 ) {

            cout << ans / 60 << " " << ans % 60 << endl;
        }
        else {

            int temp = INT_MAX;

            if ( sleep > alarm[n-1] ) {

                temp = (1440 - sleep) + alarm[0];
            }

            ans = min( ans, temp );
            cout << ans / 60 << " " << ans % 60 << endl;
        }
    }

    return 0;
}
