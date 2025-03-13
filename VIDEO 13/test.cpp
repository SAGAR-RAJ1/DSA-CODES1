#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Count occurrences of each element in the entire array
    unordered_map<int, int> elementCount;
    for (int i = 0; i < N; ++i) {
        elementCount[A[i]]++;
    }

    long long answer = 0; // Initialize the answer

    while (Q--) {
        int I, r;
        cin >> I >> r;

        // Count occurrences of each element in the subarray [I, r]
        unordered_map<int, int> subarrayCount;
        for (int i = I - 1; i < r; ++i) {
            subarrayCount[A[i]]++;
        }

        // Check if the subarray is "good"
        bool isGood = true;
        for (const auto & [element, count] : subarrayCount) {
            if (count != elementCount[element] * K) {
                isGood = false;
                break;
            }
        }

        // If the subarray is good, add its index to the answer
        if (isGood) {
            answer += I;
            answer %= MOD;
        }
    }

    cout << answer << endl;

    return 0;
}