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
        dst_set = 0,
        merge_count = 0;

    if (scanf("%d", &vertices) == EOF) LINE_NUM_ERROR;
    if (scanf("%d", &edges) == EOF) LINE_NUM_ERROR;

    if (!(vertices >= 0 && vertices <= 5000)) VERTEX_NUM_ERROR;
    if (!(edges >= 0 && edges <= (vertices - 1) * vertices / 2)) EDGE_NUM_ERROR;

    for (size_t k = 0; k < edges; k++) {
        if (scanf("%d %d %d", &src, &dst, &weight) == EOF) LINE_NUM_ERROR;

        if (!(src > 0 && src < vertices + 1) || !(dst > 0 && dst < vertices + 1)) VERTEX_INPUT_ERROR;
        if (!(weight >= 0 && weight <= INT_MAX)) LEN_INPUT_ERROR;

        QueuePush(edge_queue, newEdge((short)src, (short)dst), weight);
    }

    set_union = MakeSets((size_t)vertices + 1);

    while (!QueueIsEmpty(edge_queue)) {
        edge = QueueGet(edge_queue);
        src_set = FindSet(set_union, edge->src);
        dst_set = FindSet(set_union, edge->dst);

        if (src_set != dst_set) {
            MergeSets(set_union, src_set, dst_set);
            merge_count++;
            QueuePush(spannig_tree_queue, edge, 0);
        }
    }

    DestroySets(set_union);

    if ((QueueIsEmpty(spannig_tree_queue) || merge_count < vertices - 1) && !(edges == 0 && vertices == 1)) { // убейте меня за этот костыль
        puts("no spanning tree");
        return 0;
    }


    while (!QueueIsEmpty(spannig_tree_queue)) {
        edge = (Edge *)QueueGet(spannig_tree_queue);
        printf("%d %d\n", edge->src, edge->dst);
    }

    return 0;
}