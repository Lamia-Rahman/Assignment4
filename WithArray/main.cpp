#include <iostream>
#include "SelectionSort.cpp"
#include "InsertionSort.cpp"
#include "MargeSort.cpp"
#include "BubbleSort.cpp"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "MargeSort.h"
#include "BubbleSort.h"
using namespace std;

int main()
{
    int SArr[]={14,33,27,10,35,19,48,44};
    SelectionSort s;
    s.SelectionSorter(Arr,8);
    cout<<"Sorted Array: "<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<SArr[i]<<" ";
    }

    count<<endl;

    int IArr[]={14,33,27,10,35,19,48,44};
    InsertionSort i;
    i.InsertionSorter(IArr,8);
   cout<<"Sorted Array: "<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<IArr[i]<<" ";
    }

    count<<endl;


   int MArr[]={14,33,27,10,35,19,48,44};
   MergeSort m;
   m.MergeSorter(MArr,8);
   cout<<"Sorted Array: "<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<MArr[i]<<" ";
    }

    count<<endl;

  int BArr[]={14,33,27,10,35,19,48,44};
   BubbleSort b;
   b.BubbleSorter(BArr,8);
   cout<<"Sorted Array: "<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<BArr[i]<<" ";
    }

    count<<endl;



     return 0;
}
