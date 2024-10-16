// how index is works
#include<iostream>
using namespace std;
int main()
{
    int n=8;
    int arr[]={1,2,4,5,9,15,18,21};
    for(int i=0; i<n; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
     for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
   
}

// 0 1 2 3 4 5 6 7    // this is the index
// 1 2 4 5 9 15 18 21 // this is ele. present in that index
