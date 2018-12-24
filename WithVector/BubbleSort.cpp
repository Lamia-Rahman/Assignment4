#include "BubbleSort.h"
#include <iostream>
using namespace std;
BubbleSort::BubbleSort()
{
}
BubbleSort::~BubbleSort()
{
}
void BubbleSort:: BubbleSorter(std::vector <int> &vec) {
bool swapped = true;
int j = 0;
int temp;
while (swapped) {
swapped = false;
j++;
for (int i = 0; i < vec.size() - j; ++i) {
if (vec[i] > vec[i + 1]) {
temp = vec[i];
vec[i] = vec[i + 1];
vec[i + 1] = temp;
for(int k=0;k<8;k++)
            {
                cout<<vec[k]<<" ";
             }
             cout<<endl;
swapped = true;
}
}
}
}
