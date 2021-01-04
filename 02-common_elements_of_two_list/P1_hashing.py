list1 = list(map(int, input().split()))
list2 = list(map(int, input().split()))

our_dic = dict()
common_elements = []

for element in list1:
    if element not in our_dic.keys():
        our_dic[element] = 1

for element in list2:
    if element not in our_dic.keys():
        our_dic[element] = 1
    else:
        common_elements.append(element) 

print("Common elements are: ", common_elements)