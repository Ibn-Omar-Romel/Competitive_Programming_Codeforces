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

    int n;
    cin >> n;

    string s; 
    cin >> s;

    vector<int>vec1(26, 0); // for first substring
    int i = 0;
    int count1 = 0;

    while(i < n) {
        if (vec1[s[i]-'a'] == 0) // distinct character
            count1++;
        else {
            break;
        }

        vec1[s[i]-'a']++;
        i++;
    }


    vector<int>vec2(26, 0); // for second substring
    int count2 = 0;

    while(i < n) {
        if (vec2[s[i]-'a'] == 0)
            count2++;

        vec2[s[i]-'a']++;
        i++;
    }

    cout << count1 + count2 << endl;
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
