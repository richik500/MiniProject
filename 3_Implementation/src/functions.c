/**
 * @file functions.c
 * @author 260281 
 * @brief all the function definitions for calculator
 */
#include "calc_header.h"
int addn(cal *obj)
{
    int res=(obj->val1) + (obj->val2)   //res var for storing result
   printf("%d\n",res);
   return res;
}
int subn(cal *obj)
{
    int res=(obj->val1) - (obj->val2)   //res var for storing result
    printf("%d\n",res);
    return res;
}
int muln(cal *obj)
{
    int res=(obj->val1) * (obj->val2)   //res var for storing result
     printf("%d\n",res);
     return res;
}
int divn(cal *obj)
{
    if(obj->val2!=0)
    {
        int res=(obj->val1) / (obj->val2)   //res var for storing result
      printf("%d\n",res);
      return res;
    }
    else
      {
         printf("Can't divide by zero\n"); 
         return -1;
      }  
}
int pown(cal *obj)
{
    int res = pow(obj->val1, obj->val2);    //res var for storing result
    printf("%d\n", res);
    return res;
}
int rootn(cal *obj)
{
   if(obj->val1 < 0)
    {
       printf("-ve numbers can't have real square roots\n");
       return -1;
    }  
     float res=sqrt(obj->val1); //res var for storing result
     printf("%.3f\n",res); 
     return res;
}
int sinn(cal *obj)
{
    float res= sin(cal->val1);  //res var for storing result
    printf("%.3f\n", res);
    return res;
}
int cosn(cal *obj)
{
    float resu=cos(cal->val1);  //res var for storing result
    printf("%.3f\n", res);
    return res;
}
int tann(cal *obj)
{
    float res= tan(cal->val1);  //res var for storing result
    printf("%.3f\n", res);
    return res;
}
int sec(cal *obj) 
{
    float res=1/cos(cal->val1); //res var for storing result
    printf("%.3f\n", res);
    return res;
}
int cosec(cal *obj)
{
    float res=1/sin(cal->val1); //res var for storing result
    printf("%.3f\n", res);
    return res;
}
int cot(cal *obj)
{
    float res= 1/tan(cal->val1); //res var for storing result
    printf("%.3f\n",res);
    return res;
}
 
