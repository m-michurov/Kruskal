#pragma once

#ifndef KRUSKAL_DISJOINTSETS_H
#define KRUSKAL_DISJOINTSETS_H

#include <stdlib.h>

#include "errors.h"


typedef struct {
    size_t * parent;
    size_t * rank;
} DSU;


DSU * MakeSets(
        size_t count);


size_t FindSet(
        DSU * dsu,
        size_t element);


void MergeSets(
        DSU * dsu,
        size_t setX,
        size_t setY);


void DestroySets(
        DSU * dsu);


#endif
