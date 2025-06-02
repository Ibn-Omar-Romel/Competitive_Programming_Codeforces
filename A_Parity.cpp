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
    
    ll b,k,a[100001];
    cin>>b>>k;
    for(ll i=0; i<k; i++){
        cin>>a[i];
    }
    ll sum = 0,j = 0;
    j = k - 1;
    for(int i=0; i<k; i++){
        if(i+1 == k){
            sum += a[i];
        }
        else{
            sum += 1LL * a[i] * b;
        }
    }

    if(sum % 2 == 0){
        cout<<"even\n";
    }
    else{
        cout<<"odd\n";
    }


    return 0;
}