#pragma once

#ifndef KRUSKAL_GRAPH_H
#define KRUSKAL_GRAPH_H

#include "errors.h"
#include "disjointsets.h"


typedef enum {
    WHITE,
    BLACK
} Colour;


typedef struct {
    int length;
    Colour colour;
    short src;
    short dst;
} Edge;


Edge * newEdge(
        short src,
        short dst,
        int length);

#endif
