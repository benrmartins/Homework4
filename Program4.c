// Benjamin Martins
// 4/20/23

// first I created two strings to hold the user input and the uppercase string. Then I had the user input the string. After that I
// loop through each character and turned them into uppercase. Then I concatenated each of the character to upper.

// A challenge I faced was trying to add characters to a string. I realized you cannot use a + to add characters to a string in c unlike other
// languages. I researched different array methods and found that strncat can concatenate a string


#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(int argc, char *argv[]) {

    // creates variables for a string and upper
    char string[30];
    char upper[100];
    char c;

    // has the user enter the string
    printf("Enter String: ");
    scanf("%s", string);

    // loops through each character in the string
    for(int i = 0; i < strlen(string); i++) {
        // converts each charter to the string
        c = toupper(string[i]);
        // concatenates the character to upper
        strncat(upper, &c, 1);
    }

    // prints the upper case version of the string
    printf("Output string: %s\n", upper);



}