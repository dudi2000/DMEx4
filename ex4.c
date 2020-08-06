#include <stdio.h>
#include <stdlib.h>

int main(void) {
    srand((unsigned int)time(NULL));
 
 char str[6];

 printf("Who are you?\n");
    scanf("%s", str);
    printf("Hello, %s!\n", str);

 for(int i = 1; i <= 3; i++) {
        printf("Round %d: ", i);

        int num = rand() % 2;

        switch(num) {
            case HEADS:
                printf("Heads\n");
                headsCount++;
                break;
            case TAILS:
                printf("Tails\n");
                tailsCount++;
                break;
        }
    }
return 0;
