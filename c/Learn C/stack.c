// Data structure

#include <stdio.h>
#include <string.h>

int size = 5;

int stack[5]; // stack with size 5
int top = -1; // current element of stack

void push(int val)
{
    if (top == size - 1)
    {
        printf("overflow\n");
    }
    else
    {
        top++;
        stack[top] = val;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("underflow\n");
    }
    else
    {
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        // printf("underflow\n");
    }
    else
    {
        printf("Peek: %d\n", stack[top]);
    }
}

// in display we are doing a traversal
// traversal is the process of visiting each node or element in a data structure
void display()
{
    for (int i = top; i >= 0; i--)
    {
        /* code */
        printf("Display Element: %d\n", stack[i]);
    }
}

int main()
{
    push(1);
    push(7);
    push(30);

    pop();

    push(3);

    peek();

    push(6);
    push(8);
    push(3);

    display();
    return 0;
}