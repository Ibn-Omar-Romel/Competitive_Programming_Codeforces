#include<iostream>
#include<string.h>

using namespace std;

int main() {


    int n;
    cin>>n;

    int value = 0, plus = 0, minus = 0 ;

    string str[n];
    for(int i = 0 ; i < n ; i++){

        cin>>str[i];
    }

    for(int i = 0 ; i < n ; i++){

        string stri = str[i];
        
        for(int j = 0 ; j < 3 ; j++) {

            

            if(stri[j] == '+' and stri[j+1] == '+'){

                value = value + 1;
            }
            else if(stri[j] == '-' and stri[j+1] == '-'){
                

                value = value - 1;      
            }
        }   
    }
    cout<<value<<'\n';
    
}