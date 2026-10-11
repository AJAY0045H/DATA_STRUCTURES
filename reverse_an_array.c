#include <stdio.h>
#include <stdlib.h>
void display(int *arr, int n){
    for(int i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void reverse(int *arr ,int n){
    int left = 0 , right = n - 1;
    while(left < right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int *arr = malloc(n * sizeof(int));
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    display(arr,n);
    reverse(arr,n);
    display(arr,n);
    free(arr);
    return 0;
}