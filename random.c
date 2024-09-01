#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define MIN 0
#define MAX 25

char randchar(){
    int random = (rand() % (MAX - MIN)) + MIN;
    char A = 65;
    char rand_Letter = A + random;
    return rand_Letter;
}