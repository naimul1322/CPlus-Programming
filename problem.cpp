#include <bits/stdc++.h>

using namespace std;

// Function to find the lowest possible total cost and the assignment of tasks to employees
pair<int, vector<pair<int, int>>> optimizeTaskAssignment(int n, const vector<vector<int>>& costs) {
    vector<vector<int>> costMatrix = costs;

    // Subtract the minimum cost from each row to make at least one zero in each row
    for (int i = 0; i < n; ++i) {
        int minCost = *min_element(costMatrix[i].begin(), costMatrix[i].end());
        for (int j = 0; j < n; ++j) {
            costMatrix[i][j] -= minCost;
        }
    }

    // Subtract the minimum cost from each column to make at least one zero in each column
    for (int j = 0; j < n; ++j) {
        int minCost = numeric_limits<int>::max();
        for (int i = 0; i < n; ++i) {
            minCost = min(minCost, costMatrix[i][j]);
        }
        for (int i = 0; i < n; ++i) {
            costMatrix[i][j] -= minCost;
        }
    }

    // Vector to store the assignment of tasks to employees
    vector<int> assignment(n, -1);

    // Vector to track whether an employee is assigned to a task
    vector<bool> assigned(n, false);

    // Perform the assignment
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (costMatrix[i][j] == 0 && !assigned[j]) {
                assignment[i] = j;
                assigned[j] = true;
                break;
            }
        }
    }

    // Calculate the lowest possible total cost
    int totalCost = 0;
    for (int i = 0; i < n; ++i) {
        totalCost += costs[i][assignment[i]];
    }

    // Prepare the assignment results
    vector<pair<int, int>> assignments;
    for (int i = 0; i < n; ++i) {
        assignments.push_back({i + 1, assignment[i] + 1});
    }

    return {totalCost, assignments};
}

int main() {
    // User input for the number of employees
    int n;
//    cout << "Enter the number of employees: ";
    cin >> n;

    // User input for the task costs matrix
    vector<vector<int>> costs(n, vector<int>(n));
 //   cout << "Enter the task costs matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Enter costs for employee " << (i + 1) << ": ";
        for (int j = 0; j < n; ++j) {
            cin >> costs[i][j];
        }
    }

    // Call the function to get the optimized task assignment
    auto [totalCost, assignments] = optimizeTaskAssignment(n, costs);

    // Print the lowest possible total cost
    cout << "Lowest possible total cost: " << totalCost << endl;

    // Print the assignment of tasks to employees
    cout << "Task assignments:" << endl;
    for (const auto& assignment : assignments) {
        cout << "Employee " << assignment.first << " assigned to task " << assignment.second << endl;
    }

    return 0;
}
