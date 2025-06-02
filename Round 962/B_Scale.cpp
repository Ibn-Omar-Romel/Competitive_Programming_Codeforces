#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
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

    while(t--) {
        
        int n, m;
        cin >> n >> m;
        
        char arra[n][n];
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> arra[i][j];
            }
        }

        for(int i = 0; i < n; i += m) {
            for(int j = 0; j < n; j += m) {
                cout << arra[i][j]; 
            }
            cout << endl;
        }
    }
    return 0;
}
