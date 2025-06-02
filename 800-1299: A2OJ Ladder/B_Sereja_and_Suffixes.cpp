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

    int n, m;
    cin >> n >> m;

    vector<int>vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    unordered_map<int,int>mp;
    vector<int>distinct(n);
    int value = 0;
    for (int i = n-1; i >= 0; i--) {

        if(mp.find(vec[i]) == mp.end()) {
            value++;
              
        }
        distinct[i] = value;
        mp[vec[i]]++;
    }

    while(m--) {
        int l;
        cin >> l;
        cout << distinct[l-1] << endl;
    }
    
    return 0;
}
