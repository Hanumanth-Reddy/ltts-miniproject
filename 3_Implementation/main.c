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

  trigonometric tri={36};
 calculate comp={10,5};
 static int con=1;
 void cal_app(void);
 enum operations{ add=1, sub, mul, divi, powe, sinee, cose, root,close}; 
int main(){  
    printf("\n****Calculator****\n");
cal_app();
if(con!=1){
    printf("THANKYOU FOR USING CALCULATOR !!");
}
while(con==1){
  cal_app();
}
    }
void cal_app(){
    printf("\nAvailable Operations\n");
    printf("\n1. sum\n2. Subtract\n3. Multiply\n4. Divide\n5. power\n6.sin\n7.cos\n8.root\n9.EXIT");
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
                case close:
                  exit(0);
                  break;
                default:
                   printf("\n\tThe operation you are look is not found\n WE ARE SORRY!(=)");
    }
    printf("press 1 to continue");
    scanf("%d",&con);
}
