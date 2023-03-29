# Super-Egg-Droping-Problem

Dynamic Programming and Binary Search Approach to solve the Egg Droping Problem You are given 𝑘 identical eggs and you have access to a building with 𝑛 floors labeled from 1 to 𝑛. You know that there exists a floor 𝑓 where 0 <= 𝑓 <= 𝑛 such that any egg dropped at a floor higher than 𝑓 will break, and any egg dropped at or below floor 𝑓 will not break. Each move, you may take an unbroken egg and drop it from any floor 𝑥 (where 1 <= 𝑥 <= 𝑛). If the egg breaks, you can no longer use it. However, if the egg does not break, you may reuse it in future moves. Return the minimum number of moves that you need to determine with certainty what the value of 𝑓 is.

Introduction: We have given n number of eggs and f number of floors. We do not know the number of eggs and the number of floors.

![image](https://user-images.githubusercontent.com/92689432/228456652-5f09c1a4-b9c3-4f74-90b4-7650c3938af8.png)

Here, in the figure we have a floor with k blocks and we have n number of eggs, now we have to find the minimum number of attempts to find the critical floor. Suppose, if we drop an egg from floor c, we have two situations either the egg survives or the egg break. If it breaks: we have to check for (k-c) floor with n-1 number of eggs If it survives: we have to check for k-1 floor with n number of eggs We have to find the critical floor from where if we drop an egg will not break, if we drop an egg from higher floor than the critical floor the egg breaks. All the eggs are identical, they follow the same properties.

Each egg breaks only if it is dropped from a certain floor or above.
An egg that is not broken after being dropped from a floor can be used to drop again. We assume the following details:
n= Number of eggs k = Number of floor
