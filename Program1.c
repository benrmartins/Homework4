// Benjamin Martins
// 4/19/23

// I approached this problem by first creating a structure and storing the necessary variables in it. Then I initialized the variables need from
// the user input. Next I initialized the structure to a array. After that I created a loop so the user can input name and specialization of the doctor
// based the on user input. After that I had the user enter the number of queries. Then I used the numbers queries for the loop to enter the query the user
// wants to specialize in. After that I loop through all the doctors and printed the name of who has that specialization.

// The biggest challenged I face was trying to figure out which data structure of the structure I can use to best hold the name and specialization with
// multiple values. First I was just going to create multiple structures to hold each doctor the loop through each of them, which would take up
// more memory and time complexity. But I realize that I can just make an array of structures to hold the values, so I can easily them

#include <stdio.h>
#include <string.h>

// structure of a doctor
struct doctor {
    char name[100];
    char specialization[100];
};

int main(int argc, char *argv[]) {
    // variables of number of doctors and query
    int numOfDoctor = 0;
    int numOfQueries = 0;
    char special[100];

    // stores the number of doctors in the array
    printf("Enter the number of doctors: ");
    scanf("%d", &numOfDoctor);

    // creates a new doctor object
    struct doctor d1[numOfDoctor];

    // user ads the name and specialization of the doctor based on user input
    for(int i = 0; i < numOfDoctor; i++) {
        printf("Enter the name and specialization of the doctors: ");
        scanf("%s %s", d1[i].name, d1[i].specialization);
    }

    // has the user input the number of queries
    printf("Enter the number of queries: ");
    scanf("%d", &numOfQueries);

    // loop through the user input of number of query
    for(int i = 0; i < numOfQueries; i++) {
        // user enter the specialization query
        printf("Enter the query (%d): \n", i + 1);
        scanf("%s", special);

        // loops through the structure to check if the specialization matches the query
        for (int j = 0; j < numOfDoctor; j++) {
            if (strcmp(special, d1[j].specialization) == 0) {
                // prints out the name of the specialization the query matches
                printf("Result (%d): %s\n", j + 1, d1[j].name);
            }
        }
    }

    return 0;

}