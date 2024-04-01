//
// Created by Luis Razo on 01/04/2024.
//
#include <vector>
#include <string>
#include <sstream>

#ifndef LENGTH_OF_LAST_WORD_SOLUTION_H
#define LENGTH_OF_LAST_WORD_SOLUTION_H


class Solution {
public:
    int lengthOfLastWord(std::string s) {

        std::string buf;                 // Have a buffer string
        std::stringstream ss(s);     // Insert the string into a stream

        std::vector<std::string> tokens; // Create vector to hold the words

        while (ss >> buf)
            tokens.push_back(buf);

        std::string last = tokens[tokens.size()-1];
        return last.length();
    }
};

#endif //LENGTH_OF_LAST_WORD_SOLUTION_H
