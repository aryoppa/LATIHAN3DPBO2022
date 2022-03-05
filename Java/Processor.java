public class Processor
{
    private String name;
    private int price;

    //constructor
    public Processor(){}
    public Processor(String x, int y)
    {
        setName(x);
        setPrice(y);
    }

    //name's methods
    public void setName(String x)
    {
        this.name = x;
    }
    public String getName()
    {
        return this.name;
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