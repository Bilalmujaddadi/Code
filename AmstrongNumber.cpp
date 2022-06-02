/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/




/* amstrong is the number where if we cube the every number of the given number and sum it then it will give the original number   */
#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int n ,lastdigit , j=0 ,sum ,nmbr;
    cin>>n;
    
    nmbr=n;
    while(nmbr)
    {
        lastdigit = nmbr%10;
        j+=pow(lastdigit,3);
        nmbr=nmbr/10;
    }
    if(j==n)
    {
        cout<<"number is amstrong";
    }
    else
    {
        cout<<"number is not amstrong";
    }
    
    return 0;
}
