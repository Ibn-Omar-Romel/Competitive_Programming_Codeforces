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


void solve() {

    int n;
    cin >> n;
    
    vector<int>vec(n);
    for (int i = 0; i < n; i++) {
      cin >> vec[i];
    }
    
    if (n == 1) {
        cout << 1 << endl;
    }
    else {

        int count = 1, flag = 0;
        for (int i = 1; i < n; i++) {
            if (vec[i-1] > vec[i] and flag != 1) {
                count++;
                flag = 1;
            }
            else if (vec[i-1] < vec[i] and flag != -1) {
                count++;
                flag = -1;
            }
        }
        cout << count << endl;
    }
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {
        solve();
    }
    return 0;
}
