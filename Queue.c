//
// Created by David on 10/15/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

// operations include enqueue(insertion), dequeue(servicing),front , isempty()

struct node;

typedef struct node Node;

struct node {
    int length; // in centimetres
    Node* prev;
    Node* next;
};



struct queue {
    Node* head;  //we need this in order to serve the queue
    Node* tail;  // we need this in order to add to the queue
};

typedef struct queue Queue;


QUEUE queue_init_default(void) {
    Queue* hq = (Queue*)malloc(sizeof(Queue));

    if (hq != NULL) {
        hq->head = NULL;
        hq->tail = NULL;
    }
    return hq;
}

void queue_destroy(QUEUE* phQ) {
    if (phQ == NULL || *phQ == NULL) {
        return;
    }
    Queue* pQueue = (Queue*)*phQ;
    Node* temp;
    while (pQueue->head != NULL) {
        temp = pQueue->head;
        pQueue->head = pQueue->head->next;
        free(temp);
    }
    free(pQueue);
    pQueue = NULL;
    printf("Destroyfication complete!\n");
}


