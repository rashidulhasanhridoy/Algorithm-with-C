#define size 100
int stack[size], top = -1;

void push(int num)
{
    if(top >= size - 1)
    {
        printf("Stack is full!\n");
    }
    else
    {
        stack[++top] = num;
    }
}

void peek()
{
    if(top < 0)
    {
        printf("Stack is empty!\n");
    }
    else
    {
        printf("%d\n", stack[top]);
    }
}

void pop()
{
    if(top < 0)
    {
        printf("Stack is Empty!\n");
    }
    else
    {
        top--;
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    peek();
    pop();
    peek();
    push(9);
    pop();
    peek();


}


