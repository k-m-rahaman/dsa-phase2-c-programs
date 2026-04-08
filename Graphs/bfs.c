#include <stdio.h>
#define V 5

int queue[100], front = -1, rear = -1;

void enqueue(int x) {
    if (rear == 99) return;
    if (front == -1) front = 0;
    queue[++rear] = x;
}

int dequeue() {
    if (front == -1 || front > rear) return -1;
    return queue[front++];
}

void BFS(int graph[V][V], int start) {
    int visited[V] = {0};

    enqueue(start);
    visited[start] = 1;

    while (front <= rear) {
        int node = dequeue();
        printf("%d ", node);

        for (int i = 0; i < V; i++) {
            if (graph[node][i] && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int graph[V][V] = {
        {0,1,1,0,0},
        {1,0,0,1,0},
        {1,0,0,0,1},
        {0,1,0,0,0},
        {0,0,1,0,0}
    };

    BFS(graph, 0);
    return 0;
}