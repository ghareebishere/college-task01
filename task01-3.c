#include <stdio.h>
int main (){
    int f_num, s_num;
    printf("please enter the 2 numbers:\n");
    scanf("%i", &f_num);
    scanf("%i", &s_num);
    int and_result = f_num & s_num;
    int or_result = f_num | s_num;
    int xor_result = f_num ^ s_num;
printf("the result of or %i \n", or_result);
printf("the result of and %i \n", and_result);
printf("the result of xor %i \n", xor_result);
return 0;
}