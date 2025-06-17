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

    vector<pair<int,int>>vec(n);
    long long second_sum = 0;
    int allmin = INT_MAX;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;

        int sm1 = INT_MAX, sm2 = INT_MAX;
        for (int j = 0; j < k; j++) {
            int x;
            cin >> x;

            if (sm1 > x) {
                sm2 = sm1;
                sm1 = x;
            }
            else {
                sm2 = min(sm2, x);
            }
        }
        vec[i] = {sm1, sm2} ;
        second_sum += sm2;
        allmin = min(allmin, sm1);
    }

    long long ans = 0;
    for (int i = 0; i < n; i++) {

        long long sum = second_sum - vec[i].second;
        sum += allmin;

        if (ans < sum)
            ans = sum;
    }
    cout << ans << endl;
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
