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
        int count = 0,check = 0;;
        int max = 0;

        for( int i = 0; i < size ; i++ ) {

            cin >> arra[i];
        }


        for(int i = 0; i < size ; i++){

            if(arra[i] == 0 ){
                count++;
            }
            else if(arra[i] == 1) {
                count = 0;
            }

            if( count >  max ) {

                max = count;
            }
        }

        cout << max << '\n';
    }


    return 0;
}
