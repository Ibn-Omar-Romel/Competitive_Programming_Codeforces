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
        
        int n;
        cin >> n;

        if (n <= 4) {
            cout << -1 << endl;
        } 
        else {
            for (int i = 2; i <= n; i+= 2) {
                if (i != 4) {
                    cout << i << " ";
                }
            }
            cout << "4 5 ";
            for (int i = 1; i <= n; i+= 2) {
                if (i != 5) {
                    cout << i << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
