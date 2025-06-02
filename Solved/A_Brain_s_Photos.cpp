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

    int n,m;
    cin >> n >> m;

    char arra[n][m];

    int check = 0;

    for(int i = 0 ; i < n ; i++ ) {

        for(int j = 0 ; j < m ; j++ ) {

            cin >> arra[i][j];

            if( arra[i][j] == 'C' || arra[i][j] == 'M' || arra[i][j] == 'Y' ){

                check++;
            }
        }
    }

    if(check == 0){

        cout << "#Black&White\n";
    }
    else{
        cout << "#Color\n";
    }
    return 0;
}