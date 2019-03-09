#pragma once

#ifndef KRUSKAL_KRUSKAL_H
#define KRUSKAL_KRUSKAL_H

#include "qsort.h"


void MakeMinSpanningTree(
        Edge ** edge_array,
        size_t vertices,
        size_t edge_array_len);

#endif
