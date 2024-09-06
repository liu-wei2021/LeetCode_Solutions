#include<iostream>
#include<string>
#include <algorithm> 

class Solution {


public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string merged_string = "";
        int min_length = std::min(word1.length(),word2.length());

        for (int i = 0; i < min_length; i++){
            merged_string += word1[i];
            merged_string += word2[i];
        }

        if (word1.length() > word2.length()){
            merged_string += word1.substr(min_length);
        }
        
        if (word2.length() > word1.length()){
            merged_string += word2.substr(min_length);
        }

        return merged_string;

    }
};

int main() {
    Solution solution;
    std::cout << solution.mergeAlternately("abc", "pqr") << std::endl;    // Output: "apbqcr"
    return 0;
}