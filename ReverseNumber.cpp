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
    int n , revrs=0;
    cin>>n;
    
    while(n)
    {
        revrs = revrs*10 + n%10;
        n=n/10;
    }
    cout<<revrs;
    return 0;
}
