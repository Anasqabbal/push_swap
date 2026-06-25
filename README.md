# push_swap

![Score](https://img.shields.io/badge/score-100%2F100-success)
![C](https://img.shields.io/badge/language-C-blue)
![Algorithm](https://img.shields.io/badge/Algorithm-Sorting-orange)

## 📌 Overview
**push_swap** is an algorithmic project from the 1337 (42 Network) curriculum. The objective is to sort data on a stack, with a limited set of instructions, using the lowest possible number of actions.

For a Software Engineer, algorithm optimization and complexity analysis (Big O) are essential skills. This project pushed me to think critically about time complexity and to implement efficient sorting logic using a highly constrained instruction set.

![Push Swap Demo](pushSwapAlgorithmOutput.gif)

## 💡 Core Concepts Explored
### Algorithmic Optimization & Sorting
**Definition:** Sorting algorithms arrange elements in a specific order. Optimization in this context means reducing the number of instructions (operations) and time complexity to reach the sorted state.
**Problem Solved:** It solves the problem of inefficient data retrieval and processing by ordering data in structured stacks, specifically challenging the programmer to find the lowest possible operational cost under strict constraints.

## 📜 Project Rules & Restrictions
The project is strictly governed by the following rules:
- **Two Stacks:** The game is played with two stacks named `a` and `b` (following LIFO/FILO principles where operations happen at the top of the stack). Stack `a` initially contains a random assortment of negative and/or positive numbers without any duplicates. Stack `b` is initially empty.
- **Goal:** Sort the numbers in stack `a` in ascending order.
- **Operations:** You can only use the following specific operations to manipulate the stacks:
  - `sa` (swap a): Swap the first 2 elements at the top of stack `a`.
  - `sb` (swap b): Swap the first 2 elements at the top of stack `b`.
  - `ss`: `sa` and `sb` at the same time.
  - `pa` (push a): Take the first element at the top of `b` and put it at the top of `a`.
  - `pb` (push b): Take the first element at the top of `a` and put it at the top of `b`.
  - `ra` (rotate a): Shift up all elements of stack `a` by 1. The first element becomes the last one.
  - `rb` (rotate b): Shift up all elements of stack `b` by 1. The first element becomes the last one.
  - `rr`: `ra` and `rb` at the same time.
  - `rra` (reverse rotate a): Shift down all elements of stack `a` by 1. The last element becomes the first one.
  - `rrb` (reverse rotate b): Shift down all elements of stack `b` by 1. The last element becomes the first one.
  - `rrr`: `rra` and `rrb` at the same time.

## 📊 Evaluation Benchmarks
During evaluation, the algorithm's efficiency is strictly graded based on the number of instructions used to sort the stack:
- **3 numbers:** Must be sorted in **≤ 3 moves**.
- **5 numbers:** Must be sorted in **≤ 12 moves**.
- **100 numbers:** Graded on a 1 to 5 point scale:
  - 5 points: < 700 moves
  - 4 points: < 900 moves
  - 3 points: < 1100 moves
  - 2 points: < 1300 moves
  - 1 point: < 1500 moves
- **500 numbers:** Graded on a 1 to 5 point scale:
  - 5 points: < 5500 moves
  - 4 points: < 7000 moves
  - 3 points: < 8500 moves
  - 2 points: < 10000 moves
  - 1 point: < 11500 moves

## 🚀 Features
- Implementation of a custom sorting algorithm optimized for two stacks (`a` and `b`).
- Handles small data sets (3, 5 numbers) with hardcoded minimal operations.
- Handles large data sets (100, 500 numbers) using an advanced algorithm. Elements are pushed to stack `b` based on the longest increasing subsequence or chunking, and pushed back by calculating the lowest-cost move.
- Custom instruction set: `sa`, `sb`, `ss`, `pa`, `pb`, `ra`, `rb`, `rr`, `rra`, `rrb`, `rrr`.

## ⚙️ Algorithm Implementation Details
To achieve maximum efficiency with the fewest operations:
1. **Initial Phase:** The algorithm pushes a significant portion of elements from stack `a` to stack `b`. It may leave a sorted subset in `a` to minimize future operations.
2. **Cost Calculation:** Before pushing an element back to `a`, the algorithm calculates the exact cost (number of operations) required to move each element in `b` to its correct sorted position in `a`.
3. **Execution of the Best Move:** The element with the lowest overall cost is selected. The stacks are rotated efficiently (combining moves like `rr` or `rrr` to save operations), and the element is then pushed (`pa`).
4. **Final Alignment:** Once stack `b` is empty, stack `a` is rotated to bring the smallest value to the top, fully sorting the stack.

## 📥 How to Clone
To clone this project, use the following command:
```bash
git clone git@github.com:Anasqabbal/push_swap.git
cd push_swap
```

## 🛠️ Usage
Compile the project:
```bash
make
```
Run the generated `push_swap` executable with a list of integers:
```bash
./push_swap 42 1337 -1 0 21
```
To verify the sorting, you can use the provided `checker` program (if implemented for the bonus):
```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG
```

## 🧠 What I Learned
- Deep dive into sorting algorithms and algorithmic complexity.
- Data structures: Implementing and manipulating stacks (often via linked lists or arrays).
- Program profiling and performance tuning to minimize instruction count.
- **Memory Management:** Avoiding memory leaks and carefully managing dynamic memory by utilizing the linked list structures already implemented in the custom `libft` library.

## 🌐 Connect with me
[![GitHub](https://img.shields.io/badge/GitHub-black?logo=github)](https://github.com/Anasqabbal)
[![LinkedIn](https://img.shields.io/badge/-IN-0A66C2?logo=linkedin&logoColor=0a66c2)](https://www.linkedin.com/in/anasqabbal/)

