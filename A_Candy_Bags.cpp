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
#define ccount cout << count << '\n'
#define cp count++


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int value = 1;

    vector < vector < int >  > vec( n ) ;

    int flag = 0, count = 0 ;
    
    int i = 1, j = 1;

    while ( true ) {

        if ( flag == 0 ) {

            for ( int i = 0 ; i < n ; i++ ) {

                vec[i].push_back(value);
                value++;
            }
        }

        else if ( flag == 1 ) {

            for ( int i = n - 1 ; i >= 0 ; i-- ) {

                vec[i].push_back(value);
                value++;
            }
        }


        count++;
        if ( flag == 0 ) flag = 1;
        else flag = 0;

        if ( count == n ) break;
    }


    for ( int i = 0 ; i < n ; i++ ) {

        for ( int j = 0 ; j < n ; j++ ) {

            cout << vec[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
    
    return 0;
}
