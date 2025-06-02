// CPP program to Find N digits
// number which is divisible by D
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

int main()
{
	int n, d;
	cin >> n >> d;

	if(n == 1 && d == 10){
		cout << "-1\n";
	}

	else if ( n > 1 && d  == 10){

		cout << "1";

		for(int i = 0 ; i < n - 1 ; i++){
			cout <<"0";
		}
		cout << "\n";
	}

	else{
		for (int i = 0 ; i < n ; i++){

			cout << to_string(d) ;
		}
		cout << '\n';
	}
	

	return 0;
}
