#include <stdio.h>
#include <stdlib.h>

int main()
{
 int choice;
 float a,b,result;

 while(1){

 printf("Select operation:\n");
 printf("1. Add\n");
 printf("2. Subtraction\n");
 printf("3. Multiply\n");
 printf("4. Divide\n");
 printf("5. Exit\n");
 printf("Enter your choice(1-5): ");
 scanf("%d",&choice);

 if(choice == 5){
    printf("Exiting Calculator.goodbye!\n");
    break;
 }
  if (choice < 1 || choice > 4) {
    printf("Invalid choice. Please select between 1-5.\n");
    continue;

}
 printf("Enter first number: \n");
 scanf("%f", &a);
 printf("Enter second number: \n");
 scanf("%f", &b);
 if (choice == 1){
    result=a+b;
    printf("result= %2.f\n",result);
 }
 else if(choice == 2){
    result=a-b;
    printf("result= %2.f\n",result);
    }
else if(choice == 3){
    result=a*b;
    printf("result= %2.f\n",result);
    }
else if(choice == 4){
        if (b !=0){
    result=a/b;
    printf("result= %2.f\n",result);
    }
    }
    else{
    printf("invalid choice.please select between 1-5.\n");

    }
  }
}
