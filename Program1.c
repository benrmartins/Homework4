// Benjamin Martins

#include <stdio.h>
#include <string.h>


struct doctor {
    char name[100];
    char specialization[100];
};

int main(int argc, char *argv[]) {

    int numOfDoctor = 0;
    int numOfQueries = 0;
    char special[100];

    printf("Enter the number of doctors: ");
    scanf("%d", &numOfDoctor);

    struct doctor d1[numOfDoctor];

    for(int i = 0; i < numOfDoctor; i++) {
        printf("Enter the name and specialization of the doctors: ");
        scanf("%s %s", d1[i].name, d1[i].specialization);
    }

    printf("Enter the number of queries: ");
    scanf("%d", &numOfQueries);

    for(int i = 0; i < numOfQueries; i++) {
        printf("Enter the query (%d): \n", i + 1);
        scanf("%s", special);

        for (int j = 0; j < numOfDoctor; j++) {
            if (strcmp(special, d1[j].specialization) == 0) {
                printf("Result (%d): %s\n", j + 1, d1[j].name);
            }
        }
    }

    return 0;

}