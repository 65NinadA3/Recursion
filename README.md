# Recursion  

**Name:** Ninad Phatak  
**PRN:** 24070123065  
**Batch:** ENTC A3  

---

## Overview  

In C++, **recursion** is a technique where a function calls itself directly or indirectly to solve a problem.  
It is often used for problems that can be broken down into smaller, similar subproblems.  

Key points about recursion:  
- A **base case** is required to stop the recursion and prevent infinite loops.  
- Each recursive call reduces the problem size, bringing it closer to the base case.  
- Recursion is widely used in mathematical computations (like factorial, Fibonacci series, sum of numbers) and problems like string reversal, tree traversal, etc.  

---

## 1. Recursion to Add Numbers Till n  

### Algorithm  
1. Start the program.  
2. Take input `n` from the user.  
3. If `n` is 0, display **“Sum is equal to 0”**.  
4. Otherwise, use a function that:  
   - Iterates from `1` to `n`.  
   - Adds all numbers together.  
   - Returns the total sum.  
5. Print the result.  
6. End the program.  

### Theory  
This program calculates the sum of the first `n` natural numbers.  
- The function loops from `1` to `n`, accumulating the total.  
- Although the function uses a **for loop** instead of recursive calls, the idea reflects repetitive computation.  

### Output  
Enter the value of n:5
Sum of 5is =15

markdown
Copy code

---

## 2. Recursion to Find the Factorial of a Number  

### Algorithm  
1. Start the program.  
2. Take input `n` from the user.  
3. If `n` is less than 0, display **“Factorial not defined for negative numbers.”**  
4. Otherwise, define a recursive function:  
   - **Base case:** If `n <= 1`, return 1.  
   - **Recursive case:** Return `n * factorial(n-1)`.  
5. Print the factorial value.  
6. End the program.  

### Theory  
This program uses **recursion** to compute the factorial of a number.  
- The factorial of `n` is defined as `n * (n-1) * (n-2) * ... * 1`.  
- The base case ensures that recursion stops when `n` is `0` or `1`.  
- For positive numbers, recursive calls multiply `n` with the factorial of `(n-1)` until the base case is reached.  

### Output  
Enter the number: 4
Factorial of 4 is = 24

vbnet
Copy code

---

## 3. Recursion to Reverse a String  

### Algorithm  
1. Start the program.  
2. Input a string from the user.  
3. Define a recursive function to reverse the string:  
   - **Base case:** If the index `i` is less than 0, stop recursion.  
   - **Recursive case:** Print the character at index `i` and call the function again with `i-1`.  
4. Begin recursion with the last character of the string.  
5. The characters are printed in reverse order.  
6. End the program.  

### Theory  
This program reverses a string using recursion.  
- The recursive function prints characters starting from the last index and moves backward.  
- The base case is when the index becomes negative, which stops further calls.  
- This eliminates the need for loops or temporary variables to reverse the string.  

### Output  
Enter the string: blackbodyeffect
Reversed String = tceffeydobkcalb
