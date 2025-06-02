#include<iostream>
#include<string.h>
#include<cstring>


using namespace std;

int main() {

    int n;
    cin>>n;

    if(1<= n and n <=100){
        
        for(int i = 0 ; i < n ; i++) {

            string str;
            cin>>str;
            int value = 0;

            str.append("\0");

            for(int i = 0 ; str[i]!='\0';i++){
                value++;
            }
            
            
            if(value<=10)
                cout<<str<<"\n";
            else
                cout<<str[0]<<value-2<<str[value-1]<<"\n";
        }

    }

    return 0;
}