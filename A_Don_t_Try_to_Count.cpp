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

        int n1, n2;
        cin >> n1 >> n2;

        string s1, s2;
        cin >> s1 >> s2;

        int moves = 0, value = abs( n2 - n1 ) , count = 0 , flag = 0 ;

        while ( s1.size() <= 25 ) {

            moves++;

            size_t found = s1.find(s2);

            if (found != string::npos) {

                cout << count << '\n';
                flag = 1;
                break;
            }
            else {
                
                s1 = s1 + s1;
                count++;
            }
        }

        if ( flag == 0 ) {

            cout << "-1\n";
        }
    }
    return 0;
}
