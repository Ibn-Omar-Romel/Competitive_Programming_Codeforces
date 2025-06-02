#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    if (1 <= n and n <= 1000)
    {
        int array[n][3];

        int value = 0;
        int check = 0;

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < 3; j++)
            {

                cin >> array[i][j];
            }
        }

        

            for (int i = 0; i < n; i++)
            {
                check = 0 ;
                for (int j = 0; j < 3; j++)
                {

                    if (array[i][j] == 1)
                    {
                        check++;
                    }
                    
                }

                if(check>=2)
                value++;
            }
            
            cout << value << '\n';
        
    }
}