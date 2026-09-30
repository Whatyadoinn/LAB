#include <iostream>
using namespace std;
#include <stdio.h> 
#define n 5

int q[n];
int front = -1;
int rear = -1;

void enqueue(int x){
    if(rear == (n - 1)){
        printf("Overflow");
    }
    else if(front == -1 && rear == -1){
        front = rear = 0;
        q[rear] = x;
    }
    else{
        rear++;
        q[rear] = x;
    }
}

void dequeue(){

    if(front == - 1 && rear == -1){
        printf("Underflow");
    }
    else if(front == rear){
        front = rear = -1;
    }
    else{
        front++;
    }

}

void display(){
    if(front == -1 && rear == -1){

    }
    else{
        for(int i = front;i<=rear;i++){
            cout<< q[i];
        }
    }
}