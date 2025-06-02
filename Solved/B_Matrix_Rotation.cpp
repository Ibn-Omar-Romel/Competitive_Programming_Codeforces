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

        int a , b , c, d ;
        cin >> a >> b >> c >> d ;
        

        int check = 0;

        for( int i = 0 ; i < 4 ; i++ ) {

            int temp1 = a , temp2 = b , temp3 = c , temp4 = d;

            if( a < b and c < d  and a < c and b < d){
                cout << "YES\n";
                check++;
                break;
            }
            else{
                a = temp3;
                b = temp1;
                c = temp4;
                d = temp2;
            }
        }
        if( check == 0 ) {
            cout << "NO\n";
        }
    }

    return 0;
}