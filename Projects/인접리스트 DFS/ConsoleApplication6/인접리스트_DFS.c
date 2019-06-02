/*#include <stdio.h>
#include <stdlib.h>

struct node
{
	int vertex;
	struct node* next;
};

struct node* createNode(int v);

struct Graph
{
	int numVertices;
	int* visited;
	struct node** adjLists; // we need int** to store a two dimensional array. Similary, we need struct node** to store an array of Linked lists
};

struct Graph* createGraph(int);
void addEdge(struct Graph*, int, int);
void printGraph(struct Graph*);
void DFS(struct Graph*, int);

             
int main()
{

	struct Graph* graph = createGraph(4);
	addEdge(graph, 0, 1);
	addEdge(graph, 0, 2);
	addEdge(graph, 1, 2);
	addEdge(graph, 2, 3);

	printGraph(graph);

	DFS(graph, 2);

	return 0;
}

void DFS(struct Graph* graph, int vertex) {
	struct node* adjList = graph->adjLists[vertex];
	struct node* temp = adjList;

	graph->visited[vertex] = 1;
	printf("Visited %d \n", vertex);

	while (temp != NULL) {
		int connectedVertex = temp->vertex;

		if (graph->visited[connectedVertex] == 0) {
			DFS(graph, connectedVertex);
		}
		temp = temp->next;
	}
}		 


struct node* createNode(int v)
{
	struct node* newNode = malloc(sizeof(struct node));
	newNode->vertex = v;
	newNode->next = NULL;
	return newNode;
}

struct Graph* createGraph(int vertices)
{
	struct Graph* graph = malloc(sizeof(struct Graph));
	graph->numVertices = vertices;

	graph->adjLists = malloc(vertices * sizeof(struct node*));

	graph->visited = malloc(vertices * sizeof(int));

	int i;
	for (i = 0; i < vertices; i++) {
		graph->adjLists[i] = NULL;
		graph->visited[i] = 0;
	}
	return graph;
}

void addEdge(struct Graph* graph, int src, int dest)
{
	// Add edge from src to dest
	struct node* newNode = createNode(dest);
	newNode->next = graph->adjLists[src];
	graph->adjLists[src] = newNode;

	// Add edge from dest to src
	newNode = createNode(src);
	newNode->next = graph->adjLists[dest];
	graph->adjLists[dest] = newNode;
}

void printGraph(struct Graph* graph)
{
	int v;
	for (v = 0; v < graph->numVertices; v++)
	{
		struct node* temp = graph->adjLists[v];
		printf("\n Adjacency list of vertex %d\n ", v);
		while (temp) 
		{
			printf("%d -> ", temp->vertex);
			temp = temp->next;
		}
		printf("\n");
	}
}*/

#include <stdio.h>

int n, min; // 맵의 크기와 최소값을 나타내는 변수
int map[10][10]; // 맵을 나타내는 2차원 배열

void DFS(int x, int y, int l)
{
	// 도착 지점에 도착했을 경우
	if (x == n - 1 && y == n - 1)
	{
		// 현재 최소값이 l보다 크면, l이 작은 것이므로 l를 최소값으로 지정
		if (min > l) min = l;
		return;
	}
	map[y][x] = 0; // 방문했음을 표시하기 위해 0을 대입

				   // 위로 이동할 수 있다면 이동!
	if (y > 0 && map[y - 1][x] != 0) DFS(x, y - 1, l + 1);
	// 아래로 이동할 수 있다면 이동!
	if (y < n - 1 && map[y + 1][x] != 0) DFS(x, y + 1, l + 1);
	// 왼쪽으로 이동할 수 있다면 이동!
	if (x > 0 && map[y][x - 1] != 0) DFS(x - 1, y, l + 1);
	// 오른쪽으로 이동할 수 있다면 이동!
	if (x < n - 1 && map[y][x + 1] != 0) DFS(x + 1, y, l + 1);

	map[y][x] = 1; // 지나간 자리를 원상태로 되돌리기 위해 1을 대입
}

int main()
{
	int i, j;

	scanf("%d", &n);
	min = n * n; // 모든 경로를 돌아다녀도 n * n이니, 이를 최소값으로 지정해둔다
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &map[i][j]);
	DFS(0, 0, 1); // DFS 시작!

	printf("최단 거리: %d\n", min);

	return 0;
}


