#include <stdio.h>

#include "errors.h"
#include "graph.h"
#include "pqueue.h"
#include "disjointsets.h"

int main(
        void)
{
    int edges = 0,
        vertices = 0,
        src = 0,
        dst = 0,
        weight = 0;

    QueueNode * q = NULL,
              * s = NULL;
    QueueNode ** edge_queue = &q,
              ** spannig_tree_queue = &s;

    DSU * set_union;

    Edge * edge;

    int src_set = 0,
        dst_set = 0;

    if (scanf("%d", &edges) == EOF) LINE_NUM_ERROR;
    if (scanf("%d", &vertices) == EOF) LINE_NUM_ERROR;
    if (!(edges > -1 && edges < 1001)) VERTEX_NUM_ERROR;
    if (!(vertices > -1 && vertices < (edges - 1) * edges / 2 + 1)) EDGE_NUM_ERROR;

    for (size_t k = 0; k < vertices; k++) {
        if (scanf("%d %d %d", &src, &dst, &weight) == EOF) LINE_NUM_ERROR;

        if (!(src > 0 && src < edges + 1) || !(dst > 0 && dst < edges + 1)) VERTEX_INPUT_ERROR;
        if (!(weight >= 0 && weight <= INT_MAX)) LEN_INPUT_ERROR;

        QueuePush(edge_queue, newEdge((short)src, (short)dst), weight);
    }

    set_union = MakeSets((size_t)vertices);

    while (!QueueIsEmpty(edge_queue)) {
        edge = (Edge *)QueueGet(edge_queue);
        src_set = FindSet(set_union, edge->ends[0]);
        dst_set = FindSet(set_union, edge->ends[1]);

        if (src_set != dst_set) {
            MergeSets(set_union, src_set, dst_set);
            QueuePush(spannig_tree_queue, edge, 0);
        }
    }

    DestroySets(set_union);

    if (QueueIsEmpty(spannig_tree_queue))
        puts("no spanning tree");

    while (!QueueIsEmpty(spannig_tree_queue)) {
        edge = (Edge *)QueueGet(spannig_tree_queue);
        printf("%d %d\n", edge->ends[0], edge->ends[1]);
    }

    return 0;
}