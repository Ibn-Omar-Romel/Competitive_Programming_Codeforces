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
    string l, r;
    cin >> l >> r;

    int count = 0;
    int end = 0;
    while(l[end] == r[end] and end < l.size()) {
        count += 2;
        end++;
    }
    bool flag = false;
    for (int i = l.size()-1; i >= end; i--) {

        if (l[i] == r[i]) {
            if (!flag)
                flag == true;
        }
        if (l[i] == '9' and r[i] == '0') {
            count++;
        }
        else if (r[i] > l[i]) {

            if (flag == true) {
                count++;
                flag = false;
            }
            else {
                char ch = l[i];
                ch++;
                if (ch == r[i]) {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
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
