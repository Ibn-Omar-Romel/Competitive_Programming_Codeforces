#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <iomanip> 
#include <algorithm>
#include <utility>
#include <unordered_map>

using namespace std;

#define ll long long int
#define vec vector
#define st string

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        st s;
        cin >> s;

        char ch;
        cin >> ch;

        int n = s.size();
        int cont = count(s.begin(),s.end(),s[0]);

        int found = 0 , index = 0;

        for ( int i = 0 ; i < n ; i++ ) {

            if( s[i] == ch and (i+1) % 2 != 0 ){

                index = i+1;
                found = 1;
            }
            else if( s[i] == ch ) {

                found = 1;
            }
        }

        if ( cont == n and n % 2 != 0 and found == 1) cout << "YES\n";

        else if( found == 1 and index != 0 ) cout << "YES\n";

        else cout << "NO\n";
    }
    return 0;
}
