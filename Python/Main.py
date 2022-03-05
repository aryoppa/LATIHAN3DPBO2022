from telnetlib import DO

from numpy import r_
from Processor import Processor
from Disk import Disk
from RAM import RAM
from PC import PC

Pobj = Processor()
Dobj = Disk()
Robj = RAM()

print("==========================")
print("Please type the PC's spec!")
print("==========================")

p_brand = str(input("PC's Brand     : "))

p_name = str(input("Processor name : "))
Pobj.setName(p_name)

p_price = int(input("Processor price: "))
Pobj.setPrice(p_price)

d_type = str(input("Disk type      : "))
Dobj.setType(d_type)

d_capacity = int(input("Disk capacity  : "))
Dobj.setCapacity(d_capacity)

d_price = int(input("Disk price     : "))
Dobj.setPrice(d_price)

r_capacity = int(input("RAM capacity   : "))
Robj.setCapacity(r_capacity)

r_price = int(input("RAM price      : "))
Robj.setPrice(r_price)

pc = PC(Pobj, Dobj, Robj, p_brand)
pc.print()