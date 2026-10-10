#include <stdio.h>

int binarySearch(int *arr, int n, int l, int r);

int main(){
    int n;
    printf("Enter the array size:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter the key to be found:\n");
    scanf("%d",&key);
    int index = binarySearch(arr, key, 0 , n - 1);
    printf("%s %d",(index >= 0)?"Element found at index: ":"Element not found",index);
}
int binarySearch(int *arr, int key, int left, int right){
       if(left > right){
       return -1;
        }

        int mid = left + (right - left) / 2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            return binarySearch(arr, key, mid+1, right);
        }
        else{
            return binarySearch(arr, key, left, mid - 1);
        }
    }