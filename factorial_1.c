#include<stdio.h>
int main(){
            
            int i =0,factorial =1,n ;
            
            printf("the number for factorial : \n");
            scanf("%d",&n);
            for (i =1;i<=n;i++){
                        factorial*=i;
            }
                        printf("the factorial of the num %d = %d",n , factorial);
            return 0;
}