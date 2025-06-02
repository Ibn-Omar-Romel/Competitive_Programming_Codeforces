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

    while( t-- ) {
        
        int n;
        cin >> n;
        
        vector<int>vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        
        int count = INT_MAX;
        int same = 1;

        for (int i = n-1 ; i > 0; i--) {
            if (vec[i] == vec[i-1]) {
                same++;
            }
            else{
                count = min(count, n-same);
                same = 1;
            }
        }
        count = min(count, n-same);
        cout << count << endl;
    }
    return 0;
}
