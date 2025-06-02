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

    int row, col;
    cin >> row >> col;

    string marks[row];

    for ( int i = 0 ; i < row ; i++ ) {

        cin >> marks[i];
    }

    char highest_marks[col];

    for ( int i = 0 ; i < col ; i++ ) {

        char value = '0';

        for ( int j = 0 ; j < row ; j++ ) {

            if ( marks[j][i] > value ) {

                value = marks[j][i]; 
            }
        }

        highest_marks[i] = value;
    }

    int count = 0;

    for ( int i = 0 ; i < row ; i++ ) {


        for ( int j = 0 ; j < col ; j++ ) {

            if( marks[i][j] == highest_marks[j] ) {

                count++;
                break;
            }
        }
    }

    cout << count << '\n';
    return 0;
}
