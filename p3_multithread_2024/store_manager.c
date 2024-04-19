//SSOO-P3 23/24

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <sys/stat.h>
#include <pthread.h>
#include "queue.h"
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>


// global/shared profit variable?

// produce function

// consume function


int main (int argc, const char * argv[])
{

  // ERROR CHECK FOR NEGATIVE VALUES

  int profits = 0;
  int product_stock [5] = {0};

  if (argc != 5) {
    printf("Error, too few arguments\n");
    return -1;
  }

  // const char* file_name = argv[1];
  // int numProducers = atoi(argv[2]);
  // int numConsumers = atoi(argv[3]);
  // queue* buffer = queue_init(atoi(argv[4]));

  

  // use scanf to load file

  // first value in file is number of operations
  // use malloc to allocate enought memory for all of those operations
  // struct element* operations = (struct element*)malloc(sizeof(element)*<num_operations>);

  // loop through each operation, store the attributes in an element object, and store the element
  // in the operations array

  // distribute operations among producer threads
    // pass parameters to threads in pthread_create
    // use a structure to pass parameters to threads
    // distribute evenly by splitting operations over n producers?
      // producer 0 goes from element 0 to element numOperations/N in operations array
      // producer 1 goes over the next numOperations/N elements... etc


  // free memeory
  // free(operations);



  // Output
  printf("Total: %d euros\n", profits);
  printf("Stock:\n");
  printf("  Product 1: %d\n", product_stock[0]);
  printf("  Product 2: %d\n", product_stock[1]);
  printf("  Product 3: %d\n", product_stock[2]);
  printf("  Product 4: %d\n", product_stock[3]);
  printf("  Product 5: %d\n", product_stock[4]);

  return 0;
}
