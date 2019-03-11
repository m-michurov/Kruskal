#pragma once

#ifndef KRUSKAL_KRUSKAL_H
#define KRUSKAL_KRUSKAL_H

#include "qsort.h"

// This function DELETES edges that are not
// part of a minimum spanning tree from
// the array, frees memory
// and leaves NULL pointers instead.
void LeaveOnlyMinSpanningTree(
        Edge ** edge_array,
        size_t vertices,
        size_t edges);

#endif
