#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
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

        int flag = 0;

        if ( n == 1 ) {
            if ( s == "U" ) yes;
            else no;
        }
        else if ( n == 2  and flag == 0) {

            if ( (s[0] == 'U' and s[1] == 'U') or  (s[0] == 'D' and s[1] == 'D'))
                no;
            else 
                yes;
        }
        else {
            
            for( int i = 0 ; i < s.size(); ) {

                if ( s[i] == 'U' and i == 0 ) {

                    s[s.size()-1] = (s[s.size()-1] == 'U') ? 'D':'U';
                    s[i+1] = (s[i+1] == 'U') ? 'D':'U';
                    s.erase(s.begin()+i);
                    flag = flag? 0 : 1;
                    i = 0;
                }

                else if ( s[i] == 'U' and i == s.size()-1) {

                    s[i-1] = (s[i-1] == 'U') ? 'D':'U';
                    s[0] = (s[0] == 'U') ? 'D':'U';

                    s.erase(s.begin()+i);
                    flag = flag? 0 : 1;
                    i=0;

                }
                else if (s[i] == 'U') { 

                    s[i-1] = (s[i-1] == 'U') ? 'D':'U';
                    s[i+1] = (s[i+1] == 'U') ? 'D':'U';
                    s.erase(s.begin()+i);
                    flag = flag? 0 : 1;
                    i = 0;
                }
                else {
                    i++;
                }

                if( s.size() == 2 )
                    break;

            }

            if (flag == 0) {

                if ( (s[0] == 'U' and s[1] == 'U') or  (s[0] == 'D' and s[1] == 'D'))
                    no;
                else 
                    yes;
            }
            else if (flag == 1 ) {
                if ( (s[0] == 'U' and s[1] == 'U') or  (s[0] == 'D' and s[1] == 'D'))
                    yes;
                else 
                    no;
            }
        }
    }
    return 0;
}
