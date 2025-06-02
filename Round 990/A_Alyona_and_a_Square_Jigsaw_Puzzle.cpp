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
    ll value = 1, sum = 0;
    int j = 1, count = 0;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        sum += vec[i];

        if (sum == value) {
            count++;
            j += 2;
            value = pow(j, 2);
        }
        else if (sum > value) {
            
            while(sum > value) {
                j += 2;
                value = pow(j, 2);
                if (sum == value) {
                    count++;
                    break;
                }
            }
        }
    }

    cout << count << endl;
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
