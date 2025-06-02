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
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        int number;
        cin >> number;
        int count = 0 ;

        if(number == 1){
            cout<<"0\n";
        }
        else {

            while( true ) {

                if( number == 1) {
                    cout << count << '\n';
                    break;
                }
                else if( number % 6 == 0) {
                    number = number / 6;
                    count++;
                }

                else if( number % 6 == 3 ){

                    number = number * 2;
                    count++;
                }
                else {
                    count = 0;
                    break;
                }
            }

            if(count == 0) {
                cout<< "-1\n";
            }
            
        }
    }

    return 0;
}

