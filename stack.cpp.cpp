#include <iostream>
#define max_size 10
using namespace std;
void push(int n);
void display();
int top = -1, stack[max_size];
int main()
{
    push(10);
    push(20);
    push(30);
    display();
    push(40);
    push(50);
    push(60);
    push(70);
    push(80);
    push(90);
    display();
    push(1000);
    display();
    push(2000);
    push(3000);
    display();
    return 0;
}
void display()
{
    cout << "Value in stack are";
    for (int i = 0; i <= top; i++)
        cout << stack[i] << " ";
    cout << "\n";
}
void push(int n)
{
    if (top == max_size - 1)
        cout << "Overflow\n";
    else
    {
        top++;
        stack[top] = n;
    }
}