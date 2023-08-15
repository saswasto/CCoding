#include<stdio.h>
#include<stdbool.h>
#define CAPACITY 5
int ourqueue[CAPACITY];
int front =0 ,rear = -1, total_item = 0;
bool isFull(){
if(total_item== CAPACITY){
    return true;
}
return false;
}
bool isEmpty(){
if(total_item = 0){
    return false;

}

}
