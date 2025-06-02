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

        int n, m;
        cin >> n >> m;

        char arra[n][m];

        int minimum_Distance = INT_MAX;
        int positionX = 0 , positionY = 0;
        for ( int i = 0 ; i < n ; i++ ){

            for ( int j = 0 ; j < m ; j++ ){

                cin >> arra[i][j];

                if( arra[i][j] == 'R' and (i+j < minimum_Distance) ){
                    
                    minimum_Distance = i+j;
                    positionX = i;
                    positionY = j;
                }
            }
        }
        //cout << positionX << " " << positionY << '\n';

        if( n == 1 and m == 1 and arra[0][0] == 'R'){
            cout << "YES\n";
        }
        else{

            int flag = 0;

            for ( int i = 0 ; i < n ; i++ ){

                for ( int j = 0 ; j < m ; j++ ){

                    if( arra[i][j] == 'R'){
                        
                        int value1 = i - positionX;
                        int value2 = j - positionY;

                        if( value1 < 0 || value2 < 0){
                            
                            flag++;
                            // cout << "NO\n";
                            // break;
                        }
                    }
                }
            }

            if( flag == 0 ) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    
    
    return 0;
}

