#include "metest.h"
#include <vector>

int main()
{
    std::vector<std::string>> testFilePaths = {"printHelloWorld.json", "cEquals1.json", "aEquals5.json"};
    Metest test(metests());

    json js = test.metestData;
    printf("HelloWorld");
    json testPHW = js["printHelloWorld"];
    testPHW["metest"]["actual"] = "1";
    
}