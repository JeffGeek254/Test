#include <stdio.h>

void negativityCheck()
{
    int number;
    
//Request the user for the input--a number which can be a positive or negative
    printf("Enter the number: ");
    scanf("%d", &number);
    // loop to check the number
    if(number < 0)
    {
        //output the above condition is true
    printf("%d is a negative number.\n", number);
    }
    else 
    {
//output if the condition is false
    printf("%d is a positive number.\n", number);
    }
 //calling the function   
}
int main()
{
    negativityCheck();
}
