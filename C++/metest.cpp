#include "metest.h"
#include <stdio.h>
#include <fstream>
#include <iostream> //must go 
//Metest::Metest(){}
//Metest::~Metest(){}

bool Metest::loadTest(const std::string& filename, std::string& metest)
{
    // read in the json file
	std::ifstream f(filename, std::ifstream::in);
    json js; //create unitiialized json object
    f >> js; // initialize json object with what was read from file
    std::cout << js["metest"] << std::endl; // prints json object to screen
    metest = js.dump();

    return true;
}

bool Metest::metests(const std::vector<std::string>&testFilePaths, json& out)
{
    json out;
    for (auto testFilename: testFilePaths){
        std::string testData;
        loadTest(testFilename, testData );  
        json j = json::parse(testData);
        std::string goal = j["metest"]["goal"];
        out[goal] = j;
    }

    return true;
}

bool Metest::results(json js)
{
    for (auto test: js){
        std::string testName = test.get<std::string>();
        std::cout << js[testName] << std::endl;
        if (js[testName]["metest"]["actual"] == js[testName]["metest"]["expect"]){
            std::cout << "Failure at " << js[testName] << std::endl;
        }
    }
    return true;
}