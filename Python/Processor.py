class Processor():

    #private attributes
    name = ""
    price = 0

    #constructor
    def __init__(self, name = "", price = 0):
        self.name = name
        self.price = price

    def setName(self, n):
        self.name = n

    def getName(self):
        return self.name

    def setPrice(self, x):
        self.price = x

    def getPrice(self):
        return self.price