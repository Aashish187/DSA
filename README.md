# DSA Problem Solving Repository

A structured collection of Data Structures and Algorithms solutions in **C++**, focused on building deep problem-solving intuition by implementing multiple approaches — from brute force to optimal — for every problem.

---

## Philosophy

Most people just memorize solutions. This repo is different.

Every problem is solved **three times**:
- 🔴 **Brute Force** — The naive, obvious approach. Understand the problem first.
- 🟡 **Better** — Improve time or space. Identify the bottleneck.
- 🟢 **Optimal** — Best known solution. Understand *why* it works.

This progression builds the kind of thinking needed to solve unseen problems under pressure.

---

## Repository Structure

```
DSA/
├── Striver/                  # Primary solving folder (A2Z DSA Sheet)
│   ├── Arrays/
│   │   ├── Easy/
│   │   │   └── problem_name/
│   │   │       ├── brute.cpp
│   │   │       ├── better.cpp
│   │   │       └── optimal.cpp
│   │   ├── Medium/
│   │   └── Hard/
│   └── ...more topics coming
│
├── LeetCode/                 # LeetCode specific problems
└── CodingNinjas/             # Coding Ninjas problems
```

---

## Progress

| Topic | Easy | Medium | Hard | Status |
|-------|------|--------|------|--------|
| Arrays & Strings | ✅ | 🔄 | 🔄 | In Progress |
| Recursion & Backtracking | ⬜ | ⬜ | ⬜ | Upcoming |
| Sorting & Searching | ⬜ | ⬜ | ⬜ | Upcoming |
| Dynamic Programming | ⬜ | ⬜ | ⬜ | Upcoming |
| Trees & Graphs | ⬜ | ⬜ | ⬜ | Upcoming |

---

## Example: How Each Problem is Solved

**Problem:** Find the maximum subarray sum

**`brute.cpp`** — O(n³) — Check all subarrays
```cpp
int maxSubarraySum(vector<int>& arr) {
    int maxSum = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
        for (int j = i; j < arr.size(); j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) sum += arr[k];
            maxSum = max(maxSum, sum);
        }
    return maxSum;
}
```

**`better.cpp`** — O(n²) — Eliminate inner loop with prefix sum
```cpp
int maxSubarraySum(vector<int>& arr) {
    int maxSum = INT_MIN;
    for (int i = 0; i < arr.size(); i++) {
        int sum = 0;
        for (int j = i; j < arr.size(); j++) {
            sum += arr[j];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}
```

**`optimal.cpp`** — O(n) — Kadane's Algorithm
```cpp
int maxSubarraySum(vector<int>& arr) {
    int maxSum = INT_MIN, sum = 0;
    for (int x : arr) {
        sum += x;
        maxSum = max(maxSum, sum);
        if (sum < 0) sum = 0;
    }
    return maxSum;
}
```

---

## Resources I Follow

- [Striver's A2Z DSA Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2/) — Primary roadmap
- [LeetCode](https://leetcode.com/u/AashishSinghNegi/) — Practice platform
- [Coding Ninjas](https://www.codingninjas.com/) — Supplementary problems

---

## Connect

- **GitHub:** [Aashish187](https://github.com/Aashish187)
- **LeetCode:** [AashishSinghNegi](https://leetcode.com/u/AashishSinghNegi/)
- **Codeforces:** [_Aashish_18](https://codeforces.com/profile/_Aashish_18)
