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

        int num;
        cin >> num;

        int min = INT_MAX;

        string s = to_string( num );
        
        if( s.length() == 2 ) {

            cout << num % 10 << '\n';
        }
        else{

            while( num > 0){

                int rem = num % 10 ;

                num = num / 10;

                if( rem < min ){
                    
                    min = rem;
                }
            }
            cout << min << '\n';
        } 


        
    }

    return 0;
}