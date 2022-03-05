public class RAM
{
    private int capacity;
    private int price;

    //constructor
    public RAM(){}
    public RAM(int x, int y)
    {
        setCapacity(x);
        setPrice(y);
    }

    //capacity's methods
    public void setCapacity(int x)
    {
        this.capacity = x;
    }
    public int getCapacity()
    {
        return this.capacity;
    }

    //price's methods
    public void setPrice(int y)
    {
        this.price = y;
    }
    public int getPrice()
    {
        return this.price;
    }

}