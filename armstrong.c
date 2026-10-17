#include <stdio.h>
#include <math.h>
#include <string.h>

int armstrongCheck(int *num){
    int org = *num;
    char str[12];
    snprintf(str,sizeof(str),"%d",*num);
    int power = strlen(str);
    int sum = 0;
    while(org > 0 ){
        sum += (int)pow((org % 10), power);
        org/=10;
    }
    return (sum == *num)? 1 : 0;
}
int main(){
int number;
scanf("%d",&number);
printf((armstrongCheck(&number))? "Yes":"No");
}