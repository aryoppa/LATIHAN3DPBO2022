#include <iostream>
#include <string>

using namespace std;

class Processor
{
    private:
        string name;
        int price;

    public:
        
        //constructors
        Processor(){}
        Processor(string x, int y)
        {
            setName(x);
            setPrice(y);
        }
        
        //Name's methods
        void setName(string x)
        {
            this->name = x;
        }
        string getName()
        {
            return this->name;
        }

        //Price's methods
        void setPrice(int y)
        {
            this->price = y;
        }
        int getPrice()
        {
            return this->price;
        }
        
        //destructor
        ~Processor(){}
};