//improved version of the simple calculator
#include <stdio.h>
#include<string.h>//header file that allows the use of string functions
#include <ctype.h>//header file that allows the conversion of upercase to lowercase

//definition and declaration of functions
float add(float a, float b){
    return a + b;
}
float subtract(float a, float b){
    return a - b;
}

float multiply(float a, float b){
    return a * b;
}

float divide(float a, float b){
    return a/b;
}
int main() {
//declaring variables
    float a,b,Result;
    char Operand,User_decision[5];
    int i;
  //loops the entire program such that the user can continue with the calculation without the need of running the program again
  do { 
    printf("Enter the first number: ");
    scanf("%f",&a);
    
    printf("Enter the second number: ");
    scanf("%f",&b);

    
    printf("1.Multiply(*).\n2.Divide(/).\n3.Subtract(-).\n4.Add(+)\nChoose operand : ");
    scanf(" %c",&Operand);
    // this is a function that adds,subtract,multiply and divides two numbers and giving the output.
    switch (Operand){
        case '*':
       Result = multiply(a,b);
       printf("The result is: %.2f\n",Result);
       break;

       case '/':
      //does not accept 0 as the value of b since the output would be infinity hence ending the calculation 
    if (b == 0) {
    printf("Error: Division by zero\n");//calling the function
    break;
    }
       Result = divide(a,b);//calling the functions
       printf("The result is: %.2f\n",Result);
       break;

       case '-':
       Result = subtract(a,b);//calling the function
       printf("The result is: %.2f\n",Result);
       break;

       case '+':
       Result = add(a,b);//calling the function
       printf("The result is: %.2f\n",Result);
       break;

       default:
       printf("Invalid operand!\n");//desplays an error when the user chooses an operand other than what was specified eg "?,.:"

    }
    //this function loops until the user input either yes or no....but until he does so he is forced to input his decision.
    do {
        printf("Do you want to continue with calculations? (yes/no): ");
        scanf("%s", User_decision);

        // convert to lowercase
        for (i = 0; User_decision[i] != '\0'; i++) {
            User_decision[i] = tolower(User_decision[i]);
        }

    } while (strcmp(User_decision, "yes") != 0 && strcmp(User_decision, "no") != 0);

}while (strcmp(User_decision, "yes") == 0);

//message for the user when exiting the program
printf("\nBye...Comeback for more calculations anytime...");

    return 0;
}