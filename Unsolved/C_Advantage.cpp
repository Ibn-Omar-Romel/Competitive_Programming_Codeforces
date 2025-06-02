#include<iostream>

using namespace std;

int main() {

    int t,n,count= 0,check = 0;
    long long int max,max2;
    

    

    cin>>t;
    
    if(1<=t && t<=1000) {

        
        for(int r = 0 ; r < t ; r++) {

            cin>>n;

            if(2<=n && n<=(2*100000)){

                long long int array[n];
            long long int result[n];
            long long int temp[n];

            for(int i = 0 ; i < n ; i++) {

                cin>>array[i];
                temp[i] = array[i];
            }

            max = array[0];

            for(int i = 1 ; i < n  ; i++) {

                if(array[i]>=max)

                    if(array[i] == max)
                        check++;
                        
                    max = array[i];
                    count = i;
                    

            }
            if(count == 0){
                max2 = array[1];
                for(int i = 2 ; i < n ; i++){

                    if(array[i]>max2 && array[i]<max)
                        max2 = array[i];
                }
            }
            else{
                max2 = array[0];
                for(int i = 1 ; i < n ; i++){

                    if(array[i]>max2 && array[i]<max )
                        max2 = array[i];
                }

            }
                
            //cout<<"check "<<check<<endl;
            for(int i = 0 ; i < n ; i++) {

                if(temp[i] == max && check == 1)
                    cout<<temp[i] - max2<<" ";
                else
                    cout<<temp[i] - max<<" ";
            }
            cout<<"\n";
            }
            

        }

    }
}