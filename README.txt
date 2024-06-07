Metest is a lightweight framework for data-oriented testing

Here we have an example test file which is json stored as metests/cEquals1.json:

{
    "metest": {
        "goal": "cEquals1",
        "expect":"1",
        "actual": ""
        }
}


Now consider the following python example for our the most simple case:

    #imports required
    from metest import metests
    from metest import results

    #load the metests from json files into memory
    met = metests(['printHelloWorld.json', 'cEquals1.json', 'aEquals5.json'])

    #set the actual value from the program
    if (c == 1):
        print(a)
        testCEO = met['cEquals1']
        testCEO['metest']['actual'] = '1'

    #run the tests expected vs actual
    results(met)

Remember:
 with no goals, we achieve nothing. 
 with a finite set of goals, we achieve a finite set of goals. 
 with infinite set of goals, we achieve infinite set of goals.

And that's the intent of metest. 

License

The class is licensed under the MIT License:

Copyright © 2024 Me (Sean Grady)

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the “Software”), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
