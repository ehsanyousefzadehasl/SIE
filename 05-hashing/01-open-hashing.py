hash_table = ['', '', '', '', '', '', '', '', '', '']

print("initial hash table: ", hash_table)

numbers = [8, 1, 2, 18, 23, 16, 6, 13]

for element in numbers:
    address = element % 10
    if hash_table[address] == '':
        hash_table[address] = element
    else:
        temp = []
        if isinstance(hash_table[address], list) == True:
            temp = temp + hash_table[address]
        else:    
            temp.append(hash_table[address])
            temp.append(element)
        
        hash_table[address] = temp

print("hash table: ", hash_table)

# ---------- output -------------
# input: 8, 1, 2, 18, 23, 16, 6, 13
# initial hash table:  ['', '', '', '', '', '', '', '', '', '']
# hash table:  ['', 1, 2, [23, 13], '', '', [16, 6], '', [8, 18], '']