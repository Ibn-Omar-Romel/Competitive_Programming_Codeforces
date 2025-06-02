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

    ll n;
    cin >> n;

    ll value = 0;

    ll zero = 0 , five = 0  ;
    ll ans = 0;



    for ( int i = 0 ; i < n ; i++ ) {

        int a;
        cin >> a;

        if ( a == 0 ) zero++;
        else five++;
    }

    ll count = 0 ;

    if ( zero != 0 and five == 0 ) cout << "0\n";

    else if ( zero == 0 and five != 0 ) cout << "-1\n";

    else {

        for ( int i = five  ; i > 0 ; i--  ) {

            ans = ( i * 5 );

            if ( ans % 9 == 0 ) {

                count = i;
                break;
            }
        }
        

        if ( count == 0 ) cout << "0\n";
        else {

            string s = "";
            for ( int i = 0 ; i < count ; i++ ) {

                s = s + "5";
            }
            for ( int i = 0 ; i < zero ; i++ ) {

                s = s + "0";
            }

            cout << s << '\n';
        }
    }

    return 0;
}
