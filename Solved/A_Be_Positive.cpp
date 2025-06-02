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

    int size;
    cin >> size;

    int arra[size];

    int count = 0 ;
    int neg = 0 ;

    for ( int i = 0 ; i < size ; i++ ) {

        cin >> arra[i];

        if( arra[i] > 0 ) count++;
        if( arra[i] < 0 ) neg++;
    }

    int value = ceil( (double)size / (double)2 );

    if( count >= value ) cout << count << '\n';
    else if( neg >= value ) cout << "-1\n";
    else cout << "0\n";

    return 0;
}
