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
    
    int size;
    cin >> size;

    vector < int > vec(size,0);
    vector < int > newVec;

    for ( int i = 0 ; i < size ; i++ ){

        cin >> vec[i];
    }

    for ( int i = size - 1 ; i >= 0 ; i-- ){

        if( 1 <= vec[i] and vec[i] <= 1000 ){

            newVec.push_back(vec[i]);

            for ( int j = 0 ; j < i ; j++ ){

                if( vec[i] == vec[j] ){

                    vec[j] = 1001;
                }
            }
        }
    }

    cout << newVec.size() << '\n';

    for ( int i = newVec.size() - 1 ; i >= 0 ; i-- ){

        cout << newVec[i] << " ";
    }

    cout << '\n';
    
    return 0;
}

