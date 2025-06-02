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

    int sum = 0 , count = 0 , checker = 0;

    for (int i = 1; ; i++)
    {   
        sum = sum + i ;
        checker = sum + checker;

        if(checker <= t){
            count++;
        }
        else{
            break;
        }
    }

    cout<<count<<'\n';
    

    return 0;
}

