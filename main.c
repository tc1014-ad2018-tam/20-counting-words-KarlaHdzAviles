/*
 * This program allow the user to enter an integer.
 * Then it will count the words in the entered string.
 *
 * Author: Karla Alexandra Hernandez Aviles
 * Email:A01411843@itesm.mx
 * Date:18/10/2018
 *
 */
#include <stdio.h>

int main() {
    // Declaration of variables
    char str[250];                   //str=string
    int words = 1;
    int count = 0;

    // In this part the program ask to the user for a string
    printf("Welcome user, This program will help you counting the words that you write. Please write a string: ");
    fgets(str, sizeof(str), stdin);

    //In this part the program executes the condition to find the number of words entered
    while (str[count] != '\0') {
        count++;
        if (str[count] == ' '){
            words++;
        }
    }

    //In this part the program delivers the result
    printf("Your string has %i words.", words);

    return 0;
}