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
        
        string s;
        cin >> s;
        int n = s.size();

        vector<int>v(n);
        for (int i = 0; i < n; i++) {
            v[i] = s[i] - '0'; // turing the values into integer
        }

        for (int i = 0; i < n; i++) {

            int idx = i;
            int mx = v[i]; // if the value is already bigger

            for (int j = i ; j <= min(n-1, i+12); j++) {

                if (v[j] - (j-i) >= 0 and v[j] - (j-i) > mx) {
                    mx = v[j] - (j-i);
                    idx = j;
                }
            }

            while(idx > i) {
                v[idx]--; // reducing the value by one
                swap(v[idx], v[idx-1]);
                idx--;
            }
        }

        for (int x : v) {
            cout << x;
        }
        cout << endl;
        
    }
    return 0;
}
