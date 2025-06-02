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
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ain cin >> arra[i];
#define ai cin >> arra[i];
#define ao cout << arra[i];
#define aii arra[i+1]
#define iia arra[i-1]
#define ccount cout << count << '\n'
#define cp count++


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        string s;
        cin >> s;

        int over = 0 , rem = 0;
        int W = 0 , runs = 0 ;

        over = s.size() / 6;
        rem = s.size() % 6;

        for ( int i = 0 ; i < s.size() ; i++ ) {

            if ( s[i] == 'W' ) W++;
            else 
                runs = runs + ( s[i] - '0' );
        }


        if ( (over == 1 and rem != 0) or ( over > 1 )) {

            cout << over << "." << rem << " Overs ";
        }
        else {
            cout << over << "." << rem << " Over ";
        }

        

        if ( runs > 1 ) {

            cout << runs  << " Runs ";
        }
        else {
            cout << runs  << " Run ";
        }

        
        if ( W > 1 ) {

            cout << W  << " Wickets.\n";
        }
        else {
            cout << W  << " Wicket.\n";
        }

    }
    return 0;
}
