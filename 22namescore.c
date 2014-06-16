#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct node{
    char word[21];
    struct node *next;
} node;

int
main(void){

    FILE *fp = fopen("22names.txt", "r");
    
    if (fp == NULL)
        printf("error");

    char *names[6000];
    int count = 0;
    while (!feof(fp)) {
    
        fscanf(fp, "%*c%[a-zA-Z]%*c%*c", names[count]);
        
        count++;
    }
    
    int total = count-1;
    for (int i = 0; i < total; i++) {
        printf("%s\n", names[i]);
    }
    
    
    
    
    
    
}
