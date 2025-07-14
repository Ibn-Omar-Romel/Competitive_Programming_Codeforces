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

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        string s;
        cin >> s;

        for (int j = 0; j < a; j++) {

            if (s[j] == 'D') {
                if (vec[i] == 9)
                    vec[i] = 0;
                else 
                    vec[i]++;
            }
            else {
                if (vec[i] == 0)
                    vec[i] = 9;
                else    
                    vec[i]--;
            }
        }
        cout << vec[i] << " ";
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
