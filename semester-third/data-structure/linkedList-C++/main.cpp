#include <iostream>
#include <string>
#include "quickSort.h"
#include "linkedList.h"

using namespace std;

linkedList merge_lists(linkedList list1, linkedList list2)
{
    linkedList merge;
    Node * temp = list1.showHead();
    for (int i = 0; i < list1.showSize(); i++)
    {
        merge.createNode(temp->val);
        temp = temp->next;
    }
    temp = list2.showHead();
    for (int i = 0; i < list2.showSize(); i++)
    {
        merge.createNode(temp->val);
        temp = temp->next;
    }
    return merge;
}
vector<int> convertLinkedListForVector(linkedList merge)
{
    Node * temp = merge.showHead();
    vector<int> list;
    while (temp != NULL)
    {
        list.insert(list.end(), 1, temp->val);
        temp = temp->next;
    }
    return list;
}

int main()
{
    linkedList list1;
    linkedList list2;

    list1.createNode(1);
    list1.createNode(5);
    list1.createNode(7);

    list2.createNode(1);
    list2.createNode(2);
    list2.createNode(3);
    list2.createNode(4);
    list2.createNode(6);

    linkedList merge = merge_lists(list1, list2);
    vector<int> lista = convertLinkedListForVector(merge);
    quickSort sort(lista);
    sort.Sort();
    sort.snapshot();
    return 0;
}
