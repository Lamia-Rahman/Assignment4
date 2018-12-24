#include "SelectionSort.h"
#include <iostream>
using namespace std;
SelectionSort::SelectionSort()
{
}
SelectionSort::~SelectionSort()
{
}
inline void Swap(int &a, int &b)
{
int k = a;
a = b;
b = k;
}
void SelectionSort::SelectionSorter(std::vector <int> &vec)
{
for(int i = 0; i < vec.size() - 1; ++i)
{
int min = i;
for(int j = i+1; j < vec.size(); ++j)
{
if(vec[j] < vec[min])
min = j;
Swap(vec[min], vec[i]);
}
for(int k=0;k<vec.size();k++)
        {
            cout<<vec[k]<<" ";
        }
        cout<<endl;

}
}
