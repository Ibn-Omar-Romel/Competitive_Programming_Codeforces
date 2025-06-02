#include<bits/stdc++.h>

using namespace std;

#define ll long long int

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ain cin >> arra[i]
#define aout cout << arra[i]
#define vin cin >> vec[i]
#define vout cout << vec[i]
#define ccount cout << count << '\n'
#define cp count++
#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size );
#define ok cout << "ok" << endl

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while( t-- ) {

        int n, s;
        cin >> n >> s;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        s += accumulate(a.begin(), a.end(), 0);
        int sm = 0;
        int cnt = 0;

        for (int i = 1; i <= s; ++i) {
            if (sm >= s) {
                break;
            }
            sm += i;
            cnt = i;
        }

        if (sm != s || *max_element(a.begin(), a.end()) > cnt || cnt <= n) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}