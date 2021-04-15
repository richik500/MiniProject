/**
 * @file main_file.c
 * @author 260281 
 * @brief main_file file has function calling
 * @version 0.1
 * @date 2021-04-10
 *
 * @copyright Copyright (c) 2021
 * 
 */
#include"calc_header.h" 
 cal obj={1,1};
 void calc_app(void);
 enum opern{ c_add=1, c_sub, c_mul, c_div, c_pow, c_root, c_sin, c_cos, c_tan, c_sec, c_cos, c_cot}; 
int main(){  
    printf("\nWelcome to the calculator\n");
    calc_app();
    return 0;
    }
void calc_app()
{   int choicee,x,y;
 do
    {
    printf("\nChoose the operation to perform\n\n\n");
    printf("0) EXIT\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n");
    printf("5) Power\n6) Root\n");
    printf("7) Sine (rad)\n8) Cosine (rad)\n9) Tangent (rad)\n10) Secant (rad)\n11) Cosec (rad)\n12) Cot (rad)\n");
    printf("\nEnter your choice :");
    scanf("%d",&choicee);
    if(choicee == 0) exit(0);
        switch(choicee)
        {
    			case c_add:
                    printf("Enter 2 values");
                    scanf("%d %d",&x,&y);
                    obj->val1=x;
                    obj->val2=y;
    				add(&obj);
    				break;
    			case c_sub:
                    printf("Enter 2 values");
                    scanf("%d %d",&x,&y);
                    obj->val1=x;
                    obj->val2=y;
    				sub(&obj);
    				break;
    			case c_mul:
                    printf("Enter 2 values");
                    scanf("%d %d",&x,&y);
                    obj->val1=x;
                    obj->val2=y;
    				mul(&obj);
    				break;
				case c_div:
                    printf("Enter 2 values");
                    scanf("%d %d",&x,&y);
                    obj->val1=x;
                    obj->val2=y;
    				div(&obj);
    				break;
                case c_pow:
                    printf("Enter 2 values");
                    scanf("%d %d",&x,&y);
                    obj->val1=x;
                    obj->val2=y;
    				pow(&obj);
    				break; 
                case c_root:
                    printf("Enter 1 value");
                    scanf("%d",&x);
                    obj->val1=x;
    				root(&obj);
                    break;       
    			case c_sin:
                    printf("Enter 1 value");
                    scanf("%d",&x);
                    obj->val1=x;
    				sin(&obj);
    				break;
    			case c_cos:
                    printf("Enter 1 value");
                    scanf("%d",&x);
                    obj->val1=x;
    				cos(&obj);
    				break;
                case c_tan:
                    printf("Enter 1 value");
                    scanf("%d",&x);
                    obj->val1=x;
    				tan(&obj);
                    break;
                case c_sec:
                    printf("Enter 1 value");
                    scanf("%d",&x);
                    obj->val1=x;
    				sec(&obj);
                    break;
                case c_cosec:
                    printf("Enter 1 value");
                    scanf("%d",&x);
                    obj->val1=x;
    				cosec(&obj);
                    break;
                case c_cot:
                    printf("Enter 1 value");
                    scanf("%d",&x);
                    obj->val1=x;
    				cot(&obj);
                    break; 
                default:
                   printf("\nChoice not valid");
        }
    }while(choicee);
}
