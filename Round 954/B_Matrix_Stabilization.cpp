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

        int n, m;
        cin >> n >> m;

        int arra[n][m];
        for ( int i = 0 ; i < n ; i++ ) {

            for ( int j = 0 ; j < m ; j++ ) {

                cin >> arra[i][j];
            }
        }


        for ( int i = 0 ; i < n ; i++ ) {

            for ( int j = 0 ; j < m ; j++ ) {

                int value = 0;
                int updateFlag = 1; 

                if (i - 1 >= 0) {
                    value = max(value, arra[i - 1][j]);
                }
                if (j - 1 >= 0) {
                    value = max(value, arra[i][j - 1]);
                }
                if (i + 1 < n) {
                    value = max(value, arra[i + 1][j]);
                }
                if (j + 1 < m) {
                    value = max(value, arra[i][j + 1]);
                }

                if (i - 1 >= 0 && arra[i][j] <= arra[i - 1][j]) {
                    updateFlag = 0;
                }
                if (j - 1 >= 0 && arra[i][j] <= arra[i][j - 1]) {
                    updateFlag = 0;
                }
                if (i + 1 < n && arra[i][j] <= arra[i + 1][j]) {
                    updateFlag = 0;
                }
                if (j + 1 < m && arra[i][j] <= arra[i][j + 1]) {
                    updateFlag = 0;
                }

                if (updateFlag == 1) {
                    arra[i][j] = value;
                }      
                    
            }
        }




        for ( int i = 0 ; i < n ; i++ ) {

            for ( int j = 0 ; j < m ; j++ ) {

                cout << arra[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
