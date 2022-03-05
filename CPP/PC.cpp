#include <iostream>
#include <string>

//include the classes that are going to be used
#include "Processor.cpp"
#include "Disk.cpp"
#include "RAM.cpp"

using namespace std;

class PC
{
    private:
        //declare objects from other classes
        Processor Pobj;
        Disk Dobj;
        RAM Robj;
        int total;
        string name;

    public:
        
        //constructors
        PC(){}
        PC(Processor p, Disk d, RAM r, string n)
        {
           getTotal(p, d, r);
           this->Pobj = p;
           this->Dobj = d;
           this->Robj = r;
           setName(n);
        }

        //Name's methods
        void setName(string n)
        {
            this->name = n;
        }
        string getName()
        {
            return this->name;
        }

        //Processor object's methods
        void setProcessor(Processor p)
        {
            this->Pobj = p;
        }
        Processor getProcessor()
        {
            return this->Pobj;
        }

        //Disk object's methods
        void setDisk(Disk d)
        {
            this->Dobj = d;
        }
        Disk getDisk()
        {
            return this->Dobj;
        }

        //RAM object's methods
        void setRAM(RAM r)
        {
            this->Robj = r;
        }
        RAM getRAM()
        {
            return this->Robj;
        }

        //function to return total price from other classes
        int getTotal(Processor p, Disk d, RAM r)
        {
            return this->total = p.getPrice() + d.getPrice() + r.getPrice();
        }

        void print()
        {
            cout << endl;
            cout << "============================" << endl;
            cout << "PC's Brand       : " << this->name << endl;
            cout << endl;
            cout << "Processor" << endl;
            cout << "  -Brand         : " << this->Pobj.getName() << endl;
            cout << "  -Price         : IDR " << this->Pobj.getPrice() << endl;
            cout << endl;
            cout << "Disk" << endl;
            cout << "  -Type          : " << this->Dobj.getType() << endl;
            cout << "  -Capacity      : " << this->Dobj.getCapacity() << " GB" << endl;
            cout << "  -Price         : IDR " << this->Dobj.getPrice() << endl;
            cout << endl;
            cout << "RAM" << endl;
            cout << "  -Capacity      : " << this->Robj.getCapacity() << " GB" << endl;
            cout << "  -Price         : IDR " << this->Robj.getPrice() << endl;
            cout << endl;
            cout << "PC's Total Price : IDR " << getTotal(this->Pobj, this->Dobj, this->Robj) << endl;
            cout << "============================" << endl;
        }

        //destructor
        ~PC(){};
        
};