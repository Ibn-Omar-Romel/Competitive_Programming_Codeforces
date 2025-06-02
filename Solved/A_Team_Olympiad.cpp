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

    int t,one = 0 , two = 0 , three = 0;
    cin>>t;
    
    int arra[t];

    int One[5000] = {0};
    int Two[5000] = {0};
    int Three[5000] = {0};

    for(int i = 0 ; i < t ; i++) {

        cin>>arra[i];

        if(arra[i] == 1){

            One[one] = i + 1 ;
            one++;
            
        }
        else if(arra[i] == 2) {

            Two[two] = i + 1;
            two++; 

        }
        else {

            Three[three] = i + 1 ;
            three++;
        }
    }

    int value = min(min(one,two),three);

    cout<< value <<'\n';

    int check = 0;

    while(check < value) {

        cout<<One[check]<<" "<<Two[check]<<" "<<Three[check]<<'\n';
        check++;

    }

    return 0;
}

