#include <stdio.h>
int main(void){

  int num1,denom1,num2,denom2,result_num,result_denom,diving_fraction;

  printf("enter num1: ");
  scanf("%d" ,&num1);

  printf("enter denominator1: ");
  scanf("%d" , &denom1);

  printf("enter num2: ");
  scanf("%d",&num2);

  printf("enter denominator2: ");
  scanf("%d" ,&denom2);

  result_num = num1 * denom2 + num2 * denom1;
  printf("result_num: %d\n", result_num);
  
  result_denom = denom1 * denom2;
  printf("result_denom: %d\n", result_denom);

  return  result_num/result_denom;
  
  
    
  

  
}
