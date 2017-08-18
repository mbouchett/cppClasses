/* 
 * File:   Grahp.h
 * Author: mark
 *
 * Created on August 17, 2017, 5:34 PM
 * Taken from:http://www.geeksforgeeks.org/depth-first-traversal-for-a-graph/
 */

#ifndef GRAHP_H
#define GRAHP_H
#include <list>
#include<iostream>

class Graph{
    int V;                      // No. of vertices
    std::list<int> *adj;        // Pointer to an array containing adjacency lists
    void DFSUtil(int v, bool visited[]);  // A function used by DFS
public:
    Graph(int V);               // Constructor
    void addEdge(int v, int w); // function to add an edge to graph
    void DFS(int v);            // DFS traversal of the vertices reachable from v
};

#endif /* GRAHP_H */

