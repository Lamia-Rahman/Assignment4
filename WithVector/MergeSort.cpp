#include <iostream>
#include "MergeSort.h"
using namespace std;
MergeSort::MergeSort()
{
}
MergeSort::~MergeSort()
{
}
void Merger(std::vector <int> &vec, int lo, int mi, int hi)
{
int *temp = new int[hi-lo+1];
int i = lo, j = mi + 1;
int k = 0;
while(i <= mi && j <=hi)
{
if(vec[i] <= vec[j])
temp[k++] = vec[i++];
else
temp[k++] = vec[j++];
}
while(i <= mi)
temp[k++] = vec[i++];
while(j <= hi)
temp[k++] = vec[j++];
for(k = 0, i = lo; i <= hi; ++i, ++k)
vec[i] = temp[k];
delete []temp;
for(int k=0;k<8;k++)
            {
                cout<<vec[k]<<" ";
             }
             cout<<endl;
}
void MergeSortHelper(std::vector <int> &vec)
{
int mid;
if(lo < hi)
{
mid = (lo + hi) / 2;
MergeSortHelper(vec, lo, mid);
MergeSortHelper(vec, mid+1, hi);
Merger(vec, lo, mid, hi);
}
}
void MergeSort::MergeSorter(std::vector <int> &vec)
{
MergeSortHelper(vec, 0, vec.size()-1);
}
