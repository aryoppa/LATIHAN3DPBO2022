#include <iostream>
#include <string>

using namespace std;

class RAM
{
    private:
        int capacity;
        int price;

    public:
        
        //constructors
        RAM(){}
        RAM(int x, int y)
        {
            setCapacity(x);
            setPrice(y);
        }

        //Capacity's methods
        void setCapacity(int x)
        {
            this->capacity = x;
        }
        int getCapacity()
        {
            return this->capacity;
        }

        //Price;s methods
        void setPrice(int y)
        {
            this->price = y;
        }
        int getPrice()
        {
            return this->price;
        }

        //destructor
        ~RAM(){}
};