# Number of rows
# since rows = 4

for i in range(1, 5):
    # Print numbers from 1 to i
    for j in range(1, i + 1):
        print(j, end="")

    # Print spaces in between
    print(" " * (2 * (4 - i)), end="")

    # Print numbers from i to 1
    for j in range(i, 0, -1):
        print(j, end="")

    # Move to the next row
    print()
