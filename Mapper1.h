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
extern "C" { MAPPER_API int MapWrapper(const std::string& buffer, std::unordered_map<std::string, int>& word_counts);}
extern "C" {
    class MAPPER_API  Mapper1 {
    public:
        static int __cdecl map(const std::string& buffer, std::unordered_map<std::string, int>& word_counts);
        void cleanWordWrapper(std::string& word) {
            cleanWord(word);
        }
    private:
        // Helper function to remove punctuation and convert to lowercase
        static   void cleanWord(std::string& word); // , std::unordered_map<std::string, int>& word_counts);
    };
}

