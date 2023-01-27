/*
Gabe Sibulkin, Graph Lab 6, Due 10/23/22
*/

#include <iostream>
#include "Graph.h"

int main()
{
    Graph obj(8); // test file replicated here

    obj.AddEdge(0, 4);
    obj.AddEdge(0, 6);
    obj.AddEdge(0, 7);
    obj.AddEdge(1, 2);
    obj.AddEdge(1, 5);
    obj.AddEdge(2, 5);
    obj.AddEdge(3, 4);
    obj.AddEdge(3, 6);
    obj.AddEdge(4, 7);
    obj.AddEdge(5, 6);

    obj.Print();

    obj.DeleteEdge(0, 4);

    obj.Print();

    obj.DeleteVertex(1); // delete vertex deletes a specific amount of vertexes.

    obj.Print();

    obj.DeleteVertex(4); // see? 

    obj.Print();

    obj.AddVertex();

    obj.Print();

    obj.~Graph();

    obj.Print();

    cout << endl;

    if (obj.IsEmpty() == true)
    {
        cout << "Empty" << endl;
    }

    obj.SetSize(50);

    cout << "Set size to max..." << endl;

    if (obj.IsFull() == true)
    {
        cout << "Full" << endl;
    }

    obj.Print();

}
