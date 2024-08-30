#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define MIN 0
#define MAX 25

char ranchar(int r){
    char A = 65;
    char rand_Letter = A + r;
    printf("%d", r);
    printf(" %c", rand_Letter);
    return rand_Letter;
}
int main() {
    srand(time(NULL));
    int random = (rand() % (MAX - MIN)) + MIN;
    randchar(random);
    return 0;
}