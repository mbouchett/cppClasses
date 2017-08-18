/* 
 * File:   main.cpp
 * Author: mark
 *
 * Created on August 17, 2017, 5:34 PM
 */

#include <iostream>
#include <string>
#include "Grahp.h"

using namespace std;

int main() {

    cout <<"Using This Map\n";
    cout << "1-2-6\n";
    cout << "| | \n";
    cout << "3 5\n";
    cout << "|/\n";
    cout << "4\n\n";
    
    // Create a graph given in the above diagram
    Graph g(7);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 1);
    g.addEdge(2, 6);
    g.addEdge(2, 5);
    g.addEdge(4, 3);
    g.addEdge(4, 5);
    g.addEdge(5, 4);
    g.addEdge(5, 2);
    g.addEdge(6, 2);
 
    cout << "Depth First Traversal (starting @ vertex 4) \n";
    g.DFS(4);
    cout << "\nDepth First Traversal (starting @ vertex 2) \n";
    g.DFS(2);
    return 0;
}

