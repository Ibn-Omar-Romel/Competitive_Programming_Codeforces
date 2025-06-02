#include<iostream>
#include<cmath>

using namespace std;

int main() {

    int n , a;

    int rem = 0 ;
    int value = 0 ;
    int count = 0 ;

    int arra[5] = {0};


    cin>>n;

    
    
    for(int i = 0 ; i < n ; i++) {

        cin>>a;

        value = a/10000;
        arra[4] = value*10000;
        if(arra[4] > 0)
            count++;

        rem = a % 10000;

        value = rem/1000;
        arra[3] = value*1000;
        if(arra[3] > 0)
            count++;

        rem = rem % 1000;

        value = rem / 100;
        arra[2] = value*100;
        if(arra[2] > 0)
            count++;

        rem = rem % 100;

        value = rem / 10;
        arra[1] = value*10;
        if(arra[1] > 0)
            count++;
        
        rem = rem % 10;

        arra[0] = rem;
        if(arra[0] > 0)
            count++;

        cout<<count<<'\n';

        for(int j = 0 ; j < 5 ; j++) {
            if(arra[j] > 0)
                cout<<arra[j]<<" ";
            
            arra[j] = 0;
        }
        cout<<'\n';
        value = 0; 
        rem = 0;
        count = 0;
        
        
    }
}