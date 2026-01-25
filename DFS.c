#include <stdlib.h>
#include <stdio.h>

struct edge
{
    int src;
    int dest;
};

int totalVertices;
int totalEdges;
struct edge *e;
int index = 0;
int *visited;

int isVisited(int search){
    int i;
    for(i=0;i<totalVertices;i++){
        if(visited[i] == search){
            return 1;
        }
    }
    return 0;
}

void DFS(int vertex)
{
    int i;
    visited[index] = vertex;//3 1 5
    index++;
    printf(" %d", vertex); // 3 1 5 
    for (i = 0; i < totalEdges; i++)
    {
        if(e[i].src == vertex  && isVisited(e[i].dest) == 0){
            vertex = e[i].dest; //5 
            DFS(vertex);
        }
    }
}

int main()
{

    int i;
    int src, dest;
    int initialVertex;

    printf("\nHow many Vertex and Edge? ");     //
    scanf("%d%d", &totalVertices, &totalEdges); // 8 10
    visited = calloc(totalVertices, sizeof(int));

    totalEdges = totalEdges * 2;

    e = calloc(totalEdges, sizeof(struct edge));

    for (i = 0; i < totalEdges; i++)
    {
        printf("Enter Src and Dest : ");
        scanf("%d%d", &src, &dest);

        e[i].src = src;   // 5
        e[i].dest = dest; // 7

        i++;

        e[i].src = dest;
        e[i].dest = src;
    }

    for (i = 0; i < totalEdges; i++)
    {
        printf("\n%d => %d", e[i].src, e[i].dest);
    }

    printf("Enter initial Vertex");
    scanf("%d", &initialVertex); // 3

    DFS(initialVertex);

    return 0;
}