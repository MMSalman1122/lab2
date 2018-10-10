#include <iostream>
#include<string>
using namespace std;
class Invoice{
public:
   Invoice()
   {

    description="";
    price=0;
    number_of_items=0;

    }

    void setdescription(string name)
    {
        description=name;
    }

    void setprice(double pric)
    {   if(pric>0)
            price=price+pric;
        else
            price=0.0;


    }
    void setnumber_of_items(int num)
    {
       if(num>0)
        number_of_items=number_of_items+num;
       else
        number_of_items=0;

    }


    string getdescription()
    {
        return description;
    }

    double getprice()
    {
        return price;
    }
    int getnum_of_items()
    {
        return number_of_items;
    }
    double gettotal_amount()
    {
        return number_of_items*price;
    }



private:
    string description;
    double price;
    int number_of_items;
};

int main()
{   string name;
    double pric;
    int num;
    Invoice item;

    cout<<"Enter the name of item: \n";
    cin>>name;
    item.setdescription(name);

    cout<<"Enter the price per item: \n";
    cin>>pric;
    item.setprice(pric);


    cout<<"Enter the number of items: \n";
    cin>>num;
    item.setnumber_of_items(num);

    cout<<"Name of item:"<<item.getdescription()<<"\n";
    cout<<"Number of items:"<<item.getnum_of_items()<<"\n";
    cout<<"Price per item: "<<item.getprice()<<"\n";
    cout<<"Total Price: "<<item.gettotal_amount()<<"\n";


    return 0;
}
