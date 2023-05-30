#include<iostream>
using namespace std;
#include<process.h>
//////////////////////////////////

class stack
{
    protected:
    enum {MAX = 3};
    int st[MAX];
    int top;
    public:
    stack()
    {
        top=-1;
    }
    void push(int var)
    {
        st[++top] = var;

    }
    int pop()
    {
        return st[top--];
    }

};
///////////////////////////////////////////////

class stack2 : public stack
{
    public:
    void push(int var)
    {
        if(top >= MAX-1)
       { cout<<"\n Error: stack is Full ";exit(1);}
        stack::push(var);
    }
    int pop()
    {
        if(top<0)
        {cout<<"\n Stack is Empty ";exit(1);}
        return stack::pop();
    }

};
/////////////////////////////////////////////////

int main()
{
    stack2 s;
    s.push(22);
    s.push(45);s.push(240);
    cout<<"\n S = "<<s.pop();
    cout<<"\n S = "<<s.pop();
    cout<<"\n S = "<<s.pop();
    cout<<"\n S = "<<s.pop();



    return 0;
}