#include <stdio.h>
#include <ctype.h>
#include <string.h>



int main(int argc, char *argv[]) {

    char string[100];
    char upper[100];
    char c;

    printf("Enter String: ");
    scanf("%s", string);

    for(int i = 0; i < strlen(string); i++) {
        c = toupper(string[i]);
        strncat(upper, &c, 1);
    }

    printf("Output string: %s", upper);



}