#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
#define ok cout << "ok" << endl
#define nl cout << endl
#define cprint cout << count << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 


void solve() {

    int n;
    cin >> n;

    vector<int>vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int count = 1;
    int current_value = vec[0];

    int i = 0, j = 0;
    
    while(j < n) {
        
        if (vec[j] - vec[i] == 1) {

            while(vec[j] - vec[i] == 1) {
                j++;
            }
            count++;
            i = j;
        }
        else if (vec[j] - vec[i] > 1) {
            count++;
            i = j;

        }
        else{
            current_value = vec[j];
            i = j;
        }
        j++;
    }
    cprint;
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
