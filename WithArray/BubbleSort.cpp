#include "BubbleSort.h"
#include <iostream>
using namespace std;
BubbleSort::BubbleSort()
{
}
BubbleSort::~BubbleSort()
{
}
void BubbleSort:: BubbleSorter(int *array, int n) {
bool swapped = true;
int j = 0;
int temp;
while (swapped) {
swapped = false;
j++;
for (int i = 0; i < n - j; ++i) {
if (array[i] > array[i + 1]) {
temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;
for(int k=0;k<8;k++)
            {
                cout<<array[k]<<" ";
             }
             cout<<endl;
swapped = true;
}
}
}
}
