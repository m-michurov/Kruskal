#pragma once

#ifndef KRUSKAL_GRAPH_H
#define KRUSKAL_GRAPH_H

#include "errors.h"
#include "disjointsets.h"


typedef enum {
    BLACK,
    WHITE
} Colour;


typedef struct {
    int length;

    short src;
    short dst;

    Colour colour;
} Edge;


#endif
