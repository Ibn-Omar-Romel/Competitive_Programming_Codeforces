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

    int size, k;
    cin >> size >> k;

    int arra[size];

    //int sum = 0;

    for ( int i = 0 ; i < size ; i++ ) {

        cin >> arra[i];

        //sum += arra[i];
    }

    int flag = 0 , sum = 0, count = 0;

    for ( int i = 0 ; i < size ; i++ ) {

        sum += arra[i];

        if( sum <= 8 ) {

            count++;
            k -= sum;
            sum = 0 ;
        }
        else {

            k -= 8;
            sum -= 8;
            count++;
        }
        
        if( k <= 0 ) break;
    }


    if( k > 0 ) cout << "-1\n";
    else cout << count << '\n';


    return 0;
}
