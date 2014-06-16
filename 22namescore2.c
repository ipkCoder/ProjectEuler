#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct node{
    char name[21];
} node;

int
main(void){

    char *array[4] = {"malan","ian","alfred","jack"};
    for(int i = 0; i < 4; i++) {
        printf("%s\n", array[i]);
    }
}
