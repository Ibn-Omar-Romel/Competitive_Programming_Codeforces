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
        
        string s;
        cin >> s;

        int n = s.size();

        int q;
        cin >> q;

        if (n < 4) {
            while(q--) {
                int a, b;
                cin >> a >> b;
                no;
            }
        }
        else {
            
            int count = 0;
            for (int i = 0; i < n-3 ; i++) {
                if (s[i] == '1' and s[i+1] == '1' and s[i+2] == '0' and s[i+3] == '0') {
                    count++;
                }
            }

            while(q--) {

                int a;
                char b;
                cin >> a >> b;
                
                a--; //zero indexed
        
                if (s[a] != b) {

                    for (int i = a-3; i <= a ; i++) {
                        if (i < 0 or i+3 >= n)
                            continue;
                        else {
                            if (s[i] == '1' and s[i+1] == '1' and s[i+2] == '0' and s[i+3] == '0') {
                                count--;
                                break;
                            }
                        }
                    }

                    s[a] = b;

                    for (int i = a-3; i <= a ; i++) {
                        if (i < 0 or i+3 >= n)
                            continue;
                        else {
                            if (s[i] == '1' and s[i+1] == '1' and s[i+2] == '0' and s[i+3] == '0') {
                                count++;
                                break;
                            }
                        }
                    }
                }

                (count > 0) ? yes : no;
                    
                
            }

        }

        
    }
    return 0;
}
