#include<iostream>
using namespace std;
int main()
{
    cout<<"ENTER THE NUMBER TO START"<<endl;
    int n;
    cin>>n;

    if (n<=1)
    {
       cout<<"NOT A PRIME";
    }
  // else if(n==2){
    //cout<<"prime";
   //}
    else{
        for (int i = 2; i < n ; i++)
        {
            /* code */
            if (n%i==0)
            {
                /* code */
                cout<<"not a prime";
                return 0;


            }
          
            

        

        }
          cout<<"ITS A FUCKING PRIME NUMBER";
        
    }
    




    
    
    
    }