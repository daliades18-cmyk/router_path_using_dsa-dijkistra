#include <stdio.h>
#include <stdlib.h>

#define MAX 20
#define INF 99999

typedef struct
{
    int failed;
} Router;

Router routers[MAX];

int graph[MAX][MAX];
int numRouters;

void initializeGraph()
{
    int i, j;

    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            if (i == j)
                graph[i][j] = 0;
            else
                graph[i][j] = INF;
        }
    }
}

void addConnections()
{
    int edges;
    int a, b, weight;
    int i;

    printf("\nEnter number of connections: ");
    scanf("%d", &edges);

    for (i = 0; i < edges; i++)
    {
        printf("\nConnection %d\n", i + 1);

        printf("Enter source router (0-%d): ", numRouters - 1);
        scanf("%d", &a);

        printf("Enter destination router (0-%d): ", numRouters - 1);
        scanf("%d", &b);

        printf("Enter weight/distance: ");
        scanf("%d", &weight);

        graph[a][b] = weight;
        graph[b][a] = weight;
    }
}

void displayGraph()
{
    int i, j;

    printf("\n===== NETWORK MATRIX =====\n\n");

    for (i = 0; i < numRouters; i++)
    {
        for (j = 0; j < numRouters; j++)
        {
            if (graph[i][j] == INF)
                printf("INF ");
            else
                printf("%3d ", graph[i][j]);
        }
        printf("\n");
    }
}

void failRouter()
{
    int r;

    printf("\nEnter router to fail (0-%d): ", numRouters - 1);
    scanf("%d", &r);

    routers[r].failed = 1;

    printf("Router %d FAILED!\n", r);
}

void dijkstra(int start, int end)
{
    int dist[MAX];
    int visited[MAX];
    int parent[MAX];

    int i, j;

    for (i = 0; i < numRouters; i++)
    {
        dist[i] = INF;
        visited[i] = 0;
        parent[i] = -1;
    }

    dist[start] = 0;

    for (i = 0; i < numRouters - 1; i++)
    {
        int min = INF;
        int u = -1;

        for (j = 0; j < numRouters; j++)
        {
            if (!visited[j] &&
                dist[j] < min &&
                !routers[j].failed)
            {
                min = dist[j];
                u = j;
            }
        }

        if (u == -1)
            break;

        visited[u] = 1;

        for (j = 0; j < numRouters; j++)
        {
            if (!visited[j] &&
                graph[u][j] != INF &&
                !routers[j].failed &&
                dist[u] + graph[u][j] < dist[j])
            {
                dist[j] = dist[u] + graph[u][j];
                parent[j] = u;
            }
        }
    }

    if (dist[end] == INF)
    {
        printf("\nNo path found!\n");
        return;
    }

    printf("\nShortest Distance = %d\n", dist[end]);

    int path[MAX];
    int count = 0;

    int current = end;

    while (current != -1)
    {
        path[count++] = current;
        current = parent[current];
    }

    printf("Packet Path: ");

    for (i = count - 1; i >= 0; i--)
    {
        printf("%d", path[i]);

        if (i != 0)
            printf(" -> ");
    }

    printf("\n");

    printf("\nPacket Movement Simulation:\n");

    for (i = count - 1; i >= 0; i--)
    {
        printf("Packet reached Router %d\n", path[i]);
    }

    printf("Packet Delivered Successfully!\n");
}

int main()
{
    int start, end;
    int choice;

    initializeGraph();

    printf("===== INTERNET PACKET VISUALIZER =====\n");

    printf("\nEnter number of routers: ");
    scanf("%d", &numRouters);

    addConnections();

    while (1)
    {
        printf("\n===== MENU =====\n");
        printf("1. Display Network\n");
        printf("2. Send Packet\n");
        printf("3. Fail Router\n");
        printf("4. Exit\n");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                displayGraph();
                break;

            case 2:
                printf("\nEnter source router: ");
                scanf("%d", &start);

                printf("Enter destination router: ");
                scanf("%d", &end);

                dijkstra(start, end);
                break;

            case 3:
                failRouter();
                break;

            case 4:
                printf("\nExiting...\n");
                exit(0);

            default:
                printf("\nInvalid choice!\n");
        }
    }

    return 0;
}