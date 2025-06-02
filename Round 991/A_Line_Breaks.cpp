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

    int t;
    cin >> t;

    while( t-- ) {
        
        int n, m;
        cin >> n >> m;

        int count = 0;
        bool flag = true;

        while(n--) {
            string s;
            cin >> s;

            int len = s.length();

            if (flag) {
                if (m >= len) {
                    count++;
                    m -= len;
                }
                else {
                    flag = false;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
