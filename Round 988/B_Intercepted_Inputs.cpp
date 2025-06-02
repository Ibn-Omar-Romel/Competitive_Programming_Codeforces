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
        
        int n;
        cin >> n;

        vector<int>vec(n);
        map<int,int>mp;
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
            mp[vec[i]]++;
        }

        n = n-2;
        int a , b;

        for (auto it : mp) {
            
            if (n % it.first == 0) {
                int value = n / it.first;
                if (value == it.first) {
                    if (it.second >= 2) {
                        a = it.first;
                        b = a;
                        break;
                    }
                }
                if (mp.find(value) != mp.end()) {
                    a = it.first;
                    b = value;
                    break;
                }

            }
        }
        cout << a << " " << b << endl;
        
    }
    return 0;
}
