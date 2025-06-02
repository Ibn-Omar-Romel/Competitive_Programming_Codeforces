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
    

        int n, m;
        cin >> n >> m;

        vector < string > small;
        vector < string > large;

        for ( int i = 0 ; i < m ; i++ ) {

            string s1, s2;
            cin >> s1 >> s2;

            if( s1.length() <= s2.length()){

                small.push_back(s1);
                large.push_back(s2);
            }
            else{
                small.push_back(s2);
                large.push_back(s1);
            }
        }

        for ( int i = 0 ; i < n ; i++ ) {

            string s;
            cin >> s;

            for ( int j = 0 ; j < small.size() ; j++){

                if( s == small[j] || s == large[j] ){

                    cout << small[j] << " ";
                }
            }
        }
        cout << '\n';
    
    return 0;
}

