#pragma once

#ifndef KRUSKAL_PQUEUE_H
#define KRUSKAL_PQUEUE_H

#include <malloc.h>
#include <stdlib.h>

#include "errors.h"

typedef struct st_QueueNode QueueNode;

struct st_QueueNode
{
    int priority;

    void * data;

    QueueNode * next;
};


int QueueIsEmpty(
        QueueNode ** head);


void QueuePush(
        QueueNode ** head,
        void * data,
        int priority);


void * QueueGet(
        QueueNode ** head);

#endif