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

    int n , k; 
    cin >> n >> k ;

    string s;
    cin >> s;

    int count = 0 ;

    if ( n == 1 and k != 0 ) cout << "0\n";
    else{

        for ( int i = 0 ; i < n ; i++ ) {

            if ( count >= k ) {
                break;
            }
            if ( i == 0 and s[i] > '1' ) {

                count ++;
                s[i] = '1';
            }
            else if ( i != 0 and s[i] != '0') {

                s[i] = '0';
                count++;
            }

            
        }

        cout << s << '\n';
    }

    return 0;
}
