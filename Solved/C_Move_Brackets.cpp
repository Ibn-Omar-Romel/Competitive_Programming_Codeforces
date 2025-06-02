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




int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin >> t;
    while ( t-- ) {

        int size;
        cin >> size;

        vector <string> s;

        string st;
        cin >> st;

        s.push_back( st );


        int count = 0, balance = 0;

        for ( int i = 0 ; i < size ; i++ ) {

            if( i == 0 and st[i] == ')'){

                count++;
                st.erase(0,1);
                st.append(")");

                i--;
            }
            else if ( st[i] == ')' and balance <= 0) {

                count++;
                st.erase(0,1);
                st.append(")");

                i--;
            }
            else if ( st[i] == '(') {

                balance++;
            }
            else if( st[i] == ')' and balance > 0) {

                balance--;
            }
        }

        cout << count << '\n';
    }
}