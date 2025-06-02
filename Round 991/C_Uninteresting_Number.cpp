#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
#define ok cout << "ok" << endl
#define nl cout << endl


#define fr(a, b) for(int i = a; i < b; i++) 


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        
        string s;
        cin >> s;

        ll total = 0;
        int tw = 0, th = 0;

        for (int i = 0; i < s.size(); i++) {

            int value = s[i] - '0';
            total += value;

            if (s[i] == '2')
                tw++;
            else if (s[i] == '3')
                th++;
        }

        if (total % 9 == 0)
            yes;
        else {
            
            bool flag = false;

            for (int i = 0; i <= min(10, tw); i++) {

                for (int j = 0; j <= min(10, th); j++) {

                    ll value = total + (2*i) + (6 * j);

                    if ( value % 9 == 0 ) {
                        flag = true;
                        break;
                    }
                }
                if (flag)
                    break;
            }
            flag? yes : no;
        }
        
    }
    return 0;
}
