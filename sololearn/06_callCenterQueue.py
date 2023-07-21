class CallCenter:
    def __init__(self):
      self.customers = []

    def is_empty(self):
      return self.customers == []

    def add(self, x):
      self.customers.insert(0, x)

    def next(self):
      return self.customers.pop()


c = CallCenter()

while True:
    n = input()
    if n == 'end':
        break
    c.add(n)

#your code goes here
ans=0
while(c.customers!=[]):
  l=c.next()
  if(l=="general"):
    ans+=5
  else:
    ans+=10
print(ans)
