#include <stdio.h>
#include <ctype.h>

int binarySearch(int *elements, int arraySize, int *key){
    int left = 0 , right = arraySize - 1;
    while(left <= right){
        int middleIndex = left + (right - left) / 2;
        if(*key == elements[middleIndex]){
            return middleIndex;
        }
        else if(elements[middleIndex] > *key){
            right = middleIndex - 1;
        }
        else{
            left = middleIndex + 1;
        }
    }
    return -1;
}

int main(){
    int arraySize;
    printf("Enter the size of the array: ");
    scanf("%d",&arraySize);
    int elements[arraySize];
    printf("Enter the elements of the array: ");
    for(int arrayIndex = 0 ; arrayIndex < arraySize ; arrayIndex++){
        int element;
        scanf("%d",&element);
        elements[arrayIndex] = element;
    }
    int key ;
    printf("Enter the key to search: ");
    scanf("%d",&key);
    int index = binarySearch(elements,arraySize,&key);
    printf("%s %d\n",(index >= 0)?"Element found at index":"Element not found",index);
    
}