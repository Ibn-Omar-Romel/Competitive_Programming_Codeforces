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

    int t;
    cin>>t;

    string s = "codeforces";

    int check = 0 ;

    for (int i = 0; i < t; i++)
    {
        char ch ;
        cin>>ch;

        for(int i = 0 ; i < s.size() ; i++){

            if(s[i] == ch){
                check++;
                break;
            }
        }

        if(check > 0)
            cout<<"YES\n";
        else 
            cout<<"NO\n";

        check = 0;

        
    }
    
    

    

    return 0;
}

