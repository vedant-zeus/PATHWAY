#include<stdio.h>
int main (){
    // INPUT FROM THE USER 
    float tax = 0 , income ;
    printf("enter your annual income : ");
    scanf("%f",&income);
    // COMPARING THE VALUES
    if(income>=250000 && income<=500000) {
        tax += 0.05 * (income-250000);
    }
    if (income>=500000 && income <=1000000) {
        tax += 0.20 * ( income - 500000);
    }
    if (income >= 1000000){
        tax += 0.30 * (income - 1000000);
    }
           // DISPLAYING THE RESULTS
    printf("the tax you have pay till 30th july is %f \n",tax);
    return 0 ;
}