#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *a, char *b);

void permutate(char *arr, int i , int n){
    int j,temp;
    if(i == n){
        for(int j = 0 ; j < n ; j++){
            printf("%c ",arr[j]);
        }
        printf("\n");
    }
    else{
        for (int j = i; j < n; j++) {
        swap(&arr[i], &arr[j]);
        permutate(arr, i + 1, n);
        swap(&arr[i], &arr[j]);
    }
    }
}
void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    char arr[100];
    scanf("%99s",arr);
    permutate(arr,0,strlen(arr));
    return 0;
}