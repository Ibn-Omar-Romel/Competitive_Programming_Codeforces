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

        int size;
        cin >> size;

        vector < int > vec;
        vector < int > temp;

        for ( int i = 0 ; i < size ; i++ ){

            int value;
            cin >> value;
            vec.push_back(value);
            temp.push_back(value);

        }
        
        sort(temp.begin(), temp.end());
        int max1 = temp[size-1];
        int max2 = temp[size - 2];

        for ( int i = 0 ; i < size ; i++ ){

            if( vec[i] < max1 ){
                cout << vec[i] - max1 << " ";
            }
            else if ( vec[i] == max1 ) {

                cout << max1 - max2 << " ";
            }
        }
        cout << '\n';
    }
    return 0;
}