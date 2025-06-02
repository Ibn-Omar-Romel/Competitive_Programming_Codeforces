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

int main()
{
    ll n, ones = 0, zeros = 0;
    string s;
    cin>>n>>s;
    for(int i=0; i<n; i++){
        if(s[i] == '1'){
            ones++;
        }
        else{
            zeros++;
        }
    }
    if(ones == 1){
        cout<<s<<endl;
    }
    else{
        if(ones)cout<<1;
        while(zeros--)cout<<0;
        cout<<endl;
    }
    return 0;
}