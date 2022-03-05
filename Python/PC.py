import imp
from Processor import Processor
from Disk import Disk
from RAM import RAM

class PC():

    #private attributes
    Pobj = Processor()
    Dobj = Disk()
    Robj = RAM()
    total = 0
    name = ""

    #constructors
    def __init__(self, p = Processor, d = Disk, r = RAM, n = ""):
        self.Pobj = p
        self.Dobj = d
        self.Robj = r
        self.name = n

    def setName(self, n=""):
        self.name = n
    
    def getName(self):
        return self.name
    
    def setProcessor(self, Pobj):
        self.Pobj = Pobj

    def getProcessor(self):
        return self.Pobj

    def setDisk(self, Dobj):
        self.Dobj = Dobj
    
    def getDisk(self):
        return self.Dobj

    def setRAM(self, Robj):
        self.Robj = Robj

    def getRAM(self):
        return self.Robj

    def getTotal(self, p, d, r):
        self.total = p + d + r
        return self.total

    def print(self):
        print("============================")
        print("PC's Brand       : " + str(self.name))
        print("Processor")
        print("  -Brand         : " + str(self.Pobj.getName()))
        print("  -Price         : IDR " + str(self.Pobj.getPrice()))
        print("Disk")
        print("  -Type          : " + str(self.Dobj.getType()))
        print("  -Capacity      : " + str(self.Dobj.getCapacity()))
        print("  -Price         : IDR " + str(self.Dobj.getPrice()))
        print("RAM")
        print("  -Capacity      : " + str(self.Robj.getCapacity()))
        print("  -Price         : IDR " + str(self.Robj.getPrice()))
        print("PC's Total Price : IDR " + str(self.getTotal(self.Pobj.getPrice(), self.Dobj.getPrice(), self.Robj.getPrice())))