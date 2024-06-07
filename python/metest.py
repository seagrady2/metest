import json

def loadTest(filename):
    f = open("../metest/"+filename)
    # returns JSON object as a dictionary
    metest = json.load(f)
    for i in metest['metest']:
        print(i)
    f.close()
    return metest

def metests(testfiles):
    tests = {}
    for file in testfiles:
        json = loadTest(file)
        goal = str(json['metest']['goal'])
        tests[goal] = json
    return tests

def results(Tests):
    for test in Tests:
        print("test= "+ test)
        print(Tests[test])
        if (Tests[test]['metest']['actual'] != Tests[test]['metest']['expect']):
            print("Test failure at: " + Tests[test] )
        
        #f = open(test + '.json', 'wb')
        #f.write(str(Tests[test]))