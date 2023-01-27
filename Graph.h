#pragma once

#include <iostream>

using namespace std;
class Graph
{
private:

	int maxVertices = 50;
	int numVertices;
	int edges[50][50] = { 0 };

public:

	Graph()
	{

		numVertices = 4; // example number

		// initializing each element of the adjacency matrix to zero
		for (int i = 0; i < numVertices; ++i)
		{
			for (int j = 0; j < numVertices; ++j) 
			{
				edges[i][j] = 0;
			}
		}
	}


	Graph(int numVer)
	{
		numVertices = numVer;

		// initializing each element of the adjacency matrix to zero
		for (int i = 0; i < numVertices; ++i)
		{
			for (int j = 0; j < numVertices; ++j)
			{
				edges[i][j] = 0;
			}
		}
	}


	~Graph()
	{
		int i;
		int counter = numVertices;

		for (int j = 0; j < counter; j++)
		{
			int place = 1;
			// removing the vertex
			while (place < numVertices) 
			{
				// shifting the rows to left side
				for (i = 0; i < numVertices; ++i) 
				{
					edges[i][place] = edges[i][place + 1];
				}

				// shifting the columns upwards
				for (i = 0; i < numVertices; ++i)
				{
					edges[place][i] = edges[place + 1][i];
				}
				place++;
			}

			// decreasing the number of vertices
			numVertices--;
		}
	}

	void SetSize(int numVer)
	{
		int i;

		for (int j = 0; j < numVer; j++)
		{
			int place = 1;
			// removing the vertex
			while (place < numVertices) 
			{
				// shifting the rows to left side
				for (i = 0; i < numVertices; ++i) 
				{
					edges[i][place] = edges[i][place + 1];
				}

				// shifting the columns upwards
				for (i = 0; i < numVertices; ++i) 
				{
					edges[place][i] = edges[place + 1][i];
				}
				place++;
			}

			// decreasing the number of vertices
			numVertices--;
		}

		numVertices = numVer;

		// initializing each element of the adjacency matrix to zero
		for (int i = 0; i < numVertices; ++i) 
		{
			for (int j = 0; j < numVertices; ++j) 
			{
				edges[i][j] = 0;
			}
		}
	}

	void AddEdge(int x, int y)
	{
		edges[y][x] = 1;
		edges[x][y] = 1;
	}

	void DeleteEdge(int x, int y)
	{
		edges[y][x] = 0;
		edges[x][y] = 0;
	}
	bool IsEmpty() 
	{
		return (numVertices == 0); 
	};

	bool IsFull()
	{
		return(numVertices == maxVertices);
	}

	void AddVertex()
	{
		numVertices++;
		int i;

		// initializing the new elements to 0
		for (i = 0; i < numVertices; ++i) 
		{
			edges[i][numVertices - 1] = 0;
			edges[numVertices - 1][i] = 0;
		}
	}
	void DeleteVertex(int amount)
	{
		int i;

		for (int j = 0; j < amount; j++)
		{
			int place = 1;
			// removing the vertex
			while (place < numVertices) 
			{
				// shifting the rows to left side
				for (i = 0; i < numVertices; ++i)
				{
					edges[i][place] = edges[i][place + 1];
				}

				// shifting the columns upwards
				for (i = 0; i < numVertices; ++i)
				{
					edges[place][i] = edges[place + 1][i];
				}
				place++;
			}

			// decreasing the number of vertices
			numVertices--;
		}
	}
	void Print()
	{
		cout << "\n\n Adjacency Matrix:";

		// displaying the 2D array
		for (int i = 0; i < numVertices; ++i) 
		{
			cout << endl;
			for (int j = 0; j < numVertices; ++j) 
			{
				cout << " " << edges[i][j];
			}
		}
	}


};

