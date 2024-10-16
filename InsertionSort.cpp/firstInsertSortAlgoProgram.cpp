// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int arr[5]={1,3,2,4,5};
//     for(int i=0; i<5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     // insertion sort
//     for(int i=1; i<5;i++)
//     {
//         int j=i;
//         while(j>=1)
//         {
//             if(arr[j]<arr[j-1])
//             swap(arr[j], arr[j-1]);
//             j--;
//         }

//     }
//       for(int i=0; i<5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//  }


// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int arr[5]={1,39,2,-40,5};
//     for(int i=0; i<5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     // insertion sort
//     for(int i=1; i<5;i++)
//     {
//         int j=i;
//         while(j>=1 && arr[j]<arr[j-1])
//         {
//         swap(arr[j],arr[j-1]);
//         j--;// becoz j is going to left 
//         }
//     }
//       for(int i=0; i<5; i++)
    
//         cout<<arr[i]<<" ";
//     }
 
 


//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//     int arr[5]={5,300,-1,4,2};
//     // print
//     for(int i=0; i<5;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=1; i<5;i++)
//     {
//         int j=i;
//         while(j>=1)
        
//       {  if(arr[j]<arr[j-1])
//         swap(arr[j],arr[j-1]);
//         j--;
//     }
//  }
//     for(int i=0; i<5;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//  }
 
 


//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//     int n=5;
//     int arr[]={1,4,2,3,5};
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     for(int i=1; i<n; i++)
//     {
//         int j=i;
//         while(j>=1)
//         {
//             if(arr[j]<arr[j-1])
//             swap(arr[j],arr[j-1]);
//             j--;
//         }
//     }
//      for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//  }



#include<iostream>
using namespace std;
int main()
{
    // we take array elements 
    int arr[5]={-40, 3,5,10,2};
    for(int i=0; i<5; i++)
    {
        // array-> print 
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // insertion sort starts

    for(int i=1; i<5; i++)
    {
        int j=i;
        while(j>=1){
        if(arr[j]<arr[j-1])
        swap(arr[j], arr[j-1]);
        j--;
    }
    }
 for(int i=0; i<5; i++)
    {
        // after swapping/ shifting array-> print 
        cout<<arr[i]<<" ";
    }
}