#include "InsertionSort.h"
#include <iostream>
using namespace std;
InsertionSort::InsertionSort()
{
}
InsertionSort::~InsertionSort()
{
}
void InsertionSort::InsertionSorter(std::vector <int> &vec)
{
if(vec.size() > 1)
{
for(int i = 1; i < vec.size(); ++i)
{
int j = i - 1;
int key = vec[i];
while(j >= 0 && vec[j] > key)
{
vec[j+1] = vec[j];
--j;
}
vec[j+1] = key;
for(int k=0;k<vec.size();k++)
    {
        cout<<vec[k]<<" ";
    }
    cout<<endl;

}
}
}
