# Experiment 15: Recursion - README

## Aim

Understand and implement recursion in C++ for problems including:

1. Sum of first N natural numbers
2. Factorial of a number
3. Reversing a number
4. Reversing a string

---

## Objectives

* Learn recursion and its applications.
* Implement recursive functions for math and string operations.
* Compare recursion with iteration regarding memory, time, and readability.
* Explore real-life and industrial applications of recursion.

---

## Tools Used

* VS Code

---

## Theory

### Definition

Recursion is a programming technique where a function calls itself to solve smaller instances of the same problem, continuing until a base condition is met.

### Key Components

* **Base Case:** Stops recursion to prevent infinite calls.
* **Recursive Case:** Calls the function with a simpler input.
* **Parameters:** Values passed for each recursive call, usually reduced each time.

### How Recursion Works

* Each call is pushed to the call stack, storing parameters, local variables, and return address.
* Once the base case is reached, the stack unwinds, returning results in reverse order.

---

## Advantages

* Simplifies code for nested or repetitive problems.
* Elegant for tree traversal, factorial, Fibonacci, string/number reversal.

## Disadvantages

* Higher memory usage due to stack.
* Risk of stack overflow for large inputs.
* Iterative solutions may sometimes be more efficient.

---

## Algorithm

### Sum of N Numbers

1. Read `n`.
2. If `n < 0`, display error.
3. Base case: if `n <= 1`, return 1.
4. Recursive case: return `n + sumup(n-1)`.

### Factorial

1. Read `n`.
2. If `n < 0`, display error.
3. Base case: if `n <= 1`, return 1.
4. Recursive case: return `n * fact(n-1)`.

### Reverse a Number

1. Read `num`.
2. Base case: if `num == 0`, stop.
3. Print `num % 10` and call function with `num / 10`.

### Reverse a String

1. Read string `str`.
2. Base case: if `index < 0`, return "".
3. Recursive case: return `str[index] + reverse(str, index-1)`.

---

## Flowcharts

### Sum of N Numbers

```
Start → Input n → n<0? → Error / n<=1? → Return 1 → Else n+sumup(n-1) → Print → End
```

### Factorial

```
Start → Input n → n<0? → Error / n<=1? → Return 1 → Else n*fact(n-1) → Print → End
```

### Reverse Number

```
Start → Input n → n==0? → Stop → Else print n%10 → Call num/10 → End
```

### Reverse String

```
Start → Input str → index<0? → Return "" → Else str[index]+reverse(str,index-1) → End
```

---

## Recursion vs Iteration

| Feature           | Recursion                               | Iteration                       |
| ----------------- | --------------------------------------- | ------------------------------- |
| Memory Usage      | Higher (call stack)                     | Lower (loop variables)          |
| Time Complexity   | Slightly higher due to function calls   | Lower (no call overhead)        |
| Understandability | Easier for naturally recursive problems | Can be complex for nested logic |
| Termination       | Needs base case                         | Needs loop condition            |
| Use Case          | Trees, graphs, backtracking             | Simple counting, arrays         |

---

## Industrial Applications

* Sorting algorithms: QuickSort, MergeSort
* Tree & graph traversal
* Compiler design & expression parsing
* Backtracking in AI
* Fractal generation in graphics
* Recursive DNS lookups

### Companies Using Recursion

* Google, Microsoft, IBM, Amazon
* Game development: Unity, Epic Games
* Compiler & language tools: Intel, Oracle, JetBrains

---

This README summarizes the theory, algorithms, and applications of recursion, along with comparisons to iteration and flowcharts for visual understanding.
