#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ARR_SIZE 1000000
#define RANDOMIZE_SEED 1000000

int main( int argc, char *argv[]){
    unsigned a_size = 0;
    int array_to_sort[MAX_ARR_SIZE];
    int temp;

    // check arguments of this prog
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <pseudo-random-numbers-array-size>\n", argv[0]);
        exit(1);
    }

    a_size = atoi(argv[1]);

    // check entered array size
    if (a_size > MAX_ARR_SIZE) {
        fprintf(stderr, "Sorry, but only %d array size is supported, not greater\n", MAX_ARR_SIZE);
        exit(1);
    }
    if (a_size == 0) {
        fprintf(stderr, "Sorry, array size cannot be 0\n");
        exit(1);
    }

    // randomize array numbers
    srand(time(NULL));
    for (int i = 0; i < a_size; i++) {
        array_to_sort[i] = rand() % RANDOMIZE_SEED;
    }

    // sorting loopS
    for(int i = 0; i < a_size; i++){
        for (int k = 0; k < a_size-i-1; k++ ){
            temp = array_to_sort[k];
            if (temp > array_to_sort[k+1]){
                array_to_sort[k]=array_to_sort[k+1];
                array_to_sort[k+1]=temp;
            }
        }
    }    

    // output array
    for(int i = 0; i < a_size; i++){
    }
    exit(0);
}

