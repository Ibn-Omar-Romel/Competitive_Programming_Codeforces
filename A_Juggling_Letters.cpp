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

        int size;
        cin >> size;

        int arra[26] = {0};

        for ( int i = 0 ; i < size ; i++ ) {

            string s;
            cin >> s;

            for ( int j = 0 ; j < s.size() ; j++ ) {

                arra[ s[j] - 97 ] ++;
            }
        }


        int prev = 0, check = 0, flag = 0 ;

        for ( int i = 0 ; i < 26 ; i++ ) {

            //if ( arra[i] != 0 ) cout << arra[i] << '\n';

            if ( arra[i] != 0 and arra[i] % size != 0 ) {

                flag = 1;
                break;
            }
        }

        if ( flag == 1 ) no
        else yes
    }
    return 0;
}
