#include <stdio.h>
#include <stdlib.h>

//#define swap(x,y,t) (t = x, x = y, y = t)

void display(int *arr, int size);
void selectionSort(int *arr, int size);

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int *arr = malloc(n * sizeof(int));

    if(arr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("\nEnter the elements of the array: ");
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    display(arr,n);
    selectionSort(arr,n);
    display(arr,n);
}
void display(int arr[], int n){
    int i = 0;
    printf("The elements in the array are: ");
    for(i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int *arr, int size){
    for(int i = 0 ; i < size - 1 ; i++){
        int min = i;
        for(int j = i + 1 ; j < size ; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        swap(&arr[i],&arr[min]);
    }
}