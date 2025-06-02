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

        for ( int i = 0 ; i < size ; i++ ) { 

            cin >> arra[i];

        }

        if( arra[0] != arra[1] and arra[1] == arra[2] ){ // prothom ta 2nd tar sathe mile na but 2nd ta 3rd er sathe mile.

            cout << "1\n";
        }
        else if( arra[size - 1] != arra[size - 2] and arra[size - 2] == arra[size - 3]){ //last er index er ager tar sathe mile na , kintu agar ta tar agar tar sathe mile ,mane last er ta.

            cout << size << '\n';
        }

        else{
            
            int Index = 0;

            for ( int i = 1 ; i < size - 1 ; i++ ){ // loop 2nd Index theke last er ager index porjonto cholbe

                if(arra[i] != arra[i+1]) {
                    Index = i + 1;
                    break;
                }
            }

            if( arra[Index - 2] == arra[Index - 1]){

                Index++;
            }

            cout << Index << '\n';
        }
    }

    
    return 0;
}

