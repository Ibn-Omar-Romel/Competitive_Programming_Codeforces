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


ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}


ll LCM_calculate(ll a, ll b) {
    ll value = gcd(a, b);

    if (a / value > LLONG_MAX / b) 
        return -1;

    return (a / value) * b;
}


void solve() {

    int n;
    cin >> n;

    vector<ll> pre(n), suf(n);

    for (int i = 0; i < n; i++) {
        cin >> pre[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> suf[i];
    }

    for (int i = 1 ; i < n; i++) {
        if (pre[i-1] % pre[i] != 0) {
            no;
            return;
        }
    }


    for (int i = 1; i < n; i++) {
        if (suf[i] % suf[i-1] != 0) {
            no;
            return;
        }
    }

    vector<ll>ans(n);
    for (int i = 0; i < n; i++) {
        ll lcm = LCM_calculate(pre[i], suf[i]);
        if (lcm == -1) {
            no;
            return;
        }
        ans[i] = lcm;
    }

    ll current_value = ans[0];
    if (current_value != pre[0]) {
        no;
        return;
    }

    for (int i = 1; i < n; i++) {
        current_value = gcd(current_value, ans[i]);
        if (current_value != pre[i]) {
            no;
            return;
        }
    }

    current_value = ans[n-1];
    if (current_value != suf[n-1]) {
        no;
        return;
    }

    for (int i = n - 2; i >= 0; i--) {
        current_value = gcd(ans[i], current_value);
        if (current_value != suf[i]) {
            no;
            return;
        }
    }

    yes;
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
