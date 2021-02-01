hash_table = ['', '', '', '', '', '', '', '', '', '']

print("initial hash table: ", hash_table)

numbers = [8, 1, 2, 18, 23, 16, 6, 13]

for element in numbers:
    address = element % 10
    hash_table[address] = element


print("hash table: ", hash_table) 