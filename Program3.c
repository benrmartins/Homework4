// Benjamin Martins
// 4/20/23

// first I created a recursive function that takes in a pointer of a string. Then created a bsae case so the loop will stop once there is no
// more characters left. Then used a called the function with the string to get the first pointer of the character. Then I  prints out the
// pointer of the character in reverse order because of a stack.

// The biggest challenge I faced was figuring out how to make a recursive case that prints out the reverse string. After doing some research I realized
// I can easily use pointers. Because I learned how to use pointers in my previous homework, I checked I used it for the homework. I just need to adapt my
// code into this homework using recursion instead of a for loop.


#include <stdio.h>
#include <string.h>

// recursive function using pointers
void reverse(char* str) {
    // base case that stops the loop
    if (strlen(str) == 0) {
        return;
    }
    // recursive case that user pointers get the next character
    reverse(str+1);
    // prints out the reverse order because of a stack
    printf("%c", *str);

}

int main(int argc, char *argv[]) {

    // holds the user input string
    char string[100];

    // asks user to input a string
    printf("Enter String: ");
    scanf("%s", string);

    reverse(string);
    printf("\n");

    return 0;
}