import java.util.Scanner;

class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        //objects
        Processor Pobj = new Processor();
        Disk Dobj = new Disk();
        RAM Robj = new RAM();

        //vars
        String pc_brand = "";

        String p_name = "";
        int p_price = 0;

        String d_type = "";
        int d_capacity = 0;
        int d_price = 0;

        int r_capacity = 0;
        int r_price = 0;

        System.out.println("==========================");
        System.out.println("Please type the PC's spec!");
        System.out.println("==========================");

        System.out.print("PC's Brand     : ");
        try{
            pc_brand = sc.next();
        }catch(Exception e){}

        System.out.print("Processor name : ");
        try{
            p_name = sc.next();
        }catch(Exception e){}
        Pobj.setName(p_name);

        System.out.print("Processor price: ");
        try{
            p_price = sc.nextInt();
        }catch(Exception e){}
        Pobj.setPrice(p_price);

        System.out.print("Disk type      : ");
        try{
            d_type = sc.next();
        }catch(Exception e){}
        Dobj.setType(d_type);

        System.out.print("Disk capacity  : ");
        try{
            d_capacity = sc.nextInt();
        }catch(Exception e){}
        Dobj.setCapacity(d_capacity);

        System.out.print("Disk price     : ");
        try{
            d_price = sc.nextInt();
        }catch(Exception e){}
        Dobj.setPrice(d_price);

        System.out.print("RAM capacity   : ");
        try{
            r_capacity = sc.nextInt();
        }catch(Exception e){}
        Robj.setCapacity(r_capacity);

        System.out.print("RAM price      : ");
        try{
            r_price = sc.nextInt();
        }catch(Exception e){}
        Robj.setPrice(r_price);

        PC pc = new PC(Pobj, Dobj, Robj, pc_brand);
        pc.print();
    }
}