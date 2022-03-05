public class Disk
{
    private String type;
    private int capacity;
    private int price;

    //constructor
    public Disk(){}
    public Disk(String x, int y, int z)
    {
        setType(x);
        setCapacity(y);
        setPrice(z);
    }

    //type's methods
    public void setType(String x)
    {
        this.type = x;
    }
    public String getType()
    {
        return this.type;
    }

    //capacity's methods
    public void setCapacity(int y)
    {
        this.capacity = y;
    }
    public int getCapacity()
    {
        return this.capacity;
    }

    //price's methods
    public void setPrice(int z)
    {
        this.price = z;
    }
    public int getPrice()
    {
        return this.price;
    }

}