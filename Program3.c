#include <stdio.h>
#include <string.h>


char* reverse(char* str) {

    if(strlen(str) == 0 || strlen(str) == 1) {
        return str;
    }

    reverse(str+1);
    printf("%c", *str);

}

int main(int argc, char *argv[]) {

    char string[100];

    printf("Enter String: ");
    scanf("%s", string);

    reverse("string");


}