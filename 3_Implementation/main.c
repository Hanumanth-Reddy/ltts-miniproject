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
int main(){
    calculate comp;
    trigonometric tri;
    int choice,choice2,choice1;
     int array[]={0,1};
     int array2[]={0,1,2,3};
    int array1[]={0,1,2,3,4,5};
    printf("enter ur choice simple calculator->0, trigonometic->1, exit->2\n");
    scanf("%d",&choice);
    switch(array[choice]){
    	case 0:
    		  printf("Normal calculator\n");
    		  printf("enter ur choice sum->0 | substration->1 | multiplication->2 | division->3 | power->4 | exit->5\n");
    		  scanf("%d",&choice1);
    		  switch(array1[choice1]){
    			case 0:
    				printf("enter value of value1 and value2 \n");
                    scanf("%d %d",&comp.value1,&comp.value2);
    				sum(&comp);
    				break;
    			case 1:
    				printf("enter value of value1 and value2 \n");
                    scanf("%d %d",&comp.value1,&comp.value2);
    				substraction(&comp);
    				break;
    			case 2:
    				printf("enter value of value1 and value2 \n");
                    scanf("%d %d",&comp.value1,&comp.value2);
    				multiplication(&comp);
    				break;
				case 3:
					printf("enter value of value1 and value2 \n");
                    scanf("%d %d",&comp.value1,&comp.value2);
    				division(&comp);
    				break;
                case 4:
					printf("enter value of value1 and value2 \n");
                    scanf("%d %d",&comp.value1,&comp.value2);
    				power(&comp);
    				break;        
				case 5:
                printf("EXITED");
    			    exit(0);		
		 }
			break;
		case 1:
			  printf("Trigonometic and Roots calculator\n");
		      printf("enter ur choice sin->0 | cos->1 | squeareroot->2 | exit->3\n");
    		  scanf("%d",&choice2);
    		  switch(array2[choice2]){
    			case 0:
    				printf("enter number\n");
                    scanf("%d",&tri.angle);
    				sine(&tri);
    				break;
    			case 1:
    				printf("enter number\n");
                    scanf("%d",&tri.angle);
    				cosine(&tri);
    				break;
                case 2:
    				printf("enter number\n");
                    scanf("%d",&tri.angle);
    				squareroot(&tri);
    				break; 
    			case 3:
                printf("EXITED");
    			    exit(0);	
	            }
	           break;
	    case 2: 
    		  exit(0);       
	}
    return 0;
}