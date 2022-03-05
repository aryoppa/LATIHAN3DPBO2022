#include <iostream>
#include <string>
//we only need to include PC class
//cuz in PC class, we already include
//the other classes
#include "PC.cpp"

using namespace std;

int main()
{
    string pc_brand;

    string p_name;
    int p_price;

    string d_type;
    int d_capacity;
    int d_price;

    int r_capacity;
    int r_price;

    Processor Pobj;
    Disk Dobj;
    RAM Robj;

    cout << "==========================" << endl;
    cout << "Please type the PC's spec!" << endl;
    cout << "==========================" << endl;

    cout << "PC's Brand     : ";
    cin >> pc_brand;

    cout << "Processor name : ";
    cin >> p_name;
    Pobj.setName(p_name);

    cout << "Processor price: ";
    cin >> p_price;
    Pobj.setPrice(p_price);

    cout << "Disk type      : ";
    cin >> d_type;
    Dobj.setType(d_type);

    cout << "Disk capacity  : ";
    cin >> d_capacity;
    Dobj.setCapacity(d_capacity);

    cout << "Disk price     : ";
    cin >> d_price;
    Dobj.setPrice(d_price);

    cout << "RAM capacity   : ";
    cin >> r_capacity;
    Robj.setCapacity(r_capacity);

    cout << "RAM price      : ";
    cin >> r_price;
    Robj.setPrice(r_price);

    PC pc(Pobj, Dobj, Robj, pc_brand);
    pc.print();

    return 0;
}