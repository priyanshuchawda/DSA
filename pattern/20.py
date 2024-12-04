# *        * 
# **      **
# ***    ***
# ****  ****
# **********
# ****  ****
# ***    ***
# **      **
# *        *
# 

#upper triangle
rows=5
n=1
spaces = 8
for i in range(rows):
    print("*" * n , end = "") # Print stars on the left
    

    print(" "*spaces , end = "") # Print spaces in the middle
    spaces=spaces-2 #by observation 2 spaces decreasing everytime

    print("*" * n) # Print stars on the right

    n=n+1 #1st row 1 star 2nd row 2 star and so on

#lower triangle
rows = 4 #since  4 rows for lower as seen 
n = 4    # 4 stars for the first row 
spaces = 2     # 2 spaces for the first row 

for i in range(rows):  # One less row than the upper triangle
    print("*" * n, end="")   # Print stars on the left
    
    print(" " * spaces, end="")   # Print spaces in the middle
    
    print("*" * n)   # Print stars on the right
    
    n =n - 1   # Decrease stars by 1 for the next row
    spaces = spaces + 2   # Increase spaces by 2 for the next row

