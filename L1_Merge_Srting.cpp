#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string mergeAlternately(const string& word1, const string& word2) {
        int longestLength = max(word1.length(), word2.length());
        string result;
        for (int i = 0; i < longestLength; ++i) {
            if (i < word1.length()) {
                result += word1[i];
            }
            if (i < word2.length()) {
                result += word2[i];
            }
        }
        return result;
    }
};

int main() {
    Solution solution;
    string word1 = "abc";
    string word2 = "pqr";
    string result = solution.mergeAlternately(word1, word2);
    cout << "Merged String: " << result << endl;
    return 0;
}
