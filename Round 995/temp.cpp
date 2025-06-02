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

int match(const void *x, const void *y) {
    return (*(int*)x - *(int*)y);
}

void solve() {

    int n, k;
    cin >> n >> k;

    int a[n];
    int b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    qsort(a, n, sizeof(int), match);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        if (k > 0) {
            sum += b[i];
            k--;
        }
        else {
            sum += a[i];
        }
    }
    cout << sum << endl;
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
