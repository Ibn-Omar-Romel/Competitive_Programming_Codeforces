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
#define ai cin >> arra[i]
#define ao cout << arra[i]
#define aii arra[i+1]
#define iia arra[i-1]

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    char arra[n][n];
    int dot = 0 ;

    for ( int i = 0 ; i < n ; i++ ) {

        for ( int j = 0 ; j < n ; j++ ) {

            cin >> arra[i][j];

            if ( arra[i][j] == '.') dot++;
        }
    }



    for ( int i = 1 ; i < n-1 ; i++ ) {

        for ( int j = 1 ; j < n-1 ; j++ ) {



            if ( arra[i][j] == '.' and arra[i][j-1] == '.' and arra[i][j+1] == '.' and arra[i+1][j] == '.' and arra[i-1][j] == '.' ) {

                dot = dot - 5;
                arra[i][j] = '#';
                arra[i][j-1] = '#';
                arra[i][j+1] = '#';
                arra[i+1][j] = '#';
                arra[i-1][j] = '#';
            }
        }
    }


    if ( dot == 0 ) {yes;}
    else no;

    return 0;
}
