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
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<pair<int, int>> qv(q);
    for (int i = 0; i < q; i++) {
        cin >> qv[i].first;
        qv[i].second = i;
    }

    sort(qv.begin(), qv.end());

    ll sum = 0;
    int j = 0;
    vector<ll>ans(q);

    for (int i = 0; i < q; i++) {

        while(j < n and v[j] <= qv[i].first) {
            sum += v[j];
            j++;
        }
        ans[qv[i].second] = sum;
    }

    for (int i = 0; i < q; i++) {
        cout << ans[i] << " ";
    }
    nl;

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



