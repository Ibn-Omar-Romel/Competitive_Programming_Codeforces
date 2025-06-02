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

    while( t-- ){

        long long int n , q;
        cin >> n >> q;

        vector < long long int > vec;
        
        long long int sum = 0;
        long long int odd = 0;
        long long int even = 0;

        for ( int i = 0 ; i < n ; i++ ) {

            long long int value ;
            cin >> value;
            vec.push_back(value);

            if( value % 2 == 0)
                even++;
            else
                odd++;

            sum = sum + value;
        }
        int count = 0 ;
        while( q-- ) {

            count++;

            long long int a , b;
            cin >> a >> b;
            
            if( a == 0 ){

                if( b % 2 != 0){

                    sum = sum + (even * b);
                    odd = odd + even;
                    even = 0;
                }
                else{
                    sum = sum + (even * b); 
                }
            }
            else{
                
                if( b % 2 != 0){

                    sum = sum + (odd * b);
                    even = odd + even;
                    odd = 0;
                }
                else{
                    sum = sum + (odd * b); 
                }
            }

            cout << sum << '\n';

        }
    }

    return 0;
}