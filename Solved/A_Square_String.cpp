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

        int flag = 0;
        if( s.length() % 2 != 0){

            flag = 1;
        }
        else{

            int i = 0, j = s.length() / 2;
            while( j < s.length()){

                if( s[i] != s[j] ) {

                    flag = 1;
                }
                i++;
                j++;
            }
            
        }

        if( flag == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    
    return 0;
}