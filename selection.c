#include <stdio.h>

int
main(void) {

    char alpha[5];
    int pos = 0;
    int smallest = 0;

    for (int i = 0; i < 10; i++) {
        printf("number 1: ");
        scanf("%c", &alpha[i]);
    }
    
    for (int i = 0; i < 9; i++) {
    
        smallest = aplha[i];
        
        // position of smallest
        pos = i;

        for (int j = i+1; j < 10; j++) {
             if (alpha[j] < smallest){
                smallest = alpha[j];
                pos = j;
             }
        }
        
        int tmp = alpha[i];
        alpha[i] = alpha[pos];
        alpha[pos] = tmp;     
    }
    
    for(int i = 0; i < 10; i++) {
        printf("%d ", alpha[i]); 
    }
}
