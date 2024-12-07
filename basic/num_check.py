n=87362
count=0 
while (n > 0):
    count=count + 1 #here we count the number of digits
    n = n//10  #we divide number by 10 to get the next digit,
                #example 87362 // 10 = 8736
                #then 8736 // 10 = 873
                #then 873 // 10 = 87
                #then 87 // 10 = 8
                #then 8 // 10 = 0
                #so loop runned 5 times
print(count) 

