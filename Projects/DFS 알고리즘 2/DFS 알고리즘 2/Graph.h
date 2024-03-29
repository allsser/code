#pragma once
#include "Array.h"
typedef const char * Vertex;
typedef struct _Edge Edge;
struct _Edge
{
	Vertex ep1;
	Vertex ep2;
	int weight;
};

typedef struct _Graph Graph;
struct _Graph
{
	Array *vertexs;
	Array *edges;
};

Graph *New_Graph();
void Delete_Graph(Graph *graph);
int Graph_AddVertex(Graph *graph, Vertex pt);
int Graph_AddEdge(Graph *graph, Vertex ep1, Vertex ep2, int weight);
int Graph_ExistVertex(Graph *graph, Vertex pt);
int Graph_ExistEdge(Graph *graph, Vertex ep1, Vertex ep2);
void Graph_View(Graph *graph);
void Graph_ViewVertexs(Graph *graph);
void Graph_ViewEdges(Graph *graph);
void Graph_FindNeighvor(Graph *graph, Vertex ep, Array *neighvor);
int Graph_GetWeight(Graph *graph, Vertex ep1, Vertex ep2);