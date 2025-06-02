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

    string s;
    cin >> s;


    // int cnt = count( s.begin(), s.end(), '9' );
    // if ( cnt == s.size() ) {

    //     cout << s << '\n';
    //     return 0;
    // }


    int flag = 0 ;

    for ( int i = 0 ; i < s.size() ; i++ ) {

        if ( i == 0 and s[i] == '9' ) {
            continue;
        }
        

        int value = s[i] - '0';
        int temp = 9 - value;

        if ( temp < value ) {

            s[i] = temp + '0';
        }
    }

    cout << s << '\n';

    // if ( s[0] == '0' ) {

    //     int flag = 0 ;

    //     for ( int i = 0 ; i < s.size() ; i++ ) {

    //         if ( flag == 0 and s[i] == '0' ) {

    //             continue;
    //         }
    //         else {

    //             flag = 1;
    //             cout << s[i];
    //         }
    //     }
    //     cout << '\n';
    // }
    // else {

    //     cout << s << '\n';
    // }
    return 0;
}
