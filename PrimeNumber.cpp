/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    bool flag=0;
    cin>>n;
    for(int i=2 ; i<sqrt(n) ; i++ )
    {
        if(n%i==0)
        {
            cout<<n<<" is not a prime number"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<n<<" is a prime number"<<endl;

    return 0;
}
