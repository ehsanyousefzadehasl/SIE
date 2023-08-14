def index_find(arr, x, n):

    for i in range(n):
        if (arr[i] == x):
            return i
 
    return -1
 
def post_order(In, pre, n):
    # finding the index of the root
    root = index_find(In, pre[0], n)
 
    if (root != 0):
        post_order(In, pre[1:n], root)

    if (root != n - 1):
        post_order(In[root + 1 : n], 
                      pre[root + 1 : n],
                      n - root - 1)

    print(pre[0], end = " ")
 

#tests
#6
#1 2 4 5 3 6
#4 5 2 1 3 6

#8
#1 2 4 3 5 7 8 6
#4 2 1 7 5 8 3 6

n = int(input())

pre_order_traversal = list(map(int, input().split()))
in_order_traversal = list(map(int, input().split()))
print("post order traversal:")
post_order(in_order_traversal, pre_order_traversal, n)