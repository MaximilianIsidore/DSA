#include <iostream>
#include <queue>
#include <vector>
#include <set>

using namespace std;

// Function to check if the end of the matrix can be reached with health > 0
bool canReachEndWithHealth(vector<vector<int>>& grid, int initial_health) {
  int n = grid.size();
    int m = grid[0].size();

    vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    
    if(grid[0][0] == 1) initial_health -=1;
    queue<tuple<int, int, int>> q;
    q.push({0, 0, initial_health});

    set<tuple<int, int, int>> visited;
    visited.insert({0, 0, initial_health});

    // Perform BFS
    while (!q.empty()) {
        auto [row, col, health] = q.front();
        q.pop();

        
        if (row == n - 1 && col == m - 1 && health > 0) {
            return true;
        }

      
        for (auto [dr, dc] : directions) {
            int new_row = row + dr;
            int new_col = col + dc;
           
            if (new_row >= 0 && new_row < n && new_col >= 0 && new_col < m) {

                int new_health = health - (grid[new_row][new_col] == 1 ? 1 : 0);
               
                if (new_health>0 && visited.find({new_row, new_col, new_health}) == visited.end()){
                    visited.insert({new_row, new_col, new_health});
                    q.push({new_row, new_col, new_health});
                }
            }
            
        }
    }

    return false;
}

int main() {
    // Example grid (0 = safe, 1 = unsafe)
    vector<vector<int>> grid = {
        {0, 0, 1},
        {1, 0, 1},
        {0, 0, 0}
    };

    int initial_health = 5;

    if (canReachEndWithHealth(grid, initial_health)) {
        cout << "You can reach the end with health > 0!" << endl;
    } else {
        cout << "You cannot reach the end with health > 0!" << endl;
    }

    return 0;
}
