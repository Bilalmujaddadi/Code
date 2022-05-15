/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    for(i=2 ; i<n ; i++)
    {
        if(n%i==0)
        {
            cout<<n<<" is the non-prime number"<<endl;
            break;
        }
    }
    
    if(i==n)
    cout<<n<<" is the prime number"<<endl;
    
    return 0;
}
