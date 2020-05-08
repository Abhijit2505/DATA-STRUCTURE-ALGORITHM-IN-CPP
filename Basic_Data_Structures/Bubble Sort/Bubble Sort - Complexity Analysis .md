# About the Algorithm
### 🎓 The Main Concept

Aim of the algorithm - "Sorting the array in increasing order".

This algorithm is one of the iterative approach that we use to accomplishg the task. We have one nested loop, the outer loop itearted n 
times where n is the length of the array. The inner loop (index = j) iterates from (i+1) to n where i is the currernt position of the index. 
If the value of arr[i] > arr[j] we swap it to the right of the array to sort it in an increasing manner.

### ⁂ Complexity Analysis

The outer loop iterates for n times and the inner loop for (n-1) times. Hence the time complexity of the algorithm is n(n-1) ⩭ n^2
So the algorithm has a worst case time complexity of O(n^2), when the array is unsorted fully.
If the array is sorted, the best case time complexity occurs, which is of O(n).
Also this algorithm use constant space to operate. Hence the auxiliary space complexity is O(1).

🧧 For more info visit - https://www.geeksforgeeks.org/bubble-sort/
