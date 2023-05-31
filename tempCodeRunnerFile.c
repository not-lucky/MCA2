#include <stdio.h>
#include <stdlib.h>

// Structure for the graph node
struct Node {
    int vertex;
    struct Node* next;
};

// Function to create a new graph node
struct Node* createNode(int v) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

// Function to add an edge to the graph
void addEdge(struct Node** graph, int src, int dest) {
    // Create a new node for the destination vertex
    struct Node* newNode = createNode(dest);

    // Add the new node to the adjacency list of the source vertex
    newNode->next = graph[src];
    graph[src] = newNode;

    // Since it is an undirected graph, add an edge from dest to src as well
    newNode = createNode(src);
    newNode->next = graph[dest];
    graph[dest] = newNode;
}

// Function to print the graph
void printGraph(struct Node** graph, int vertices) {
    for (int i = 0; i < vertices; ++i) {
        struct Node* currentNode = graph[i];
        printf("Adjacency list of vertex %d: ", i);
        while (currentNode) {
            printf("%d -> ", currentNode->vertex);
            currentNode = currentNode->next;
        }
        printf("NULL\n");
    }
}

int main() {
    int vertices = 5;
    struct Node** graph = (struct Node**)malloc(vertices * sizeof(struct Node*));

    // Initialize the graph with NULL values
    for (int i = 0; i < vertices; ++i) {
        graph[i] = NULL;
    }

    // Add edges to the graph
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    // Print the graph
    printGraph(graph, vertices);

    // Free the memory allocated for the graph
    for (int i = 0; i < vertices; ++i) {
        struct Node* currentNode = graph[i];
        while (currentNode) {
            struct Node* temp = currentNode;
            currentNode = currentNode->next;
            free(temp);
        }
    }
    free(graph);

    return 0;
}
