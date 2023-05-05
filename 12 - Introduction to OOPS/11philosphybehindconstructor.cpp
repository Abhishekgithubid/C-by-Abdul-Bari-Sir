#include"bits/stdc++.h"
using namespace std;

class laptop
{
    private:
        string brand;
        int model; 
       

    public: 
        
        laptop(string brand="unknown", int model=0000)
        {
            set_brand(brand);
            set_model(model);

        }
        void set_brand(string userinput)
        {
            this->brand= userinput;
            cout<<"Brand detail updated"<<endl;
        }

        void set_model(int userinput)
        {
            this->model= userinput;
            cout<<"Model detail updated"<<endl;
        }

        string get_brand()
        {
            return brand;
        }

        int get_model()
        {
            return model;
        }
        
};

//char main() gives error
int main()
{
    laptop l1("dell",2002);
    laptop l2;

    //laptop l1;
   // l1.set_brand("hp");
   // l1.set_model(2022);

    cout<<"brand: "<<l1.get_brand()<<endl;
    cout<<"model: "<<l1.get_model()<<endl;

    cout<<"brand: "<<l2.get_brand()<<endl;
    cout<<"model: "<<l2.get_model()<<endl;

    return -7;
}