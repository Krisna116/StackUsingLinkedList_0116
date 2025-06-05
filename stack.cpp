#include <iostream>
using namespace std;

// Node class
class node
{
public:
    int data;
    node *next;

    node()
    {
        next = NULL;
    }
};

// stack class
class stack
{
private:
    node *top; // pointer to the top node of stack

public:
    stack()
    {
        top = NULL;
        // initialize the stack with a null top pointer
    }

    // push operation: Insert an element onto the top of the stack
    int push(int value)
    {
        node *newNode = new node();     // 1. allocate memory for the new node
        newNode->data = value;          // 2. assign value
        newNode->next = top;            // 3. link to current top
        top = newNode;                  // 4. update top
        cout << "Push value: " << value << endl;
        return value;
    }

    // check if stack is empty
    bool isEmpty()
    {
        return top == NULL;
    }

    // pop operation
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }
        node *temp = top;
        cout << "Popped value: " << top->data << endl;
        top = top->next;
        delete temp;
    }
