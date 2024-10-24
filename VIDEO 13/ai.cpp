#include <bits/stdc++.h>
using namespace std;

string trim(string s) {
    // Implement the trim function (remove leading/trailing spaces)
    // ...
    return s;
}

vector<string> splitString(string s) {
    // Implement the splitString function (split a string by spaces)
    // ...
    return {}; // Placeholder
}

int get_answer(int N, int K, vector<int>& A, int Q, int two, vector<vector<int>>& queries) {
    // Implement the logic to process queries and find the sum of indices
    // ...
    return 0; // Placeholder
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string inputline;
    getline(cin, inputline);
    int N = stoi(trim(inputline));

    getline(cin, inputline);
    int K = stoi(trim(inputline));

    vector<int> A(N);
    for (int j = 0; j < N; ++j) {
        getline(cin, inputline);
        A[j] = stoi(trim(inputline));
    }

    getline(cin, inputline);
    int Q = stoi(trim(inputline));

    getline(cin, inputline);
    int two = stoi(trim(inputline));

    vector<vector<int>> queries(Q, vector<int>(two));
    for (int i = 0; i < Q; ++i) {
        getline(cin, inputline);
        vector<string> inputLineArr = splitString(trim(inputline));
        for (int j = 0; j < two; ++j) {
            queries[i][j] = stoi(inputLineArr[j]);
        }
    }

    int result = get_answer(N, K, A, Q, two, queries);
    cout << result << "\n";

    return 0;
}