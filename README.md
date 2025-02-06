# Project: Deq

* Author: Brian Wu
* Class: CS452 Section #002
* Semester: Spring 2025

## Overview

An implementation of a double ended queue in C.

## Reflection

This was a nice refresher for C to learn about structs, and void pointers. There was not anything that challenging, but small bugs did occur every now and then. For example, a small range bug made it so that my rem() cases were not working properly. I feel relatively confident that my test suite does a solid job and can say the implementation appears to be complete. It may not be the most efficient, but I made sure it had a wide coverage of test cases.

## Compiling and Using

To compile the code, first cd into the `hw1` directory.
Then, run this command 

```make```

and then...

```./deq```

OR... if you want to run immediately after building use

```make run```

To use valgrind for memory test:

```make valgrind```

Just make sure the file structure is not disturbed and all should be good!

Note: When you run main, it has all the tests in it. You can look at them, but they are basically using strcmp() to track strings being stored in the deq.

## Results 

From my results, I would say the implementation is nearly 100% complete. I cannot say with full confidence because there are a lot of ways to test with combinations of methods. However, I do feel the tests I have provided do a great job at showcasing the operations that should be expected of this data structure. That being said, you could do a numerous combination of methods here and there to test for correctness, but ~30 tests feels like a comfy number to settle on.

ALSO, I have some tests that are intentionally meant to fail, but I did not have any error handling. If you ever do run these tests just comment them out but they will cause the program to crash. I only have them there just to make sure the conditions are going off.

## Sources used

None
----------

## Notes

* This README template is using Markdown. Here is some help on using Markdown: 
[markdown cheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)


* Markdown can be edited and viewed natively in most IDEs such as Eclipse and VS Code. Just toggle
between the Markdown source and preview tabs.

* To preview your README.md output online, you can copy your file contents to a Markdown editor/previewer
such as [https://stackedit.io/editor](https://stackedit.io/editor).
