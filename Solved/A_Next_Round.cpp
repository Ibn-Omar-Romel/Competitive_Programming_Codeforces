#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    int n,k,check = 0,output = 0;

    cin>>n>>k;
    
    int array[n];
    for(int i = 0 ; i < n ; i++) {

        cin>>array[i];
        if(array[i]>0)
            check++;
    
    }

    if(check == 0)
        cout<<output<<"\n";
    else {

        sort(array,array+n);
        int j = 0;
        for(int i = n-1; i >= 0 ; i--) {

            if((j+1)<=k and array[i]>0){ 
                output++;    
            }
            else if((output >= k) and array[i+1] == array[i])
                output++;
            else 
                break;

            j++;
        }

        cout<<output<<'\n';
    }

    
    
}