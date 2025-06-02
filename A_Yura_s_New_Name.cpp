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

    int t;
	cin >> t;

	while ( t-- ) {

		string s;
		cin >> s;

		int underscore = 0 , smile = 0, smileChecker = 0;
		int ans = 0;

		if ( count( s.begin(), s.end(), '^' ) != 0 ) smileChecker = 1;

		for ( int i = 0 ; i < s.size() ; i++ ) {

			if ( s[i] == '^' and smile == 0 ) {

				if ( underscore != 0 ) {

					smile = 1;
					ans = ans + underscore;
					underscore = 0;
					smile = 1;
				}
				else {
					smile = 1;
				}
			}

			else if ( s[i] == '^' and smile != 0 ) {

				if ( underscore == 1 ) {

					smile = 1;
					underscore = 0;
				}
				else if ( underscore > 1 ){

					ans = ans + ( underscore - 1 ) ;
					underscore = 0;
				}
			}
			else if ( s[i] == '_' ) {

				underscore++;
			}
		}


		if ( smileChecker == 0 ) {

			ans = s.size() + 1;
		}
		else if ( smile == 1 and underscore >= 1 ) {

			ans = ans + underscore;
		}
		else if ( s.size() == 1  and s[0] == '^' ) {

			ans++;
		}



		cout << ans << '\n';
	}
    return 0;
}
