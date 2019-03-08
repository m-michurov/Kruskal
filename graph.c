#include "graph.h"

Edge * newEdge(
        short src,
        short dst)
{
    Edge * new_edge = (Edge *)malloc(sizeof(Edge));

    MEM_CHECK(new_edge)

    new_edge->src = src;
    new_edge->dst = dst;

    return new_edge;
}