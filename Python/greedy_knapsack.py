# Greedy knapsack
capacity = float(input("Enter the capacity"))
capacityRemaining = capacity
n = int(input("Enter the number of items"))
items = []
price = []
ratio = []
weight = []
for i in range(n):
    items.append(input("enter item name"))
    weight.append(int(input("enter item name weight")))
    price.append(int(input("Enter the price")))
    ratio.append(price[i]//weight[i])

choice = int(input('Enter 1 for minimizing weight\n2 for maximizing price \n3 for maximazing ratio'))
count = 0
weightOfBag = 0
totalSum = 0
while count<n:
    if choice == 1:
        mweight = min(weight)
        pos = weight.index(mweight)
    elif choice == 2:
        mprice = max(price)
        pos = price.index(mprice)
        mweight = weight[pos]
    else:
        mratio = max(ratio)
        pos = ratio.index(mratio)
        mweight = weight[pos]

    if mweight <= capacityRemaining:
        print(items[pos], "inserted into bag")
        totalSum += price[pos]
        weightOfBag += mweight
        capacityRemaining = capacity - weightOfBag

    del items[pos]
    del weight[pos]
    del price[pos]
    del ratio[pos]
    count+=1
    if capacity == weightOfBag:
        break

print("Total price in bag:", totalSum, "\ntotal weight of bag:", weightOfBag)    
