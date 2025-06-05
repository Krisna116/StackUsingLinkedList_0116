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

