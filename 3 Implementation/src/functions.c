/**
 * @file functions.c
 * @author 260281 
 * @brief all the function definitions for calculator
 */
#include "calc_header.h"
int add(cal *obj)
{
    int res=(obj->val1) + (obj->val2)   //res var for storing result
   printf("%d\n",res);
   return res;
}
int sub(cal *obj)
{
    int res=(obj->val1) - (obj->val2)   //res var for storing result
    printf("%d\n",res);
    return res;
}
int mul(cal *obj)
{
    int res=(obj->val1) * (obj->val2)   //res var for storing result
     printf("%d\n",res);
     return res;
}
int div(cal *obj)
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
int pow(cal *obj)
{
    int res = pow(obj->val1, obj->val2);    //res var for storing result
    printf("%d\n", res);
    return res;
}
int root(cal *obj)
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
int sin(cal *obj)
{
    float res= sin(cal->val1);  //res var for storing result
    printf("%.3f\n", res);
    return res;
}
int cos(cal *obj)
{
    float resu=cos(cal->val1);  //res var for storing result
    printf("%.3f\n", res);
    return res;
}
int tan(cal *obj)
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
 

