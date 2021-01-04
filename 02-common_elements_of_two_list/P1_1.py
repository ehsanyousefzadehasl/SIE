def Intersection(lst1, lst2): 
    return set(lst1).intersection(lst2) 
      
# Driver Code 
list1 = list(map(int, input().split()))
list2 = list(map(int, input().split()))
print(Intersection(list1, list2)) 