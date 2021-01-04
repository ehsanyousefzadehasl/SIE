sorted_full = list(map(int, input().split()))
sorted_sub = list(map(int, input().split()))

sorted_full.sort() # count sort can be used instead of these, which its complexity is O(n)
sorted_sub.sort()

common_elements = []

full_ix = 0
sub_ix = 0

while full_ix < len(sorted_full) and sub_ix < len(sorted_sub):
    curr_full = sorted_full[full_ix]
    curr_sub = sorted_sub[sub_ix]
    if curr_full == curr_sub:
        common_elements.append(curr_full)
        full_ix +=1
        sub_ix +=1
        continue
    if curr_full < curr_sub:
        full_ix +=1
    else:
        sub_ix+=1

print("Common Elements: ", common_elements)