#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    if(age >18)
    {
        printf("age is greater than 18");
    }
    if(age ==18)
    {
        printf("age is equal to 18");
    }
    if(age <18)
    {
        printf("age is less than 18");
    }

}
