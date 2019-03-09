#include "disjointsets.h"


DSU * MakeSets(
        size_t count)
{
    DSU * dsu = (DSU *)malloc(sizeof(DSU));
    MEM_CHECK(dsu)

    dsu->parent = (int *)calloc(count, sizeof(int));
    MEM_CHECK(dsu->parent)

    for (int element = 0; element < count; element++)
        dsu->parent[element] = element;

    dsu->rank = (int *)calloc(count, sizeof(int));
    MEM_CHECK(dsu->rank)

    return dsu;
}


int FindSet(
        DSU * dsu,
        int element)
{
    if (element == dsu->parent[element])
        return element;

    dsu->parent[element] = FindSet(dsu, dsu->parent[element]);

    return dsu->parent[element];
}


void MergeSets(
        DSU * dsu,
        int setX,
        int setY)
{
    if (dsu->parent[setX] != setX || dsu->parent[setY] != setY) PARAMETERS_ERROR

    if (dsu->rank[setX] > dsu->rank[setY]) {
        dsu->parent[setY] = setX;
        return;
    }
    dsu->parent[setX] = setY;

    if (dsu->rank[setX] == dsu->rank[setY])
        dsu->rank[setY] += 1;
}


void DestroySets(
        DSU * dsu)
{
    free(dsu->parent);
    free(dsu->rank);
    free(dsu);
}