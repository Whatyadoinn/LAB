// #include <iostream>
// using namespace std;

// int main(){
//     int max = 0;
    
//     int arr[5] = {1, 2, 3, 4, 5};

//     for (int i = 1; i < 5; i++)
//     {
//         /* code */
//         if(arr[max]<arr[i]){
//            max = i;
//         }
//     }

//     cout<< max;
    
// }

#include <stdio.h>

#define MAXLEN 100

typedef struct {
    int element[MAXLEN];
    int top;
} stack;

/* Initialize stack */
stack init()
{
    stack S;
    S.top = -1;
    return S;
}

/* Check if stack is empty */
int isEmpty(stack S)
{
    return (S.top == -1);
}

/* Check if stack is full */
int isFull(stack S)
{
    return (S.top == MAXLEN - 1);
}

/* Return top element */
int top(stack S)
{
    if (isEmpty(S))
    {
        printf("Empty stack\n");
        return -1;
    }
    else
    {
        return S.element[S.top];
    }
}

/* Push an element */
stack push(stack S, int x)
{
    if (isFull(S))
    {
        printf("OVERFLOW\n");
    }
    else
    {
        ++S.top;
        S.element[S.top] = x;
    }

    return S;
}

/* Pop an element */
stack pop(stack S)
{
    if (isEmpty(S))
    {
        printf("UNDERFLOW\n");
    }
    else
    {
        --S.top;
    }

    return S;
}

/* Print stack from top to bottom */
void print(stack S)
{
    int i;

    for (i = S.top; i >= 0; --i)
    {
        printf("%d ", S.element[i]);
    }
}

int main()
{
    stack S;

    S = init();

    S = push(S, 10);
    S = push(S, 45);
    S = push(S, 1);
    S = push(S, 50);

    printf("Current stack: ");
    print(S);

    printf("\nTop = %d\n", top(S));

    S = pop(S);
    S = pop(S);

    printf("After pop: ");
    print(S);

    printf("\nTop = %d\n", top(S));

    return 0;
}