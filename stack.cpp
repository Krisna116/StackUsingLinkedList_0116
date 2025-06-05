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

    // peek operation
    void peek()
    {
        if (isEmpty())
        {
            cout << "List is Empty." << endl;
            return;
        }

        node *current = top;
        while (current != NULL)
        {
            cout << current->data << endl;
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    stack stack;

    int choice = 0;
    int value;

    while (choice != 4)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            stack.push(value);
            break;

        case 2:
            stack.pop();
            break;

        case 3:
            stack.peek();
            break;

        case 4:
            cout << "Exiting Program." << endl;
            break;

        default:
            cout << "Invalid Choice. Try again." << endl;
        }
    }

}
