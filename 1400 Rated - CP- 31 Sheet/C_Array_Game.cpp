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

    int n, k;
    cin >> n >> k;

    vector<ll>vec(n);
    fr(0,n) {
        cin >> vec[i];
    }
    if (k >= 3) {
        cout << 0 << endl;
        return;
    }

    sort(vec.begin(), vec.end());
    // for(int i = 0; i < n; i++) { // extra
    //     cout << vec[i] << " ";
    // }
    // cout << endl;
    
    vector<ll>diff;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            diff.push_back(abs(vec[i]-vec[j]));
        }
    }
    sort(diff.begin(), diff.end());


    if (k == 1)
        cout << diff[0] << endl;
    else {

        ll minvalue = LONG_MAX, temp = minvalue;
        for (int i = 0; i < diff.size(); i++) {
            auto index = upper_bound(vec.begin(), vec.end(), diff[i]) - vec.begin();

            if (index != vec.size()) {

                minvalue = min(minvalue, abs(vec[index] - diff[i]));

                if (index > 0) {
                    temp = min(temp, abs(vec[index-1] - diff[i]));
                }
            }
        }
        cout << min(temp, minvalue) << endl;
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
