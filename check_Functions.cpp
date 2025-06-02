#include<bits/stdc++.h>

using namespace std;


                                                  // Factorial : 
long long int factorial( long long n ) {

    if ( n <= 1 ) 
        return 1;

    return n * factorial(n - 1);
}


                                                  // nCr :
long long int nCr( long n, long r ) {

    return factorial(n) / (factorial(r) * factorial(n - r));
}

                                                  // GCD : 
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

                                // LCM : 
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}


                                         // Divisors of a Number : 
int Divisors( int n ) {

    vector<int> divisors;

    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
}


int main() {
   
}



