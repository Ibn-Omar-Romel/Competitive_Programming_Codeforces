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

    while(t--) {

        int number;
        cin >> number;

        if( number < 10){
            cout << number << '\n';
        }
        else if ( 10 <= number and number <= 17){
            cout << ((number-9)*10) + 9 <<'\n';
        }
        else if ( 18 <= number and number <= 24){
            cout << ((number - 17)*100) + 89 <<'\n';
        }
        else if( 25 <= number and number <= 30){
            cout << ((number - 24)*1000) + 789 <<'\n';
        }
        else if( 31 <= number and number <= 35){
            cout << ((number - 30)*10000) + 6789 <<'\n';
        }
        else if( 36 <= number and number <= 39){
            cout << ((number - 35)*100000) + 56789 <<'\n';
        }
        else if( 40 <= number and number <= 42){
            cout << ((number - 39)*1000000) + 456789 <<'\n';
        }
        else if( 43 <= number and number <= 44){
            cout << ((number - 42)*10000000) + 3456789 <<'\n';
        }
        else if( number == 45){
            cout << "123456789\n";
        }
        else{
            cout <<"-1\n";
        }
    }

    return 0;
}
