#pragma once

#ifdef MAPPER_EXPORTS
#define MAPPER_API __declspec(dllexport)
#else
#define MAPPER_API __declspec(dllimport)
#endif




#include <string>
#include <unordered_map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

 class MAPPER_API  Mapper1 {
public:
    int Map(const std::string & buffer, std::unordered_map<std::string, int>&word_counts);
    void CleanWordWrapper(std::string& word) {
        CleanWord(word);
    }
private:
    // Helper function to remove punctuation and convert to lowercase
    void CleanWord(std::string& word); // , std::unordered_map<std::string, int>& word_counts);
};

