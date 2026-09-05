# 01 — Asymptotic Analysis

> *"The goal is not to remember the solution. The goal is to develop the ability to find the solutions."*

---

## What is Asymptotic Analysis?

Asymptotic analysis is the **mathematical lens** through which we evaluate algorithms. It answers one critical question:

> *"As the input size (n) grows, how does the time and memory usage grow?"*

We don't care about milliseconds. A faster CPU will always beat a slower one. We care about **scaling**—how the algorithm behaves when `n` goes from 10 to 1,000,000.

---

## The Complexity Scale (From Best to Worst)

| Big-O | Name | Growth (n=10) | Growth (n=100) | When to Use |
| :--- | :--- | :--- | :--- | :--- |
| **O(1)** | Constant | 1 | 1 | Direct access, math, hash lookup. |
| **O(log n)** | Logarithmic | 4 | 7 | Binary Search, Balanced Trees. |
| **O(n)** | Linear | 10 | 100 | Single loop, traversal, linear search. |
| **O(n log n)** | Linearithmic | 33 | 664 | Efficient sorting (Merge Sort, Heap Sort). |
| **O(n²)** | Quadratic | 100 | 10,000 | Nested loops, bubble sort. |
| **O(2ⁿ)** | Exponential | 1,024 | 1.27e30 | Recursive branching (naive Fibonacci). |
| **O(n!)** | Factorial | 3.6M | 9.3e157 | Generating all permutations. |

---

## The Three Notations 

| Notation | Name | Meaning | Analogy |
| :--- | :--- | :--- | :--- |
| **Big-O** | Upper Bound | "Worst case. Never slower than this." | Speed limit. |
| **Big-Ω** | Lower Bound | "Best case. Never faster than this." | Minimum wage. |
| **Big-Θ** | Tight Bound | "Exactly this. Locked in." | Your exact salary. |

---

## How to Spot Complexity in Code (The Pattern Recognition)

| Complexity | Code Signature | Example |
| :--- | :--- | :--- |
| **O(1)** | No loops. Direct access. Math. | `arr[5] = 100;` |
| **O(log n)** | Loop divides by 2. Recursion halves input. | `for (i = n; i > 1; i /= 2)` |
| **O(n)** | Single loop. Traverses all elements. | `for (i = 0; i < n; i++)` |
| **O(n log n)** | Nested loops (one linear, one halving). Sorting. | `for (i=0; i<n; i++) { for (j=n; j>1; j/=2) }` |
| **O(n²)** | Two nested loops. | `for (i=0; i<n; i++) { for (j=0; j<n; j++) }` |
| **O(2ⁿ)** | Recursion that branches twice. | `return fib(n-1) + fib(n-2);` |
| **O(n!)** | Recursion that branches n times. | Generating all permutations. |

---

## The Golden Rule

> *"The biggest fish eats the smaller fish."*

When analyzing sequential operations, the **largest complexity dominates**.

Example:
```c
// Block 1: O(n)
for (int i = 0; i < n; i++) { ... }

// Block 2: O(n²)
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) { ... }
}

// Total: O(n) + O(n²) = O(n²)  <-- The O(n²) dominates.