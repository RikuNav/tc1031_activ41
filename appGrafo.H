// =================================================================
//
// File: appgrafo.h
// Author: Ricardo Navarro Gómez - A01708825
// Date: 23/10/2022
//
// =================================================================

#ifndef APPGRAFO_H_
#define APPGRAFO_H_

#include <sstream>
#include <set>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <vector>
#include <iostream>
#include "exception.h"
#include "header.h"
#include "ugraph.h"


// =================================================================
// Definition of the appGrafo class
// =================================================================

template <class T>
class appGrafo: public UMatrixGraph{
public:
    appGrafo(int, bool dir = true);
    void loadGraph() const = 0;
    std::set<T> dfs(const T& start, const UnweightedGraph<T>* graph);
    std::set<T> bfs(const T& start, const UnweightedGraph<T>* graph);
};

// =================================================================
// Constructor. Initializes the maximum size of the graph and creates
// the array.
//
// @param max, the maximum size of the graph.
// @param dir, the directorie of the next element.
// =================================================================

template <class T>
appGrafo<T>::appGrafo(int max, bool dir) {
    UMatrixGraph(max, dir);
};

// =================================================================
// Calculates the total number of vertexes of the graph.
//
// @complexity O(n)
// =================================================================

template <class T>
void appGrafo<T>::loadGraph() const{
    getVertexes();
}

// =================================================================
// Returns the DFS of the graph starting in the initial node.
//
// @param start, is going to be the intial node of the DFS.
//        graph, is the matrix that contains the graph.
//
// @complexity O(n^2) because we are using an adjacency matrix for
//                    making the DFS
// =================================================================

template <class T>
std::set<T> appGrafo<T>::dfs(const T& start, const UnweightedGraph<T>* graph) {
    return dfs(start, graph);
};

// =================================================================
// Returns the BFS of the graph starting in the initial node.
//
// @param start, is going to be the intial node of the BFS.
//        graph, is the matrix that contains the graph.
//
// @complexity O(n^2) because we are using an adjacency matrix for
//                    making the DFS
// =================================================================

template <class T>
std::set<T> appGrafo<T>::bfs(const T& start, const UnweightedGraph<T>* graph) {
    return bfs(start, graph);
};

#endif /* APPGRAFO_H_ */