# EE599-HW2
 HW2 EE599 - Computing and Software for Systems Engineers
● Unless specified: for each question that you write code
○ Provide GTest
○ Provide runtime analysis
○ Proof of correctness is not necessary unless specified
● For submission, please create a zip file of all of your assignments and only submit one file.
● Leave any extra instructions for the graders in a README file.
● Our grader should be able to call blaze run/test ... and run your code/test.
● Deadline: Monday, Feb 3rd, before 6pm.
● Total: 130 points. 100 points is considered full credit.

Question 1 (10 Points. Easy)
Write several functions with the same name Add using function overloading to satisfy the following requirements:
● All three functions take 2 parameters as the input.
● If both inputs are integers perform addition and return the result.
● If both inputs are string, concatenate both the strings and return the output.
● If the first input is an integer and the second input is a string or vice-versa your code
should return a string that will hold the concatenated value of both the inputs.
Examples:
● Example: input: (3, 5), output: 8
● Example: input: (“abc”, “efg”), output: “abcdefg”
● Example: input: (“EE”, 599), output: “EE599”

Question 2 (10 Points. Easy)
How would you find the size of a non-dynamic array? (We are asking about an array, not a vector). Provide the example and outputs of your run for:
● An array of integers
● An array of chars
● An array of floats

 Question 3 (25 Points. Easy)
● Write a function that takes a vector of integers as input. The output is the same vector (i.e. the function's return type should be void) where all duplicates are removed.
○ Example: before: v=[1, 2, 2, 4], after : v=[1, 2, 4]
○ Solve this for the following cases:
■ You cannot use std::set
■ You can use std::set
● Write a function that takes a vector of integers as input. The output is the same vector
but in reversed order:
○ Example: before: [1, 2, 3] after: [3, 2, 1]
● Write a function that takes a vector of integers as input. The output should be the same vector where all ​odd numbers are removed.
○ Example: before: [1, 2, 3], after: [2]
● Write a function that inputs two vectors of integers, and returns a new vector formed by
concatenating the two input vectors.
○ Example: input: ([1, 2, 3], [3, 5, 6]): output: [1, 2, 3, 3, 5, 6]
● Write a function that takes two vectors v1 and v2, and returns a new vector that is the union​ of the values in v1 and v2.
○ Example: input: (v1=[1, 2, 3], v2=[3, 4, 5]), output = [3]

Question 4 (10 Points. Easy)
Write a function swap that will swap the values of the inputs (two integers). Implement this using pass by reference feature using
1. references
2. pointers Example :
- Before: x = 20, y = 30, we call Swap(x,y);
- After: x=30, y=20

Question 5 (15 Points. Medium)
● Write a function that takes a string and two indices i, j as inputs, and then swaps the character at index i with the one at index j.
○ Example: input: (“TEST”, 0, 1), output: “ETST”
● Write a function that takes a string as an input and reverses its value. The function has
no output. It changes the value of the input parameter.
○ Example: Input: “EE599”, Output: “995EE”
○ You cannot use any new local variable of type string or vector or array. The
reverse should happen in place (i.e. on the input vector).

 ● Write a function that converts a string to lower case: ○ Example: input: “EE599”, output: “ee599”
 
Question 6 (20 Points. Easy)
A palindrome is a word, phrase, or other sequences of characters that reads the same
backward as forward, such as madam, r acecar, or the number 10801.
Simple Palindrome: Write a function that accepts a string as input and returns true if the input
is a palindrome and false if it is not.
Approximate palindrome: Sentence-length palindromes may be written when allowances are made for adjustments to capital letters, punctuation, and word dividers (space).
Write a function that can declare the following sentences to be palindromes:
● "A man, a plan, a canal, Panama!"
● "WasitacaroracatIsaw?"
● "No 'x' in Nixon".

Question 7 (20 Points. Medium)
Write a function that takes two strings from and to and determines if they are mappable.
● Two strings are mappable if the characters in from can be replaced to get to.
● Each character can only map to itself.
● The output should be a map:
○ Empty map if the mapping is not possible
○ The actual map if the mapping was possible:
Example 1:
Input: from = "add", to = "egg” Output: {(a->e), (d->g)}
Example 2:
Input: from = "extreme", to = "egg” Output: { }
Example 3:
Input: from = "harder", to = "waiter” Output: { }
Example 4:

 Input: from = "aabbrr", to = "ddeekk” Output: {(a->d),(b->e), (r->k)}
 
Question 8 (20 Points. Medium)
Write a function that:
● Finds the median value of the vector (the vector is not sorted)
● It then rearranges the vector in such a way that it will have all the values lower than the
median on the left side in ascending order starting from the median and all the greater
than the median value on the right side in descending order starting from the median.
Example:
● Input: {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500}
● Output:{ 43, 43, 21,10, 7, 0, 69, 900, 637, 500, 231, 123, 99 }

Question 9 (Optional Question. No Credit. Medium)
Write a function that takes a vector of integers and a number ​R​ as the input. The number R specifies the number of times the vector should be rotated. Specifically, to “rotate” a vector by 1 means to move each element in the vector to its next right location, while the right-most element will be moved to the left most position. See also the following examples.
Example 1: input: ([1,2,3,4], 1), output: [4,1,2,3] 
Example 2: input: ([1,2,3,4], 2), output: [3,4,1,2] 
Example 3: input: ([1,2,3,4], 3), output: [2,3,4,1]) 
Example 4: input: ([1,2,3,4], 4), output: [1,2,3,4]
