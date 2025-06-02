#include<iostream>
#include<cmath>

using namespace std;

int main() {

    int t=1,n=111, value = 0,rem = 0;
    cin>>t;

    for(int j = 0 ; j < t ; j++) {

        cin>>n;
        if(n>=1 and n<=9){
            cout<<n<<'\n';
        }
        else{
            rem = int(log10(n) + 1);

            switch (rem)
            {
            case 2:
                value = (n/10) + (1*9);
                cout<<value<<'\n';
                break;
            
            case 3:
                value = (n/100) + (2*9);
                cout<<value<<'\n';
                break;
            
            case 4:
                value = (n/1000) + (3*9);
                cout<<value<<'\n';
                break;
            
            case 5:
                value = (n/10000) + (4*9);
                cout<<value<<'\n';
                break;

            case 6:
                value = (n/100000) + (5*9);
                cout<<value<<'\n';
                break;
            
            default:
                break;
            }
        }

        value = 0;
        rem = 0;
    }
}
