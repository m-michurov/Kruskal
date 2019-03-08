cmake_minimum_required(VERSION 3.13)
project(Kruskal C)

set(CMAKE_C_STANDARD 11)

add_executable(Kruskal main.c errors.h graph.c graph.h pqueue.c pqueue.h disjointsets.c disjointsets.h)