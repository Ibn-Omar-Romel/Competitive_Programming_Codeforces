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

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int size;
        cin >> size;

        char arra[size][size];

        int first_i = 0, first_j = 0, second_i = 0, second_j = 0, count = 0;;

        for ( int i = 0 ; i < size ; i++ ) {

            for ( int j = 0 ; j < size ; j++ ) {

                cin >> arra[i][j];

                if( arra[i][j] == '*' and count == 0 ) {

                    first_i = i;
                    first_j = j;

                    count++;
                }
                else if( arra[i][j] == '*' and count == 1 ) {

                    second_i = i;
                    second_j = j;
                }
            }
        }


        if( abs( first_i - second_i) > 0 and  abs( first_j - second_j) > 0) {

            arra[second_i][first_j] = '*';
            arra[first_i][second_j] = '*';

        }
        else if( abs( first_i - second_i ) == 0 ) {

            if( first_i + 1 == size ){

                arra[first_i-1][first_j] = '*';
                arra[first_i-1][second_j] = '*';
            }
            else{

                arra[first_i+1][first_j] = '*';
                arra[first_i+1][second_j] = '*';
            }
        }
        else if( abs( first_j - second_j ) == 0 ) {

            if( first_j + 1 == size ){

                arra[first_i][first_j - 1] = '*';
                arra[second_i][second_j - 1] = '*';
            }
            else{

                arra[first_i][first_j + 1] = '*';
                arra[second_i][second_j + 1] = '*';
            }
        }
            

        for ( int i = 0 ; i < size ; i++ ) {

            for ( int j = 0 ; j < size ; j++ ) {

                cout << arra[i][j];
            }
            cout << '\n';
        }
    }
    return 0;
}
