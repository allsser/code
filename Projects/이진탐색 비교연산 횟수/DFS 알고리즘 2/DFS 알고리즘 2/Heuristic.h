#pragma once
#include "Array.h"
#include "Graph.h"
typedef struct _Heuristic Heuristic;
struct _Heuristic
{
	Array *exprs;
	Graph *graph;
	Vertex start;
	Vertex goal;
	int total_weight;
};

Heuristic *MakeInitHeuristic(Graph *graph, Vertex start, Vertex goal);
void DeleteHeuristic(Heuristic *now);
void FindNextHeuristics(Heuristic *now, Array *next_heus);
Vertex GetLastVertex(Heuristic *now);
int IsGoal(Heuristic *now);
void ViewHeuristic(Heuristic *now);