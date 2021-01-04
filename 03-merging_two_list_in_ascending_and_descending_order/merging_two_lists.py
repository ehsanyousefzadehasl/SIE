
test_list1 = list(map(int, input().split()))
test_list2 = list(map(int, input().split()))

test_list1.sort()
test_list2.sort()

# to combine two sorted lists 
size_1 = len(test_list1) 
size_2 = len(test_list2) 
  
res1 = [] 
i, j = 0, 0
  
while i < size_1 and j < size_2: 
    if test_list1[i] < test_list2[j]: 
      res1.append(test_list1[i]) 
      i += 1
  
    else: 
      res1.append(test_list2[j]) 
      j += 1
  
res1 = res1 + test_list1[i:] + test_list2[j:] 


# printing result 
print ("The Ascending sorted list is : " + str(res1)) 

print ("The Descending sorted list is : " + str(sorted(res1, reverse=True)))
   
 