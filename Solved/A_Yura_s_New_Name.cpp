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

    while( t-- ) {

        string s;
        cin >> s;

        

        if(s[0] == '^' and s.length() == 1){
            cout << "1\n";
        }
        else if(s[0] == '_' and s.length() == 1){
            cout << "2\n";
        }
        else{
            int count = 0 , underscore = 0;

            for (int i = 0 ; i < s.length() ; i++ ) {

                if(s[i] == '_' and i == 0) {

                    count++;
                    underscore++;
                }
                else if( s[i] == '_' and s.length()-1 == i){
                    count++;
                } 
                else if(underscore == 1 and s[i] == '_'){
                    count++;
                }
                else if(underscore == 1 and s[i] == '^'){
                    underscore = 0;
                }
                else if(s[i] == '_') {
                    underscore++;
                }
            }
            cout << count << '\n';
        }
    }

    return 0;
}
