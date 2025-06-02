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

        int height = 1, flag = 0 ; 

        int arra[size];

        for ( int i = 0 ; i < size ; i++ ) {

            cin >> arra[i];

            if( arra[i] == 1 and arra[i - 1] == 1 and i > 0 ) {

                height = height + 5;
            }
            else if( arra[i] == 0 and arra[i - 1] == 0 and i > 0 ) {

                flag = 1;
            }
            else if( arra[i] == 1 ) {

                height = height + 1;
            }
        }

        if( flag == 1 ) {

            cout << "-1\n";
        }
        else{

            cout << height << '\n';
        }
    }
    return 0;
}
