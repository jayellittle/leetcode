//
//  Solution.cpp
//  LC1768
//
//  Created by Woo Sung Jahng on 2024/05/06.
//

#include "Solution.hpp"
#include <vector>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i, min_size;
        min_size = int(min(word1.size(), word2.size()));
        vector<char> vec;
        for (i=0; i<min_size; i++) {
            vec.push_back(word1[i]);
            vec.push_back(word2[i]);
        }
        if (min_size == word1.size()) {
            for (; i<word2.size(); i++) {
                vec.push_back(word2[i]);
            }
        } else {
            for (; i<word1.size(); i++) {
                vec.push_back(word1[i]);
            }
        }
        string str(vec.begin(), vec.end());

        return str;
    }
};
