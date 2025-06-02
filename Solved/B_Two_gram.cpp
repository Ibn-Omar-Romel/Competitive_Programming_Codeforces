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
    
    int size;
    cin >> size;

    string s;
    cin >> s;

    vector < pair<char, char> > vec;

    for ( int i = 0 ; i < size ; i++ ) {

        vec.push_back( make_pair(s[i],s[i+1]));

    }

    int max_value = INT_MIN;
    
    string ans = "";
    int positionX = 0;
    int positionY = 0;


    int i = 0 , j = 0;
    for ( i = 0 ; i < vec.size() ; i++){

        int count = 0;
        for ( j = 0 ; j < vec.size() ; j++ ){

            if( vec[i] == vec[j] ){
                count++;
                //vec.erase(vec.begin()+j);
            }
        }

        if( count > max_value){

            max_value = count;
            positionX = i;
            positionY = j;
            
        }
    }
    ans = ans + vec[positionX].first + vec[positionX].second;
    cout << ans << '\n';
    
    return 0;
}

