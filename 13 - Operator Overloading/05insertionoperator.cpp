#include<bits/stdc++.h>
using namespace std;

class complexNumber
{
    int real;
    int imag;

    public:
    //constructor
        complexNumber(int userReal=0,int userimag=0)
        {
            this->real=userReal;
            this->imag=userimag;
            //setReal(userReal);
            //setComplex(userimag);
        }
    //Mutator
        void setReal(int userReal);
        void setComplex(int userimag);
    //Accessor
        int getReal(){return real;}
        int getComplex(){return imag;}
    //Facilitator
        friend ostream& operator<<(ostream& cout, complexNumber& c3);
        complexNumber operator+(complexNumber &userComplexNumber);
        complexNumber operator*(complexNumber &userComplexNumber);
        friend complexNumber operator-(complexNumber &userComplexNumber1, complexNumber &userComplexNumber2);
    //Enquiry
    //Destructor
};

int main()
{
    complexNumber c1(5,6);
    complexNumber c2(7,8);
    complexNumber c3;
    //operator on class like adding, multiplyin class
    c3=c1+c2;
    //operator<<(cout,c3);//this works too
    cout<<c3<<endl;//c3.display(); replace with cout<<c3
    c3=c1*c2;
    cout<<c3<<endl;
    c3=c1-c2;
    cout<<c3<<endl;
    return 57;
}

//Mutator
        void complexNumber::setReal(int userReal)
        {
            this->real= userReal;

        }
        void complexNumber::setComplex(int userimag)
        {
            this->imag= userimag;
        }

    //Facilitator
        ostream& operator<<(ostream& out, complexNumber& c)
        {
            out<<c.getReal()<<"+"<<c.getComplex()<<"i";

            return out;
        }
        complexNumber complexNumber::operator+(complexNumber &userComplexNumber)
        {
            complexNumber newComplexNumber;
            newComplexNumber.real= this->real+userComplexNumber.real;
            newComplexNumber.imag= this->imag+ userComplexNumber.imag;
            return newComplexNumber;
        }
        complexNumber complexNumber::operator*(complexNumber &userComplexNumber)
        {
            complexNumber newComplexNumber;
            newComplexNumber.real= (this->real*userComplexNumber.real)-(this->imag*userComplexNumber.imag);
            newComplexNumber.imag= (this->real*userComplexNumber.imag)+(this->imag*userComplexNumber.real);
            return newComplexNumber;
        }

        complexNumber operator-(complexNumber &userComplexNumber1, complexNumber &userComplexNumber2)
        {
            complexNumber newComplexNumber;
            newComplexNumber.real= userComplexNumber1.real-userComplexNumber2.real;//not need of this-> in friend function
            newComplexNumber.imag= userComplexNumber1.imag- userComplexNumber2.imag;
            return newComplexNumber;
        }