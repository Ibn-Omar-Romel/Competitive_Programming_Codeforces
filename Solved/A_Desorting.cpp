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

#define ll long long int
#define vec vector
#define st string

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int size;
        cin >> size;

        int dif = INT_MAX , flag = 0, same = 1;

        int arra[size];

        for ( int i = 0 ; i < size ; i++ ) {

            cin >> arra[i];

            if( i > 0 and arra[i] < arra[i-1] ) flag = 1;

            else if( i > 0 and arra[i] == arra[i-1] ) {
                
                same++;
                dif = 0;
            }

            else if( i > 0 and (arra[i] - arra[i-1]) < dif ) dif = arra[i] - arra[i-1];
        }


        if ( same == size  ) cout << "1\n";

        else if( flag == 1 ) cout << "0\n";

        else cout << (dif / 2) + 1 << '\n';
        
    }
    return 0;
}
