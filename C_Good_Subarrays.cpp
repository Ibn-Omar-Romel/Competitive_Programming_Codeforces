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
        string s;
        cin >> s;

        vector<int>prefix;
        int count = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {

            sum += (s[i]-'0');
            // if (s[i] == '1')
            //     count++;
            prefix.push_back(sum);
            cout << sum << " ";
        }
        cout << endl;

        
        int i = 0, j = 0;
        int value = 1;

        while( j < n ) {
            if (prefix[j] == (j-i+1)) {
                count++;
            } else {
                while(i <= j) {
                    i++;
                    if (prefix[i] == (j-i+1))
                        count++;
                }
            }
            j++;
        }
        cout << count << endl;
        
    }
    return 0;
}
