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

        vector < int > vecA;
        vector < int > vecB;

        for ( int i = 0 ; i < size ; i++ ){

            int value; cin >> value;

            vecA.push_back(value);
        }

        for ( int i = 0 ; i < size ; i++ ){

            int value; cin >> value;

            vecB.push_back(value);
        }

        for ( int i = 0 ; i < size  ; i++ ){

            if( vecA[i] > vecB[i]){

                swap(vecA[i],vecB[i]);
            }
        }
        
        int maxA = *max_element(vecA.begin(), vecA.end());
        int maxB = *max_element(vecB.begin(), vecB.end());

        if(maxA == vecA[size-1] and maxB == vecB[size-1])
            cout << "Yes\n";
        else    
            cout << "No\n";
        
    }


    return 0;
}