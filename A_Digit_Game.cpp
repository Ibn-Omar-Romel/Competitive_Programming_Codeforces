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

        int n;
		cin >> n;

		string s;
		cin >> s;

		int Raze_Even = 0 , Raze_Odd = 0 , Breach_Even = 0 , Breach_Odd = 0;

		for ( int i = 0 ; i < n ; i++ ) {

			if ( i % 2 == 0 ) {

				if ( (s[i] - '0') % 2 == 0 ) {

					Raze_Even++;
				}
				else {

					Raze_Odd++;
				}
			}
			else {

				if ( (s[i] - '0') % 2 == 0 ) {

					Breach_Even++;
				}
				else {

					Breach_Odd++;
				}
			}
		}

		if ( n % 2 == 0 ) {

			if ( Breach_Even > 0 ) {

				cout << "2" << '\n';
			}
			else {
				cout << "1" << '\n';
			}
		}
		else {

			if ( Raze_Odd > 0 ) {
				
				cout << "1" << '\n';
			}
			else {

				cout << "2" << '\n';
			}
		}
    }
    return 0;
}
