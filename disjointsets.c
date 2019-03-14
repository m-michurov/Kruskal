#include "disjointsets.h"


DSU * MakeSets(
        const size_t count)
{
    DSU * dsu = (DSU *) malloc(sizeof(DSU));
    MEM_CHECK(dsu)

    dsu->parent = (size_t *) calloc(count, sizeof(size_t));
    MEM_CHECK(dsu->parent)

    for (size_t element = 0; element < count; element++)
        dsu->parent[element] = element;

    dsu->rank = (size_t *) calloc(count, sizeof(size_t));
    MEM_CHECK(dsu->rank)

    return dsu;
}


size_t FindSet(
        DSU * dsu,
        const size_t element)
{
    if (element == dsu->parent[element])
        return element;

    dsu->parent[element] = FindSet(dsu, dsu->parent[element]);

    return dsu->parent[element];
}


void MergeSets(
        DSU * dsu,
        const size_t setX,
        const size_t setY)
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