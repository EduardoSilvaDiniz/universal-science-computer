#ifndef LINKEDLISTC___LINKEDLIST_H
#define LINKEDLISTC___LINKEDLIST_H

#include <string>
#include <iostream>
using std::cout;
using std::endl;

struct Node{
    int val;
    struct Node * next;
};

class linkedList{
public:
    linkedList()
    {
        head=nullptr;
        tail=nullptr;
        size=0;
    }
    void createNode(int val)
    {
        Node *temp = new Node;
        temp->val = val;
        temp->next = nullptr;

        if(head == nullptr)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void showList()
    {
        Node * current = head;
        cout << "[ ";
        while (current != NULL)
        {
            cout << current->val;
            cout << ", ";
            current = current->next;
        }
        cout << "]" << endl;
    }
    int pop()
    {
        Node * current = head;
        int reval;
        if (size == 0)
            return -1;
        else
        {
            while (current->next->next != NULL)
                current = current->next;
            reval = current->next->val;
            current->next->val=NULL;
            current->next= nullptr;
            size--;
            return reval;
        }
    }
    void push(int val)
    {
        Node * newNode = new Node;
        newNode->val=val;
        newNode->next=head;
        head=newNode;
        size++;
    }
    int addByIndex(int val, int n)
    {
        if(n > this->size && n < 0)
            return -1;
        Node * current = head;
        for (int i = 0; i < n-2; i++)
            current = current->next;

        cout << current->val << endl;
        Node * newNode = new Node;
        newNode->val=val;
        newNode->next=current->next;
        current->next=newNode;
        size++;
        return 0;
    }
    int removeByIndex(int n)
    {
        if(n > this->size && n < 0)
            return -1;
        Node * current = head;
        for (int i = 0; i < n-2; i++)
            current = current->next;

        Node * temp = new Node;
        temp->next=current->next->next;
        current->next->next=nullptr;
        current->next->val=NULL;
        current->next=temp->next;
        size--;
        return 0;
    }
    int showSize()
    {
        return this->size;
    }
    int showVal()
    {
        return head->val;
    }
    Node * showHead()
    {
        return head;
    }
private:
    Node *head;
    Node *tail;
    int size;
};

#endif//LINKEDLISTC___LINKEDLIST_H
