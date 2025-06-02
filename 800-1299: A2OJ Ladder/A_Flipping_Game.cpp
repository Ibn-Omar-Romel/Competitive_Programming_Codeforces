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

    int n;
    cin >> n;
    
    vector<int>vec(n);
    int ones = 0;

    for (int i = 0; i < n; i++) {
        cin >> vec[i];

        ones += vec[i];

        if (vec[i]) {
            vec[i] = -1;
        }
        else 
            vec[i] = 1;
    }

    if (ones == n)
        cout << n-1 << endl;
    else {
        int ans = 0, x = 0;
        for (int i = 0; i < n; i++) {

            x = max(x + vec[i], 0);
            ans = max(ans, x);
            //cout << x << " " << ans << endl;
        }
        cout << ans + ones << endl;
    }
    return 0;
}
