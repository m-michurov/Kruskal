#pragma once

#ifndef KRUSKAL_GRAPH_H
#define KRUSKAL_GRAPH_H

#include "pqueue.h"

typedef struct {
    short ends[2];
} Edge;

Edge * newEdge(
        short src,
        short dst);

#endif
