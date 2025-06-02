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


int main( ){

    int n;
    cin >> n;

    int arra[6] = {0};

    if( n == 0 ) {

        cout << "6\nTime\nMind\nSoul\nPower\nReality\nSpace\n";
    }
    else{

        cout << 6 - n << '\n';
        
        while( n-- ) {

            st s;
            cin >> s;

            if( s[0] == 'y') arra[0] = 1;

            else if( s[0] == 'p' ) arra[1] = 1;

            else if( s[0] == 'r' ) arra[2] = 1;

            else if ( s[0] == 'o') arra[3] = 1;

            else if( s[0] == 'b') arra[4] = 1;

            else if( s[0] == 'g' ) arra[5] = 1;
        }

        if(arra[0] == 0 ) cout << "Mind\n";
        if(arra[1] == 0 ) cout << "Power\n";
        if(arra[2] == 0 ) cout << "Reality\n";
        if(arra[3] == 0 ) cout << "Soul\n";
        if(arra[4] == 0 ) cout << "Space\n";
        if(arra[5] == 0 ) cout << "Time\n";
    }
}