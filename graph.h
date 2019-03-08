#pragma once

#ifndef KRUSKAL_GRAPH_H
#define KRUSKAL_GRAPH_H

#include "errors.h"

typedef struct {
    short src;
    short dst;
} Edge;

Edge * newEdge(
        short src,
        short dst);

#endif
