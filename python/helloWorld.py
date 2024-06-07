from metest import metests
from metest import results

if __name__ == '__main__':
    met = metests(['printHelloWorld.json', 'cEquals1.json', 'aEquals5.json'])

    print(met)
    a = 1
    b = 1
    a + b
    a+=1
    b+=1
    c = 1
    
    if (c == 1):
        print(a)
        testCEO = met['cEquals1']
        testCEO['metest']['actual'] = '1'
    if (b == 1):
        print(b)
    
    if (c == 1):
        if (a==2):
            testPHW = met['printHelloWorld']
            print("HelloWolrd")
            testPHW['metest']['actual'] = '1'

    a+=2

    b+=1

    c+=1

    a+=1
    testAEF = met['aEquals5']
    testAEF['metest']['actual'] = '1'


    results(met)
   # print(met(['helloWorldTest']))

