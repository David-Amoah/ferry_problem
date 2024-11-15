//
// Created by David on 10/15/2024.
//

#ifndef FERRY_PROBLEM_QUEUE_H
#define FERRY_PROBLEM_QUEUE_H

typedef void* QUEUE;

QUEUE queue_init_default(void);

void queue_destroy(QUEUE* phQ);

#endif //FERRY_PROBLEM_QUEUE_H
