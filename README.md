# Two Sum

`Difficulty: Easy`

Given an array of integers, return **indices** of the two numbers such that they add up to a specific target.

You may assume that each input would have **exactly** one solution, and you may not use the *same* element twice.

Example:
```
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
```

## Solution

Check `solution.cpp` for code and detailed explanation.

**Complexity Analysis**:

- Time complexity : **O(n)**.
We iterate the list containing n elements only once. Each look up in the table costs only O(1) time since we use an **unordered_map**.

- Space complexity : **O(n)**.
The space required depends on the number of items stored in the hash table, which stores n elements in the worst case scenario.
