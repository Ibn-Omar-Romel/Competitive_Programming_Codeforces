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
    vector<vector<int>> vec(n, vector<int>(n));
    set<int>st;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> vec[i][j];
            st.insert(vec[i][j]);
        }
    }

    // finding the missing value
    int value = 0;
    int a = 1;
    for (auto it : st) {
        if (a != it) {
            value = a;
            break;
        }
        a++;
    }
    if (value == 0) 
        value = st.size() +1;

    cout << value << " ";


    // printing the rest
    for (int i = 0; i < n; i++) {
        cout << vec[0][i] << " ";
    }
    for (int i = 1; i < n; i++) {
        cout << vec[i][n-1] << " ";
    }
    cout << endl;  
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
