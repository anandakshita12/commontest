//pseudo code of selection sort
/*selectionSort(array, size)
  repeat (size - 1) times
  set the first unsorted element as the minimum
  for each of the unsorted elements
    if element < currentMinimum
      set element as new minimum
  swap minimum with first unsorted position
end selectionSort
*/
//actual code implementation using c++
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void algorithm(int arr[],int length)
{
    for(int i=0;i<length-1;i++)
    {
        for(int j=i+1;j<length;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int k=0;k<length;k++){cout<<arr[k]<<" ";}
}

int main()
{
    int arr[]={83,1,45,95,45,53,11,47,0,45,67,82};
    int length_of_arr=sizeof(arr)/sizeof(arr[0]);
    algorithm(arr,length_of_arr);

    return 0;
}
