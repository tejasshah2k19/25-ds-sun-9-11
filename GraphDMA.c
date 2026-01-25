#include <stdlib.h>
#include <stdio.h>

struct edge
{
    int src;
    int dest;
};

int main()
{

    int totalVertext;
    int totalEdges;
    struct edge *e;
    int i;
    int src, dest;

    printf("\nHow many Vertex and Edge? ");
    scanf("%d%d", &totalVertext, &totalEdges);

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
    return 0;
}