#include<iostream>
#include<string>
#include <algorithm> 

class Solution {


public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        int n = word1.length();
        int m = word2.length();
        std::string result = "";

        for (int i = 0; i < std::max(n,m); i++ ){
            if (i < n){
                result.push_back(word1[i]);
            }
            if (i < m){
                result.push_back(word2[i]);
            }
        }

        return result;

    }
};


int main() {
    Solution solution;
    std::cout << solution.mergeAlternately("abc", "pqr") << std::endl;    // Output: "apbqcr"
    return 0;
}