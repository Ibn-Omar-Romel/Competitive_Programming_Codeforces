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
    string p, s;
    cin >> p >> s;
    
    ll i = 0, j = 0;
    while(i < p.size() && j < s.size()) {

        ll count1 = 0;
        char ch = p[i];

        while(i < p.size() and p[i] == ch) {
            count1++;
            i++;
        }

        ll count2 = 0;
        while(j < s.size() and s[j] == ch) {
            count2++;
            j++;
        }

        if (count2 < count1 || count2 > (count1 + count1)) {
            no;
            return;
        }
    }
    if (i == p.size() and j == s.size())
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
