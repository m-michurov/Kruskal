cmake_minimum_required(VERSION 3.12)
project(Kruskal C)

set(CMAKE_C_STANDARD 11)

add_executable(Kruskal main.c errors.h graph.h disjointsets.c disjointsets.h qsort.c qsort.h kruskal.c kruskal.h)