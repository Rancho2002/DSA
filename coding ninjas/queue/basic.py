import queue
q=queue.Queue(maxsize=3)
q.put(4)
q.put(5)
q.put(6)

while not q.empty():
    print(q.get()) # first in first out 4
