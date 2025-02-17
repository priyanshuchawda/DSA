rows = 7  # Total rows for the "5" shape

for i in range(rows):
    if i == 0 or i == rows - 1 or i == rows // 2:  # Top, middle, and bottom lines
        print("*" * 7)
    elif i < rows // 2:  # Vertical line on the left for the top section
        print("*")
    else:  # Vertical line on the right for the bottom section
        print(" " * 6 + "*")
