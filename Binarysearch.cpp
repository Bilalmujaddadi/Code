#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int k)
{
    int s=0;
    int e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if (arr[mid]==k)
        {
            return mid;

        }
        else if (arr[mid]>k)
        {
            
            e=mid-1;

        }
        else 
        {
            s=mid+1;
            
        }
        

    }
    return -1;
    
}

int main()
{
    int n;
    cout<<"Enter the size of array :- ";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers in the array :- ";
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the number to search :- ";
    cin>>k;
    cout<<BinarySearch(arr,n,k);   
}