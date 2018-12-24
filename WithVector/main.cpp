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
    std::vector<int> Svec ={14,33,27,10,35,19,48,44};
    SelectionSort s;
    s.SelectionSorter(Svec);
    cout<<"Sorted vector: "<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<Svec[i]<<" ";
    }

    count<<endl;

    std::vector<int> Ivec={14,33,27,10,35,19,48,44};
    InsertionSort i;
    i.InsertionSorter(Ivec);
   cout<<"Sorted vector: "<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<Ivec[i]<<" ";
    }

    count<<endl;


   std::vector<int> Mvec={14,33,27,10,35,19,48,44};
   MergeSort m;
   m.MergeSorter(Mvec);
   cout<<"Sorted vector: "<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<Mvec[i]<<" ";
    }

    count<<endl;

  std::vector<int> Bvec={14,33,27,10,35,19,48,44};
   BubbleSort b;
   b.BubbleSorter(Bvec);
   cout<<"Sorted vector: "<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<Bvec[i]<<" ";
    }

    count<<endl;



     return 0;
}
