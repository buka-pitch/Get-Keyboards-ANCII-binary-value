#include "main.h"

/**
 * AUTHOR - BUKA PITCH ( BIRUK YONAS ) CreativeTechET
 * AUTHOR_NOTE - This is a program to get ANCII and Binary value of keys in THE Keyboard
 * main - Entry point of the program
 * Return: (0) sucess
*/

int main()
{
    int i = 0;

    system("clear");
    main:
    printf("\t =========================================== \n");
    printf("\t =========== // ANCII VALUES // ============ \n");
    printf("\t =========================================== \n");
    printf("Enter any key to get the ASCII representation on the computer\n\n");
    while (1)
    {
        i++;
        if (i >= 20 )
        {
            i = 0;
            system("clear");
            goto main;
        }
        char input[2];
        scanf("%c", &input[0]);
        if (input[0] != '\0' && input[0] != 10){
            evaluate(input[0]);
        }
        else {
            printf("\nEnter another key to check ..\t or CTRL + C to close\n\n");
        }
    }
    return (0);
}
