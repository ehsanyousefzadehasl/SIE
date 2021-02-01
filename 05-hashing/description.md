# Hashing
Hashing is a way to easily store and retireve data from our data structure. Also, it can have other applications like what see these days in security for chopping and mixing information. For example, consider we have a un-sorted array, if we want to find an element in it, we have to look at every element of the array, so the complexity is O(n). But, even when we have a sorted array, we can find the element (if there is in our array) in O(nlogn). But, hashing method guarantees for us that we will find the element in O(1).

A good example of exploiting this goodness of hashing is direct-mapped, then set-associative cache in hardware. If we have a direct-mapped cache, we know the exact location of a data block in it with the help of index bits, so it takes just O(1), but if we have a n-way set-associative cache, in this sturcture, index bits are used to find the set that we are going to do a linear search to find the data for which we are searching. So, now it is evident why fully-associative caches are slow enough not to be chosen as a solution in hardware, although their hit ratio is better than other structures.

For knowing what is going on in this area, just let's consider that we a hash table with 10 cells and we want to fill it with our data: 8, 1, 2, 18, 23, 16, 6, 13. In this example, we use division-remainder method in which we use the remainder of the key to the number of the hash table's rows (like exactly what we do in a direct-mapped cache). So for the given numbers the rows of table which they are going to reside are:
- 8:  8  %  10 = 8
- 1:  1  %  10 = 1
- 2:  2  %  10 = 2
- 18: 18 %  10 = 8
- 23: 23 %  10 = 3
- 16: 16 %  10 = 6
- 6:  6  %  10 = 6
- 13: 13 %  10 = 3

If we look at the addresses in which the values are going to be stored conflict, and it is one of the downsides of the hash functions (especially in security field). However, in hardware, architects chose to have a little storage for reducing the memory access latency.

Other hashing methods: the folding method, the radix transformation method, the digit rearrangement method