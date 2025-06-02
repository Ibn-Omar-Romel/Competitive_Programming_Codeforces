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

        string s;
        cin >> s;

        int count = 2, flag = 0;

        if ( size == 1 ) yes
        else if ( size == 2 ) no
        else {

            int count = 0 , flag = 0 ;

            for ( int i = 0 ; i < size ;  ) {

                if ( count == i ) {

                    count += 3;

                    if ( size - i - 1 >= 2 ) {

                        if ( s[i+1] == s[i+2] ) {

                            i = count;
                        }
                        else {

                            flag = 1;
                            break;
                        }
                    }
                    else if ( size - i - 1 == 0 ) {

                        break;
                    }
                    else {
                        flag = 1;
                        break;
                    }
                }
            }

            if ( flag == 1 ) no
            else yes
        }
    }
    return 0;
}
