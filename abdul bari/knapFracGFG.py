# Structure for an item which stores weight and
# corresponding value of Item
class Item:
	def __init__(self, profit, weight):
		self.profit = profit
		self.weight = weight


def comparator(arr:Item):
	return arr.profit/arr.weight


# Main greedy function to solve problem
def fractionalKnapsack(W, arr:list[Item]):

	# Sorting Item on basis of ratio
	arr.sort(key=comparator, reverse=True)

	# Result(value in Knapsack)
	finalvalue = 0.0

	# Looping through all Items
	for item in arr:

		# If adding Item won't overflow,
		# add it completely
		if item.weight <= W:
			W -= item.weight
			finalvalue += item.profit
			print("Picking item, ",item.weight,"with profit",item.profit)

		# If we can't add current Item,
		# add fractional part of it
		else:
			finalvalue += item.profit * W / item.weight
			print("Picking item, ",item.weight,"with profit",item.profit* W / item.weight)
			break
	
	# Returning final value
	return finalvalue


# Driver Code
if __name__ == "__main__":
	
	W = int(input("Enter weight of knapsack: "))
	n=int(input("Enter number of items: "))
	arr = []
	for i in range(n):
		print(f"Enter weight and profit of item {i+1} separated by space:")
		a,b=map(int,input().split())
		arr.append(Item(b,a))

	# Function call
	max_val = fractionalKnapsack(W, arr)
	print("Profit gained",max_val)
