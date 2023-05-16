n = int(input("Enter number of items: "))
w = int(input("Enter weight of the bag: "))

wt = []
profit = []
pw = []

for i in range(n):
    print(f"Enter weight and profit of item {i+1} separated by space:")
    a, b = map(int, input().split())
    wt.append(a)
    profit.append(b)
    pw.append(round(b / a, 2))

items_taken = []  # List to store the sequence of items taken into the knapsack
gain = 0

while w > 0 and len(wt) > 0:
    i = pw.index(max(pw))

    if wt[i] <= w:
        gain += profit[i]
        w -= wt[i]
        items_taken.append(i + 1)  # Add the item index to the items_taken list
    else:
        fraction = w / wt[i]
        gain += fraction * profit[i]
        w = 0

        items_taken.append(f"{i + 1} ({fraction:.2f})" if i+1!=len(pw) else f"{i + len(wt)} ({fraction:.2f})")  # Add the item index with fraction to the items_taken list

    wt.pop(i)
    profit.pop(i)
    pw.pop(i)

print("Items taken into the knapsack:", items_taken)
print("Total gain:", gain)
