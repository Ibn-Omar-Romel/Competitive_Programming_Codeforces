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

        int Azero = 0 , Aone = 0 , Bzero = 0 , Bone = 0;

        for ( int i = 0 ; i < size ; i++ ){

            int value;
            cin >> value;
            vecA.push_back(value);

            if( value == 0 ) Azero++;
            else    Aone++;

        }
        for ( int i = 0 ; i < size ; i++ ){

            int value;
            cin >> value;
            vecB.push_back(value);

            if( value == 0 ) Bzero++;
            else    Bone++;
        }

        if( vecA == vecB) cout << "0\n";
        else if( Aone == Bone and Azero == Bzero){
            cout << "1\n";
        }
        else{
            
            int ans1 = abs(Aone - Bone) + 1 ;

            int ans2 = 0 ;

            for ( int i = 0 ; i < size ; i++ ) {

                if ( vecA[i] != vecB[i] )
                    ans2++;
            }

            if( ans1 > ans2 ){
                cout << ans2 << '\n';
            }
            else    
                cout << ans1 << '\n';
        }
    }

    return 0;
}