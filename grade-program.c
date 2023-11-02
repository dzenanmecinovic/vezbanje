#include <stdio.h>

int main() {
    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    // if(grade == 'A') {
    //     printf("Perfect!\n");
    // } else if(grade == 'B') {
    //     printf("You did good!\n");
    // } else if(grade == 'C') {
    //     printf("You did okay!\n");
    // }else if(grade =='D') {
    //     printf("At least it's not an F!\n");
    // } else if(grade =='F') {
    //     printf("You failed!\n") ;
    // } else {
    //     printf("That's not a valid grade!\n");
    // }

    switch(grade){
        case 'A':
        printf("perfect\n");
        break;

        case 'B':
        printf("you did good\n");
        break;

        case 'C':
        printf("you did okay\n");
        break;

        case 'D':
        printf("at least it's not an f\n");
        break;

        case 'F':
        printf("you failed\n");
        break;

        default:
        printf("there are no matching letter grades");
        break;
    }

    return 0;
    }