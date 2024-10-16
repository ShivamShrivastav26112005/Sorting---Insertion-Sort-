// // Given array - 3,2,4,1,5 -> sorting using Insertion Sort

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int arr[5]={3,2,4,1,5};
//     for(int i=0; i<5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     // sorting the array 

//     for(int i=1; i<5; i++)
//     {
//         int j=i;
//         while(j>=1)
//         {
//             if(arr[j]>=arr[j-1]) break;
//             if(arr[j]<arr[j-1])
//             swap(arr[j],arr[j-1]);
//             j--; // it is very imp.
//         }
    
//       for(int i=0; i<5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//  }
//  }


// this is the actual process how insertion sort works.
// 3 2 4 1 5 
// 2 3 4 1 5 
// 2 3 4 1 5 
// 1 2 3 4 5 
// 1 2 3 4 5 



// THIS IS RIGHT CODE
// Given array - 3,2,4,1,5 -> sorting using Insertion Sort

#include<iostream>
using namespace std;
 int main()
 {
    int arr[5]={3,2,4,1,5};
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // sorting the array 

    for(int i=1; i<5; i++)
    {
        int j=i;
        while(j>=1)
        {
            if(arr[j]>=arr[j-1]) break;
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
            j--; // it is very imp.
        }
    }
      for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

 
 }



// 3 2 4 1 5 
// 1 2 3 4 5 