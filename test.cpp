#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool isPseudoEquivalent(const string& w1, const string& w2, int n) {
    unordered_map<char, int> freqDiff;

    for (int i = 0; i < n; ++i) {
        freqDiff[w1[i]]++;
        freqDiff[w2[i]]--;
    }

    for (const auto& pair : freqDiff) {
        if (pair.second != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    string w1, w2;
    cin >> w1 >> w2;

    if (isPseudoEquivalent(w1, w2, n)) {
        string result = min(w1, w2);
        cout << result << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}