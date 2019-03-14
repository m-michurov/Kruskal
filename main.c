#include <stdio.h>

#include "errors.h"
#include "graph.h"
#include "kruskal.h"


int main(
        void)
{
    int edges = 0;
    int vertices = 0;
    int src = 0;
    int dst = 0;
    int length = 0;

    Edge * edge_array;

    if (scanf("%d", &vertices) == EOF) LINE_NUM_ERROR;
    if (scanf("%d", &edges) == EOF) LINE_NUM_ERROR;

    if (!(vertices >= 0 && vertices <= 5000)) VERTEX_NUM_ERROR;
    if (!(edges >= 0 && edges <= (vertices - 1) * vertices / 2)) EDGE_NUM_ERROR;


    edge_array = (Edge *)calloc((size_t)edges, sizeof(Edge));
    MEM_CHECK(edge_array)


    for (size_t k = 0; k < edges; k++) {
        if (scanf("%d %d %d", &src, &dst, &length) == EOF) LINE_NUM_ERROR;

        if (!(src > 0 && src < vertices + 1) || !(dst > 0 && dst < vertices + 1)) VERTEX_INPUT_ERROR;
        if (!(length >= 0 && length <= INT_MAX)) LEN_INPUT_ERROR;

        edge_array[k].dst = (short)dst;
        edge_array[k].length = length;
        edge_array[k].src = (short)src;
    }


    LeaveOnlyMinSpanningTree(edge_array, (size_t) vertices, (size_t) edges);


    for (size_t k = 0; k < edges; k++) {
        if (edge_array[k].colour != BLACK)
            printf("%d %d\n", edge_array[k].src, edge_array[k].dst);
    }

    free(edge_array);


    return 0;
}