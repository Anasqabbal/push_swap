# push_swap

![Score](https://img.shields.io/badge/score-100%2F100-success)
![C](https://img.shields.io/badge/language-C-blue)
![Algorithm](https://img.shields.io/badge/Algorithm-Sorting-orange)

## 📌 Overview
**push_swap** is an algorithmic project from the 1337 (42 Network) curriculum. The objective is to sort data on a stack, with a limited set of instructions, using the lowest possible number of actions.

For a Software Engineer, algorithm optimization and complexity analysis (Big O) are essential skills. This project pushed me to think critically about time complexity and to implement efficient sorting logic using a highly constrained instruction set.

## 💡 Core Concepts Explored
### Algorithmic Optimization & Sorting
**Definition:** Sorting algorithms arrange elements in a specific order. Optimization in this context means reducing the number of instructions (operations) and time complexity to reach the sorted state.
**Problem Solved:** It solves the problem of inefficient data retrieval and processing by ordering data in structured stacks, specifically challenging the programmer to find the lowest possible operational cost under strict constraints.

## 🚀 Features
- Implementation of a custom sorting algorithm optimized for two stacks (`a` and `b`).
- Handles small data sets (3, 5 numbers) with hardcoded minimal operations.
- Handles large data sets (100, 500 numbers) using advanced techniques (e.g., Radix sort or custom chunking/longest increasing subsequence logic).
- Custom instruction set: `sa`, `sb`, `ss`, `pa`, `pb`, `ra`, `rb`, `rr`, `rra`, `rrb`, `rrr`.

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

## 🌐 Connect with me
[![GitHub](https://img.shields.io/badge/GitHub-black?logo=github)](https://github.com/Anasqabbal)
[![LinkedIn](https://img.shields.io/badge/-IN-0A66C2?logo=linkedin&logoColor=0a66c2)](https://www.linkedin.com/in/anasqabbal/)

