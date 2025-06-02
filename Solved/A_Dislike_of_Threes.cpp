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
    int j= 1, count = 0;

    for (int  i = 0; i < t; i++)
    {
        int k ;
        cin>>k;
        
        while(true){

            if( j % 10 == 3 or j % 3 == 0 ){
                
                j++;
            }

            else{
                count++;
                if(count == k )
                    break;
                j++;
            }

        }
        cout<<j<<'\n';
        count = 0;
        j = 0;
    }
    
    return 0;
}