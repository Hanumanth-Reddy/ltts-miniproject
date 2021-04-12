/**
 * @file main.c
 * @author 265101
 * @brief main file has function calling
 * @version 0.1
 * @date 2021-04-10
 *
 * @copyright Copyright (c) 2021
 * 
 */
#include"calculator_operations.h" /* header file */
 int calculator_operations = 0;

  trigonometric tri={10};
 calculate comp={10.5,5};
 static int con=1;
 void cal_app(void);
 enum operations{ add=1, sub, mul, divi, powe, sinee, cose, root, tangent, secant, cosecant, cote, expo, fa, close}; 
int main(){  
    printf("\n****Calculator****\n");

while(con==1){
  cal_app();
}
if(con!=1){
    printf("COMEBACK AGAIN ....!!");
}
    }
void cal_app(){
    printf("\nAvailable Operations\n");
    printf("-\t-\t-\t-\t-\t-\t-\t-\t-\t-\t-\t-\t-\t-\t-\t-\t-\t-\t-\t-\n");
    printf("\n1. sum\t2. Subtract\t3. Multiply\t4. Divide\t5. power\t6. sin\t7. cos\n");
    printf("\n8. root\t9. tan\t10. sec\t11. cosec\t12. cot\t13. exp\t14. factorial\t15. EXIT\n");
    printf("-\t-\t-\t-\t-\t-\t-\t-\t-\t-\t-\t-\t-\t-\t-\t-\t-\t-\t-\t-\n");
    printf("Note:- ALL THE TRIGONOMETIC INPUTS ARE RADIAN VALUES");   
    printf("\n\tEnter your choice\n");
    scanf("%d",&calculator_operations);
        switch(calculator_operations){
    			case add:
    				sum(&comp);
    				break;
    			case sub:
    				substraction(&comp);
    				break;
    			case mul:
    				multiplication(&comp);
    				break;
				case divi:
    				division(&comp);
    				break;
                case powe:
    				power(&comp);
    				break;        
    			case sinee:
    				sine(&tri);
    				break;
    			case cose:
    				cosine(&tri);
    				break;
                case root:
    				squareroot(&tri);
                    break;
                case tangent:
    				ttan(&tri);
                    break;
                case secant:
    				sec(&tri);
                    break;
                case cosecant:
    				cosec(&tri);
                    break;
                case cote:
    				cot(&tri);
                    break; 
                case expo:
    				exponent(&tri);
                    break; 
                case fa:
    				factorial(&tri);
                    break;                       
                case close:
                  exit(0);
                  break;
                default:
                   printf("\n\tThe operation you are look is not found\n ##PLEASE RETRY");
    }
    printf("press 1 to continue");
    scanf("%d",&con);
}
