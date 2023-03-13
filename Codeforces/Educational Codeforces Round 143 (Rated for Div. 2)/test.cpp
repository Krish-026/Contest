#include <iostream>
#include <vector>
#include <string>

using namespace std;

string recoverString(vector<vector<int>>& lcp) {
    int n = lcp.size();
    string word(n, ' ');
    bool used[n] = {false};

    for (int i = 0; i < n; i++) {
        int j = 0;
        while (used[j] || (j < n && lcp[i][j] != n - i)) {
            j++;
        }
        if (j == n) {
            return "";
        }
        word[i] = 'a' + j;
        used[j] = true;
    }

    return word;
}

int main() {
    vector<vector<int>> lcp = {{4,3,2,1},
                               {3,3,2,1},
                               {2,2,2,1},
                               {1,1,1,1}};

    string word = recoverString(lcp);

    cout << word << endl; // Output: "aaaa"

    return 0;
}
