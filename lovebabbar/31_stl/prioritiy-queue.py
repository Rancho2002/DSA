import heapq

def minCost(arr, n):
    #! min heap
    mini = []
    for i in range(n):
        heapq.heappush(mini, arr[i])
    print(mini)
    heapq.heappop(mini)
    print(mini)
minCost([4,3,2],3)


# print(set([4,1,2,3,5])) #!sort hoye jai, jantam na