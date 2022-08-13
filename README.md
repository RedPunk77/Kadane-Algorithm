# Kadane-Algorithm
Algorithm for finding a contiguous subarray with the largest sum. Runs in O(n). 
How it works:

We calculate an array of prefix sums, if one of the elements of prefix sums array is negative, it becomes zero because there is no need to add negative element (sum) to the array (adding it will make our sum of elements (of main array) only smaller). So, Kadane algorithm claims that subarray with the largest sum is the biggest element in prefix array, which we look for simultaneously with calculating the prefix sum elements.
