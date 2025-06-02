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
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {

    int t ; 
    cin>>t;

    int X = 0 ;
    int Y = 0 ;
    int check = 0 ;

    for(int i = 0 ; i < t ; i++) {

        int size;
        cin>>size;

        string s;
        cin>>s;

        for(int j = 0 ; j < size ; j++) {

            if(s[j] == 'U')
                Y = Y + 1;
            else if(s[j] == 'D')
                Y = Y - 1;
            else if(s[j] == 'L')
                X = X - 1;
            else if(s[j] == 'R')
                X = X + 1;

            if(X == 1 and Y == 1 ){
                cout<<"YES\n";
                check++;
                break;
            }
        }

        if(check == 0 )
            cout<<"NO\n";
        
        
        X = 0;
        Y = 0;
        check = 0;
    }

    

    return 0;
}

