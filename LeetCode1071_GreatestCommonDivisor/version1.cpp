#include<iostream>
#include<string>
#include<list>
#include <algorithm> 

class Solution {
public:
    std::string gcdOfStrings(std::string str1, std::string str2) {
        //std::list<std::string> mylist;
        //mylist.push_back(str1);
        //mylist.push_back(str2);
        std::string base;
        std::string longstring;

        if(str1.length()>str2.length()){
            base = str2;
            longstring = str1;
        }
        else{
            base = str1;
            longstring = str2;
        }

        while (base.length()!=0) {

            if(longstring.length()%base.length()==0){
                int factor = longstring.length()/base.length();
                std::string matchstring;
                for (int i=1; i <=factor; i++){
                    matchstring += base;
                }
                if (matchstring==longstring){
                    return base;
                }
            }
            else{
                base.pop_back();
            }

        }

        return "";
    }   
};

int main() {
    Solution solution;
    std::cout << solution.gcdOfStrings("ABCABC", "ABC") << std::endl;    // Output: "apbqcr"
    return 0;
}