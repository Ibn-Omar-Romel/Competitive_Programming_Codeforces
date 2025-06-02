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

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        string s;
        cin >> s;


        int zeros = 0, flag = 0, sum = 0;
        for ( int i = 0 ; i < s.size()-1 ; i++ ) {

            if( s[i] == '1' and s[i+1] == '0'){

                flag = 1;
                sum++;
            }
            else if( s[i] == '0' and s[i+1] == '0' and flag == 1 ){

                sum++;
            }
            else if( s[i] == '0' and s[i+1] == '1' and flag == 1 ){

                flag = 0;
                zeros = zeros + sum;
                sum = 0;
            }

        }

        cout << zeros << '\n';
    }
    return 0;
}
