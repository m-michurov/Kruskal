#pragma once

#ifndef KRUSKAL_GRAPH_H
#define KRUSKAL_GRAPH_H

#include "errors.h"
#include "disjointsets.h"

typedef struct {
    short src;
    short dst;

    int length;
} Edge;


Edge * newEdge(
        short src,
        short dst,
        int length);

#endif
