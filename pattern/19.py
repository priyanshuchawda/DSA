rows = 5
n = 5
h = 1

# First pattern
for i in range(rows):
    # Print first set of stars
    for j in range(n):
        print("*", end="")
    temp = n
    n -= 1
    # Print spaces
    for k in range((h - 1) * 2):
        print(" ", end="")
    h += 1
    # Print second set of stars
    for k in range(temp):
        print("*", end="")
    print()  # Move to the next line

rowss = 5
nn = 1
hh = 5

# Second pattern
for ii in range(rowss):
    # Print first set of stars
    for jj in range(nn):
        print("*", end="")
    tempp = nn
    nn += 1
    # Print spaces
    for kk in range((hh - 1) * 2):
        print(" ", end="")
    hh -= 1
    # Print second set of stars
    for kk in range(tempp):
        print("*", end="")
    print()  # Move to the next line
