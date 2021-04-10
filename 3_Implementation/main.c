#include"calculator_operations.h"
int main(){
    cal comp;
    trigonometric tri;
    int choice,choice2,choice1;
     int array[]={0,1};
    int array1[]={0,1,2,3,4};
    printf("enter ur choice simple calculator->0, trigonometic->1, exit->2\n");
    scanf("%d",&choice);
    switch(array[choice]){
    	case 0:
    		  printf("Normal calculator\n");
    		  printf("enter ur choice sum->0, sub->1, mul->2, divi->3, exit->4\n");
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
    				sub(&comp);
    				break;
    			case 2:
    				printf("enter value of value1 and value2 \n");
                    scanf("%d %d",&comp.value1,&comp.value2);
    				mul(&comp);
    				break;
				case 3:
					printf("enter value of value1 and value2 \n");
                    scanf("%d %d",&comp.value1,&comp.value2);
    				divi(&comp);
    				break;
				case 4:
                printf("EXITED");
    			    exit(0);		
		 }
			break;
		case 1:
			  printf("Trigonometic calculator\n");
		      printf("enter ur choice sin->0, cos->1, exit->2\n");
    		  scanf("%d",&choice2);
    		  switch(array[choice2]){
    			case 0:
    				printf("enter degree\n");
                    scanf("%d",&tri.angle);
    				sine(&tri);
    				break;
    			case 1:
    				printf("enter degree\n");
                    scanf("%d",&tri.angle);
    				cose(&tri);
    				break;
    			case 2:
                printf("EXITED");
    			    exit(0);	
	            }
	           break;
	    case 2: 
                    printf("EXITED");
    			    exit(0);       
	}
    return 0;
}