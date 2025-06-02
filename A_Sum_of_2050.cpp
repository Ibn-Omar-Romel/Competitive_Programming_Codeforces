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

int main(){
    int t=1;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        if (n%2050==0){
            ll x = n/2050;
            ll sum=(ll)0;
            while (x!=0){
                sum+=(ll)x%10;
                x/=10;
            }
            cout<<sum<<"\n";
        } else{
            cout<<"-1\n";
        }
    }
}