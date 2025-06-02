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
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ain cin >> arra[i];
#define ai cin >> arra[i];
#define ao cout << arra[i];
#define aii arra[i+1]
#define iia arra[i-1]

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    st s;
    cin >> s;

    int n = s.size();

    ll sum = 0 ;
    int count = 0;

    //int check = 0;

    while ( true  ) {


        if ( s.size() == 1  ) break;

        for ( int i = 0 ; i < n ; i++ ) {

            sum = sum + ( s[i] - '0' );
        }

        s = to_string(sum);

        count++;
        n = s.size();
        sum = 0 ;

    }
    cout << count << '\n';

    return 0;
}
