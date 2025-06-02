#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    int array[4];
    int arra1[4] = {0};
    for (int i = 0; i < 4; i++)
    {
        cin>>array[i];

    }
    int count = 0;

    
    for(int i=0; i<4; i++){
        
        for(int j=i+1; j<4; j++){
            
            if(array[i]==array[j] && arra1[i]==0){
                
                arra1[i]=1;
                count++;
            }
        }
    }

    cout<< count<<'\n';
    
}