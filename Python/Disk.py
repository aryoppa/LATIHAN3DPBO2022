class Disk():

    #private attributes
    type = ""
    capacity = 0
    price = 0

    #constructors
    def __init__(self, type ="", capacity = 0, price = 0):
        self.type = type
        self.capacity = capacity
        self.price = price

    def setType(self, n):
        self.type = n

    def getType(self):
        return self.type

    def setCapacity(self, x):
        self.capacity = x

    def getCapacity(self):
        return self.capacity

    def setPrice(self, y):
        self.price = y
    
    def getPrice(self):
        return self.price