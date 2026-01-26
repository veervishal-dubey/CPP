#include <iostream>
using namespace std;

template <class T>
class Stack
{
    T arr[10];
    int top;
public:
    Stack() { top = -1; }

    void push(T x)
    {
        arr[++top] = x;
    }

    int count()
    {
        return top + 1;
    }

   void pop()
{
  if (top==-1)
  {
    cout<<"Cannot pop from an empty stack";
    return;
  }
  else
  {
    cout<<"Popped "<<arr[top]<<" from the stack";
    top--;
  }
}
};

int main()
{
    Stack<int> s;
    s.push(10);
    s.push(20);

    cout << "Total elements = " << s.count();
    return 0;
}
