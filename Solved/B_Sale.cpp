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


        int size, m;
        cin >> size >> m;

        int arra[size];
        for( int i = 0 ; i < size ; i++ ){

            cin >> arra[i];
            arra[i] = arra[i] * (-1);
        }

        sort( arra, arra + size );

        int count = 0, sum = 0 , i = size - 1;
        while( count < m ){
            

            if( arra[i] <= 0 )
                break;

            count++;
            sum = sum + arra[i];
            i--;

            
        }

        cout << sum << '\n';
    
    
    return 0;
}