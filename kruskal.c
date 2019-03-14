#include "kruskal.h"


void LeaveOnlyMinSpanningTree(
        Edge * edge_array,
        size_t vertices,
        size_t edges)
{
    size_t merge_count = 0;

    DSU * set_union;

    int src_set = 0;
    int dst_set = 0;


    set_union = MakeSets(vertices + 1);

    QuickSort(edge_array, 0, edges - 1);

    for (size_t k = 0; k < edges; k++) {
        src_set = FindSet(set_union, edge_array[k].src);
        dst_set = FindSet(set_union, edge_array[k].dst);

        if (src_set != dst_set) {
            MergeSets(set_union, src_set, dst_set);
            merge_count++;
        } else {
            edge_array[k].colour = BLACK;
        }
    }

    DestroySets(set_union);

    if (merge_count < vertices - 1 || !vertices) NO_TREE_ERROR
}