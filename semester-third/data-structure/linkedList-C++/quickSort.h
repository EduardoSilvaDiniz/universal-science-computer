#ifndef LINKEDLISTC___QUICKSORT_H
#define LINKEDLISTC___QUICKSORT_H

#include <iostream>
#include <vector>
#include <stdlib.h>

using std::vector;
using std::cout;
using std::endl;

class quickSort
{
private:
    vector<int>& elements;
    int size;
    int partition(const int start, const int end)
    {
        int i = start;

        for (int j = start; j < end; j++)
        {
            if(elements[j] <= elements[end])
                swap(i++, j);
        }
        swap(i, end);
        return i;
    }
    void swap(const int i, const int j)
    {
        int k = elements[i];
        elements[i]=elements[j];
        elements[j]=k;
    }
    void quicksort(const int start, const int end)
    {

        if(start >= end) return;
        int pivot = partition(start, end);
        quicksort(start, pivot-1);
        quicksort(pivot+1, end);
    }
public:
    explicit quickSort(vector<int>& elements)
            :elements(elements),
             size(elements.size())
    {
    }
    void snapshot()
    {
        cout << "[";
        for(auto i = elements.begin(); i < elements.end() - 1; i++)
            cout << *i << ", ";
        cout << elements.back() << "]" << endl;
    }
    vector<int> Sort()
    {
        if (size<=1) return (vector<int>)-1;

        quicksort(0, size -1);
        return elements;
    }
};


#endif//LINKEDLISTC___QUICKSORT_H
