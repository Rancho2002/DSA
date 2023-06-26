
s = set([1, 2, 3, 4, 5])
it = iter(s)
while it:
    try:
        x = next(it) #However, you can use the next() function to advance the iterator to the next position multiple times, like this
        print(x)
    except StopIteration:
        break
