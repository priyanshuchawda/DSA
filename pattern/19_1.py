# rows=5
# n=10
# g=0
# for i in range(rows):
#     for i in range(n):
#         print("*" * n,end="")
#         print(" "* g,end="")
#         n=n-1
#         g=g+2
#         print("*"*n)

# rows=5
# n=1
# g =8
# for i in range(rows):
#     for i in range(n):
#         print("*"*n,end="")
#         print(" "*g,end="")
#         print("*"*n)
#         n=n+1
#         g=g-2


rows = 5
n = 5
g = 0

for i in range(rows):
    
    print("*" * n, end="")
    
    print(" " * g, end="")
    print("*" * n)
    n -= 1
    g += 2

rows = 5
n = 1
g = 8

for i in range(rows):
    print("*" * n, end="")
    print(" " * g, end="")
    print("*" * n)
    n += 1
    g -= 2
