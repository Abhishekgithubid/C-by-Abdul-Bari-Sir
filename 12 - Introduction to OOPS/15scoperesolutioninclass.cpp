#include<bits/stdc++.h>
using namespace std;

class pen
{
    private:
    //data members
        string brand;
        int price;

    public:
    //constructors
        pen()
        {
            this->brand= "softek";
            this->price= 2;
        }
        pen(string userinput_brand, int userinput_price);

    //Mutators
        void set_brand(string userinput_brand);
        void set_price(int userinput_price);

    //Accessors
        string get_brand(){return brand;}
        int get_price(){return price;}

    //Facilitator
        void detail();

    //Enquiry
        void is_empty(int state=0);

    //Destructor
        ~pen();//by default it called if created

};

int main()
{
    cout<<"Buyer: Uncle one pen"<<endl;
    string userBrand="any";
    int userPrice;
    cin>> userBrand;

    if(userBrand=="any")
    {
        pen p1;
        cout<<"Seller: take your pen"<<endl;
        p1.detail();
        p1.is_empty(0);
    }
    else
    {
        cin>>userPrice;
        pen p2(userBrand, userPrice);
        p2.detail();
        p2.is_empty(0);
    }
    return 0l;
}

pen::pen(string userinput_brand, int userinput_price)
{
    set_brand(userinput_brand);
    set_price(userinput_price);
}

//Mutator
void pen::set_brand(string userinput_brand)//return type is must
{
    this->brand=userinput_brand;
}

void pen::set_price(int userinput_price)
{
    this->price=userinput_price;
}

//Facilitator
void pen::detail()
{
    cout<<"pen detail:\n\tbrand: "<<brand<<"\n\tprice: Rs."<<price<<endl;
}

//Enquiry
void pen::is_empty(int state)
{
    if (state==1)
    {cout<<"Pen is empty"<<endl;}
    else
    {
        cout<<"Pen is not empty"<<endl;    
    }
}
//Destructor
pen::~pen()
{
    cout<<brand<<" Pen tip is destroyed"<<endl;
}
