#include <iostream>
#include <string>

using namespace std;

class Disk
{
    private:
        string type;
        int capacity;
        int price;

    public:
        
        //constructors
        Disk(){}
        Disk(string x, int y, int z)
        {
            setType(x);
            setCapacity(y);
            setPrice(z);
        }
        
        //Type's methods
        void setType(string x)
        {
            this->type = x;
        }
        string getType()
        {
            return this->type;
        }

        //Capacity's methods
        void setCapacity(int y)
        {
            this->capacity = y;
        }
        int getCapacity()
        {
            return this->capacity;
        }

        //Price's methods
        void setPrice(int z)
        {
            this->price = z;
        }
        int getPrice()
        {
            return this->price;
        }

        //destructor
        ~Disk(){}
};