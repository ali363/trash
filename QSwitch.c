#include<stdio.h>
int main(int argc, char const *argv[])
{
    //Write a C program to print day of week name using switch case.
    
    int day1;

    printf("enter week number(1-7) = ");

    scanf("%d",&day1);

    switch (day1)
    {
    case 1:
        printf("Monday");
        break;
            case 2:
        printf("Tuesday");
        break;
            case 3:
        printf("Wednesday");
        break;
            case 4:
        printf("Thursday");
        break;
            case 5:
        printf("Friday");
        break;
            case 6:
        printf("Saturday");
        break;
            case 7:
        printf("Sunday");
        break;
    
    default:
    printf("number is invalid");
        break;
    }

//C program to check vowel or consonant using switch case

        char ch1;

    printf("enter alphabet = ");

    scanf("%c",&ch1);

    switch (ch1)
    {
    case 'a':
        printf("vowel");
        break;
            case 'e':
        printf("vowel");
        break;
            case 'i':
        printf("vowel");
        break;
            case 'o':
        printf("vowel");
        break;
            case 'u':
        printf("vowel");
        break;
            case 'A':
        printf("vowel");
        break;
            case 'E':
        printf("vowel");
        break;
                    case 'I':
        printf("vowel");
        break;
                    case 'O':
        printf("vowel");
        break;
                    case 'U':
        printf("vowel");
        break;
    
    default:
    printf("%c is Consonant",ch1);
        break;
    }
    return 0;
}
