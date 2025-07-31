# Student’s Capital

## Description
You flip laptops to grow your capital. From K available laptops you can choose at most N. Each laptop i has:
- price[i]: cost to acquire it (must have at least that much current capital to buy),
- gains[i]: net profit after buying, fixing, and reselling (i.e., capital increases by this amount).

Select up to N laptops in an order that maximizes final capital, given starting capital C.

## Input
```
K N C
gains[0] gains[1] ... gains[K-1]
prices[0] prices[1] ... prices[K-1]
```
- K: total available laptops
- N: maximum you can buy/fix
- C: initial capital
- gains[i]: net profit from laptop i
- prices[i]: purchase price of laptop i

## Output
```C```

C: final capital after optimally choosing up to N laptops.

## Tech Stack
- Language: C++17
- Build: `g++`

## Run

```bash
./main.cpp
```

## Example
Input:
```
7 3 5
-1 2 3 5 100 1 1000
4 5 6 10 20 3 100
```
Output:
```
165
```
Explanation: 

- Start: С=5, pq={2, 1, -1}
- Step 1: C=7, pq={3, 1, -1}
- Step 2: C=10, pq={5, 1, -1}
- Step 3: C=15, pq={1, -1}
- End, because N=3: C=15

## Notes
- By gains is meant profit from each laptop
- Laptops with non-positive gains[i] are skipped by the algorithm (no benefit).
- If no affordable laptop is available at some step, the process stops.
