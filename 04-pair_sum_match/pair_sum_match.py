# This algorithm is from O(n) complexity as the array has to be traversed once
# in fact, this implementation is based Hashing

def print_pairs(array, array_size, sum_of_desired):
     
    # Create an empty hash set
    s = set()
     
    for i in range(0, array_size):
        temp = sum_of_desired - array[i]
        if temp in s:
            print("Pair with given sum "+ str(sum_of_desired) + " is (" + str(array[i]) + ", " + str(temp) + ")")
        s.add(array[i])
 


# driver code
# Test
# 6
# 1 4 45 6 10 8

n = int(input())
A = list(map(int, input().split()))

print_pairs(A, len(A), n)