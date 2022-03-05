public class PC
{
    //private attributes
    Processor Pobj = new Processor();
    Disk Dobj = new Disk();
    RAM Robj = new RAM();
    int total;
    String name;

    public PC(){}
    public PC(Processor p, Disk d, RAM r, String n)
    {
        getTotal(p, d, r);
        this.Pobj = p;
        this.Dobj = d;
        this.Robj = r;
        setName(n);
    }

    //Name's methods
    public void setName(String n)
    {
        this.name = n;
    }
    public String getName()
    {
        return this.name;
    }

    //Processor object's methods
    public void setProcessor(Processor p)
    {
        this.Pobj = p;
    }
    public Processor getProcessor()
    {
        return this.Pobj;
    }

    //Disk object's methods
    public void setDisk(Disk d)
    {
        this.Dobj = d;
    }
    public Disk getDisk()
    {
        return this.Dobj;
    }

    //RAM object's methods
    public void setRAM(RAM r)
    {
        this.Robj = r;
    }
    public RAM getRAM()
    {
        return this.Robj;
    }

    //function to return total price from other classes
    int getTotal(Processor p, Disk d, RAM r)
    {
        return this.total = p.getPrice() + d.getPrice() + r.getPrice();
    }

    public void print()
    {
        System.out.print("\n============================\n");
        System.out.println("PC's Brand       : " + this.name);
        System.out.println("Processor");
        System.out.println("  -Brand         : " + this.Pobj.getName());
        System.out.println("  -Price         : IDR " + this.Pobj.getPrice());
        System.out.println("Disk");
        System.out.println("  -Type          : " + this.Dobj.getType());
        System.out.println("  -Capacity      : " + this.Dobj.getCapacity() + " GB");
        System.out.println("  -Price         : IDR " + this.Dobj.getPrice());
        System.out.println("RAM");
        System.out.println("  -Capacity      : " + this.Robj.getCapacity() + " GB");
        System.out.println("  -Price         : IDR " + this.Robj.getPrice());
        System.out.println("PC's Total Price : IDR " + getTotal(this.Pobj, this.Dobj, this.Robj));
        System.out.println("============================");

    }
}