#pragma once

#ifndef KRUSKAL_DISJOINTSETS_H
#define KRUSKAL_DISJOINTSETS_H

#include <stdlib.h>

typedef struct {
    int * parent;
    int * rank;
} DSU;

DSU * MakeSets(
        size_t count);

int FindSet(
        DSU * dsu,
        int element);

void MergeSets(
        DSU * dsu,
        int setX,
        int setY);

void DestroySets(
        DSU * dsu);

#endif
