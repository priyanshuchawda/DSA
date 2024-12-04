n = 5 # 5 rows 
for i in range(n + 1): # range till 6 since it takes till 5
    for ch in range(ord('A'), ord('A') + i): # starts with A ends with A, A B , A B C .... 
        print(chr(ch), end="") #will print one by one 
    print()
