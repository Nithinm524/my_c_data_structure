#include <stdio.h>
void main()
{
    int age, dob, curryear;
    printf("Enter current year: ");
    scanf("%d", &curryear);
    printf("Enter year of birth: ");
    scanf("%d", &dob);
    if (dob > curryear)
        printf("Invalid input!\n");
    else {
        age = curryear - dob;
        printf("The age is: %d\n", age);
    }
}


