/* Instead of writing many if..else statements, you can use the switch statement.
  The switch statement selects one of many code blocks to be executed: */
#include <stdio.h>

int main() {
    int day = 5;
        switch(day){
            case 2:
            printf("Monday");
            break;
            case 3:
            printf("Tuesday");
            break;
            case 4:
            printf("Wednesday");
            break;
            case 5:
            printf("Thursday");
            break;
            case 6:
            printf("Friday");
            break;
            case 7:
            printf("Saturday");
            break;
            case 1:
            printf("Sunday");
            break;
        }
}
