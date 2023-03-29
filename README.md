# Super-Egg-Droping-Problem

Dynamic Programming and Binary Search Approach to solve the Egg Droping Problem You are given 𝑘 identical eggs and you have access to a building with 𝑛 floors labeled from 1 to 𝑛. You know that there exists a floor 𝑓 where 0 <= 𝑓 <= 𝑛 such that any egg dropped at a floor higher than 𝑓 will break, and any egg dropped at or below floor 𝑓 will not break. Each move, you may take an unbroken egg and drop it from any floor 𝑥 (where 1 <= 𝑥 <= 𝑛). If the egg breaks, you can no longer use it. However, if the egg does not break, you may reuse it in future moves. Return the minimum number of moves that you need to determine with certainty what the value of 𝑓 is.

Introduction: We have given n number of eggs and f number of floors. We do not know the number of eggs and the number of floors.

![image](https://user-images.githubusercontent.com/92689432/228456652-5f09c1a4-b9c3-4f74-90b4-7650c3938af8.png)

Here, in the figure we have a floor with k blocks and we have n number of eggs, now we have to find the minimum number of attempts to find the critical floor. Suppose, if we drop an egg from floor c, we have two situations either the egg survives or the egg break. If it breaks: we have to check for (k-c) floor with n-1 number of eggs If it survives: we have to check for k-1 floor with n number of eggs We have to find the critical floor from where if we drop an egg will not break, if we drop an egg from higher floor than the critical floor the egg breaks. All the eggs are identical, they follow the same properties.

Each egg breaks only if it is dropped from a certain floor or above.
An egg that is not broken after being dropped from a floor can be used to drop again. We assume the following details:
n= Number of eggs k = Number of floor

# Main Data Structures:

I use Dynamic Programming Memorization approach to solve the problem. I can solve it with recursion approach also but the time complexity is very high which is: O(k * 2min(n, k) ). Memorization is the process of storing the result for future use. When same scenario appear we directly use the value rather than performing the calculation. It minimizes the space and time complexity.
The fundamental approach I am using is a. Find the maximum number of attempts on that floor which is Optimizing the worst case b. Find the Best from the worst case or we can say minimum of the worst cases: it gives the guarantee of finding the floor.

We have base cases as follows: If Number of floor =0 we require 0 attempts If Number of floor = 1 we require 1 attempt If Number of eggs = We cannot find the attempts If Number of egg =1 we require f (number of floor) attempts

# Time Complexity:

A dynamic programming memorization is done for every combination of the number of eggs and floors. The maximum possible number of combinations is K X N, where ‘K’ and ‘N’ represent the number of eggs and floors. We need to have visit each floors for storing the optimal result N. The time complexity of this approach is NXN where ‘N’ represents the number of floors given. O(K X N X N), where ‘K’ and ‘N’ represent the number of eggs and floors respectively. We try to minimize the exponential complexity using Binary Search approach.


# Binary Search Approach:

We can optimize this dynamic programming memorization technique. We can binary search for further optimization. We can change very few on our code can minimize the exponential time complexity.

A binary search is done for every combination of the number of eggs and floors. The maximum possible number of combinations is K X N, where ‘K’ and ‘N’ represent the number of eggs and floors. The time complexity of a binary search operation is log(N), where ‘N’ represents the number of floors given. O(K * NlogN), where ‘K’ and ‘N’ represent the number of eggs and floors respectively.

# Space Complexity:

Additional space is required to store the results of the recursive function in the memo. The size of the memo depends on the number of eggs and floors given in the input. So, the space complexity is O(K X N), where ‘K’ and ‘N’ represent the number of eggs and floors, respectively.
