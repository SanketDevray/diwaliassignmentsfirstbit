#include<stdio.h>
void averager(int*, int );
void main(){
    int size;
    printf("Enter the Number of student:");
    scanf("%d",&size);
    int arr[size];
    averager(arr,size);  
}

void averager(int* arr, int size){
    float average;
    int i,sum = 0;
    printf("Enter the Marks of Five students:");
    for(int i = 0; i < size;i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < size; i++){
        printf("%d",arr[i]);
        sum = sum + arr[i];
    }
    average = sum / size;
    printf("Average is:%.2lf",average); 
}
