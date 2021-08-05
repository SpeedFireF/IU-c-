#include <iostream>
#include <vector>

using namespace std;

void find_shortest_path(vector<vector<int>> distance){
    int cityAmount = distance.size();

    int path[cityAmount];
    string optimalPath = "";

    for(int i = 0; i < cityAmount; ++i){
        path[i] = i;
    }

    int minimalPathLength = 1000000;

    do {
        int currentPathLength = 0;
        string currentPath = "";

        for(int i = 0; i < cityAmount; ++i){
            currentPathLength += distance[path[i]][path[(i+1) % cityAmount]];
        }
        for(int i=0; i<cityAmount; ++i){
            currentPath += to_string(path[i]) + " ";
        }
        if (currentPathLength < minimalPathLength){
            minimalPathLength = currentPathLength;
            optimalPath = currentPath;

        }

    } while (next_permutation(path, path + cityAmount));

    cout << minimalPathLength << endl << optimalPath << "0" << endl;
}



int main() {

    vector<vector<int>> distance_4 = {{0, 10, 8, 6},
                                      {10, 0, 3, 7},
                                      {8, 3, 0, 1},
                                      {6, 7, 1, 0}};

    find_shortest_path(distance_4);


    vector<vector<int>> distance_5 = {
            {0, 3, 13, 9, 7},
            {3, 0, 6, 12, 10},
            {13, 6, 0, 9, 6},
            {9, 12, 9, 0, 8},
            {7, 10, 6, 8, 0}
    };

    find_shortest_path(distance_5);

    vector<vector<int>> distance_6 = {
            {0, 9, 14, 2, 6, 11},
            {9, 0, 4, 1, 7, 6},
            {14, 4, 0, 2, 10, 9},
            {2, 1, 2, 0, 5, 12},
            {6, 7, 10, 5, 0, 3},
            {11, 6, 9, 12, 3, 0}
    };

    find_shortest_path(distance_6);

    return 0;
}