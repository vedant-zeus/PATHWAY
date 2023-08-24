#include<stdio.h>
int main() {
    int a  ;
    printf("enter your num :");
    scanf("%d",&a);
    while(a<=20) {
        if(a>=10){
        printf("the value is %d\n",a);
        }a++;
    }
    return 0;
}