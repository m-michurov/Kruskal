#pragma once

#ifndef KRUSKAL_DEF_H
#define KRUSKAL_DEF_H

#include <stdio.h>
#include <stdlib.h>

#ifndef MEM_ERROR
#define MEM_ERROR           {puts("Error: unable to allocate memory");  exit(EXIT_SUCCESS);}
#endif

#define VERTEX_NUM_ERROR    {puts("bad number of vertices");    exit(EXIT_SUCCESS);}
#define EDGE_NUM_ERROR      {puts("bad number of edges");       exit(EXIT_SUCCESS);}
#define LINE_NUM_ERROR      {puts("bad number of lines");       exit(EXIT_SUCCESS);}
#define VERTEX_INPUT_ERROR  {puts("bad vertex");                exit(EXIT_SUCCESS);}
#define LEN_INPUT_ERROR     {puts("bad length");                exit(EXIT_SUCCESS);}

#endif
