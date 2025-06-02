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

    while ( t-- ) {

        int size;
        cin >> size;

        if( (size/2) % 2 == 0 ){
            cout << "YES\n";

            int arra[size];
            int oddSum = 0;
            int evenSum = 0;

            for( int i = 1 ; i <= size/2 ; i++){
                
                cout << i*2 << " ";
                evenSum = evenSum + (i*2);
            }

            int j = 1;
            for(int i = 1 ; i <= (size/2)-1 ; i++){

                cout << j << " ";
                oddSum = oddSum + j;
                j = j + 2;
            }

            cout << evenSum - oddSum << '\n';
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}
