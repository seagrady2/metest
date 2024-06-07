#pragma once
#include <vector>
#include <string>
#include "json.hpp"

using json = nlohmann::json;

class Metest
{
    public:
        Metest(const std::vector<std::string>&testFilePaths){ metests(testFilePaths, metestsData); }
        ~Metest(){}
        bool loadTest(const std::string& filename, std::string& metest);
        bool metests(const std::vector<std::string>&testFilePaths, json& out);
        bool results(json js);

        json metestsData;
};



