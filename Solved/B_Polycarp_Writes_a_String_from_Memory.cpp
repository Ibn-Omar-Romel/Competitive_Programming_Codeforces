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

        int arra[26] = {0};

        int count = 0 , check = 0;

        st s1 = "";

        for ( int i = 0 ; i < s.size() ; i++ ) {

            if( arra[s[i] - 97] == 0 and check == 3){

                check = 1 ;
                count ++;

                arra[s1[0] - 97] = 0;
                arra[s1[1] - 97] = 0;
                arra[s1[2] - 97] = 0;

                s1 = "" ;
                s1 = s1 + s[i];

                arra[s[i] - 97] = 1;
            }

            else if( arra[s[i] - 97] == 0 and check <= 3 ) {

                check ++;
                arra[s[i] - 97] = 1;

                s1 = s1 + s[i];

                //cout << s1 << "  ";
            }
        }

        if( check != 0 ) count++;

        cout << count << '\n';

    }
    return 0;
}
