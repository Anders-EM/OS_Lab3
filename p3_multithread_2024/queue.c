//SSOO-P3 23/24

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "queue.h"

//To create a queue
queue* queue_init(int size)
{
  queue * q = (queue *)malloc(sizeof(queue));
  q->qSize = 0;
  q->maxSize = size;
  q->arr = (struct element*)malloc(sizeof(struct element)*q->maxSize);
  q->head = 0;
  q->tail = 0;
  
  return q;
}

// To Enqueue an element
int queue_put(queue *q, struct element* x)
{

  // error if queue is full?
  // if queue_full(q) {
  //    return -1;
  // }
  q->arr[q->tail] = *x;
  q->tail = (q->tail + 1) % q->maxSize;
  q->qSize++;

  // return 0 if successfull?
  return 0;
}

// To Dequeue an element.
struct element* queue_get(queue *q)
{
  struct element* element = NULL;

  // return the element but also dequeue it?

  // use malloc
  element = (struct element*)malloc(sizeof(struct element));
  *element = q->arr[q->head];
  q->head = (q->head + 1) % q->maxSize;
  q->qSize--;
  
  return element;
}

//To check queue state
int queue_empty(queue *q)
{
  // return 1 if queue is empty
  if (q->qSize == 0) {
    return 1;
  } else {
    return 0;
  }
}

int queue_full(queue *q)
{
  // return 1 if queue is full
  if (q->qSize == q->maxSize) {
    return 1;
  } else {
    return 0;
  }
}

//To destroy the queue and free the resources
int queue_destroy(queue *q)
{
  free(q->arr);
  free(q);
  return 0;
}
