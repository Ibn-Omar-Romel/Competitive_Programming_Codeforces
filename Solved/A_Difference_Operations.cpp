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

        int arra[size];

        int flag = 0;
        for ( int i = 0 ; i < size ; i++ ){

            cin >> arra[i];
        }



        for ( int i = 1 ; i < size ; i++ ){

            if( arra[i] % arra[0] != 0 ){

                flag = 1;
                break;
            }
        }

        if( flag == 1 ){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    
    return 0;
}

