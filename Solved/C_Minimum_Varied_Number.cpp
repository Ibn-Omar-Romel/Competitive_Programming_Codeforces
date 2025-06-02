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

        if( 0 < num and num <= 9 ) {
            cout << num << '\n';
        }
        else if( 10 <= num and num <= 17) {

            cout << num - 9 << "9\n";
        }
        else if(18 <= num and num <= 24) {

            cout << num - 17 << "89\n";
        }
        else if(25 <= num and num <= 30) {

            cout << num - 24 << "789\n";
        }
        else if( 31 <= num and num <= 35 ){

            cout << num - 30 << "6789\n";
        }
        else if( 36 <= num and num <= 39 ){

            cout << num - 35 << "56789\n";
        }
        else if( 40 <= num and num <= 42 ){

            cout << num - 39 << "456789\n";
        }
        else if( 43 <= num and num <= 44 ){

            cout << num - 42 << "3456789\n";
        }
        else{
            cout << "123456789\n";
        }
    }

    return 0;
}