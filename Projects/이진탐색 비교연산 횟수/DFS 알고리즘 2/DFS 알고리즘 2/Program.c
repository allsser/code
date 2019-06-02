#include "Graph.h"
#include "EHStack.h"
#include "Heuristic.h"
Graph * InitSimulation()
{
	Graph *graph = New_Graph();
	Graph_AddVertex(graph, "A");
	Graph_AddVertex(graph, "B");
	Graph_AddVertex(graph, "C");
	Graph_AddVertex(graph, "D");
	Graph_AddVertex(graph, "E");
	Graph_AddVertex(graph, "F");
	Graph_AddVertex(graph, "G");
	Graph_AddVertex(graph, "H");
	Graph_AddVertex(graph, "I");
	Graph_AddVertex(graph, "J");
	Graph_AddVertex(graph, "K");
	Graph_AddVertex(graph, "L");
	Graph_AddVertex(graph, "M");
	Graph_AddVertex(graph, "N");
	Graph_AddVertex(graph, "O");
	Graph_AddVertex(graph, "P");
	Graph_AddVertex(graph, "Q");
	Graph_AddVertex(graph, "R");
	Graph_AddVertex(graph, "X");


	Graph_AddEdge(graph, "A", "B", 5);
	Graph_AddEdge(graph, "B", "C", 4);
	Graph_AddEdge(graph, "C", "D", 4);
	Graph_AddEdge(graph, "D", "E", 4);
	Graph_AddEdge(graph, "C", "F", 2);
	Graph_AddEdge(graph, "F", "G", 2);
	Graph_AddEdge(graph, "G", "H", 3);
	Graph_AddEdge(graph, "H", "I", 5);
	Graph_AddEdge(graph, "I", "J", 3);
	Graph_AddEdge(graph, "K", "L", 3);
	Graph_AddEdge(graph, "G", "M", 3);
	Graph_AddEdge(graph, "M", "N", 6);
	Graph_AddEdge(graph, "N", "O", 3);
	Graph_AddEdge(graph, "O", "P", 3);
	Graph_AddEdge(graph, "P", "Q", 3);
	Graph_AddEdge(graph, "Q", "R", 3);
	Graph_AddEdge(graph, "R", "X", 3);

	Graph_View(graph);
	return graph;
}
int main()
{
	EHStack *ehs = 0;
	Heuristic *heu = 0;
	Graph *graph = 0;
	Array *next_heus = 0;
	Iterator seek = 0, end = 0;

	graph = InitSimulation();
	ehs = New_EHStack();
	heu = MakeInitHeuristic(graph, "A", "X");
	EHStack_Push(ehs, heu);
	while (!EHStack_IsEmpty(ehs))
	{
		heu = (Heuristic *)EHStack_Pop(ehs);
		next_heus = New_Array();
		FindNextHeuristics(heu, next_heus);
		seek = Array_Begin(next_heus);
		end = Array_End(next_heus);
		for (seek = seek; seek != end; ++seek)
		{
			heu = (Heuristic *)(*seek);
			if (IsGoal(heu))
			{
				ViewHeuristic(heu);
				DeleteHeuristic(heu);
			}
			else
			{
				EHStack_Push(ehs, heu);
			}
		}
		Delete_Array(next_heus);
	}

	Delete_Graph(graph);
	Delete_EHStack(ehs);
	return 0;
}