class RAM():

    #private attributes
    capacity = 0
    price = 0

    #constructors
    def __init__(self, capacity = 0, price = 0):
        self.capacity = capacity
        self.price = price

    def setCapacity(self, x):
        self.capacity = x

    def getCapacity(self):
        return self.capacity

    def setPrice(self, y):
        self.price = y

    def getPrice(self):
        return self.price