#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
#define ok cout << "ok" << endl
#define nl cout << endl

#define fr(a, b) for(int i = a; i < b; i++) 

void solve() {

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int zero = 0, one = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0')
            zero++;
        else    
            one++;
    }

    int pairs = abs(zero - one) / 2;

    if (k < pairs)
        no;
    else if ((k - pairs) % 2 == 0) 
        yes;
    else 
        no;
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
