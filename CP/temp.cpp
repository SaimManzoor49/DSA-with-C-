#include <iostream>

using namespace std;

// max size of stack
const int sizeOfStack = 100;

// stack using array
class Stack
{
private:
    int data[sizeOfStack];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(int value)
    {
        if (top < sizeOfStack - 1)
        {
            data[++top] = value;
        }
        else
        {
            cout << "Stack Overflow\n";
        }
    }

    int pop()
    {
        if (top >= 0)
        {
            return data[top--];
        }
        else
        {
            cout << "Stack Underflow\n";
            return -1;
        }
    }

    bool isEmpty()
    {
        return top == -1; 
    }
};

// Function to evaluate postfix expression
int evaluatePostfix(char postfix[],int size)
{
    Stack s;
    for (int i = 0; i <= size-2; i++) // using (size - 2) bcz of 0 indexing and last index stores '\0' which indicates to null or end of string
    {
        if (isdigit(postfix[i]))
        {
            s.push(postfix[i] - '0'); // subtracting ASCII to get integer
        }
        else
        {
            int operand2 = s.pop();
            int operand1 = s.pop();

            switch (postfix[i])
            {
            case '+':
                s.push(operand1 + operand2);
                break;
            case '-':
                s.push(operand1 - operand2);
                break;
            case '*':
                s.push(operand1 * operand2);
                break;
            case '/':
                s.push(operand1 / operand2);
                break;
            }
        }
    }

    return s.pop();
}

int main()
{

    char postExp[]="562+*124/-"; 
    // char postExp[]="321*+"; 
    int s = sizeof(postExp)/sizeof(postExp[0]); // te get the size of array



    int result = evaluatePostfix(postExp,s);
    cout << "solution of  postfix expression : " << result << endl;

    return 0;
}