#include<bits/stdc++.h>
using namespace std;

class rationalNumber
{
    private:
        int p;
        int q;
    public:
        //constructor
            rationalNumber(int userP=0, int userQ=0)
            {
                setP(userP);
                setQ(userQ);
            }
        //Mutator
            void setP(int userP);
            void setQ(int userQ);
        //Accessor
            int getP(){return p;}
            int getQ(){return q;}
        //Facilitator
            friend rationalNumber operator+(rationalNumber& r1, rationalNumber& r2);
            friend ostream& operator<<(ostream& out, rationalNumber& r);
            friend istream& operator>>(istream& in, rationalNumber& r);
        //Enquiry
        //Destructor
};

//Mutator
    void rationalNumber::setP(int userP)
    {
        this->p=userP;
    }
    void rationalNumber::setQ(int userQ)
    {
        this->q=userQ;
    }
//Facilitator
    rationalNumber operator+(rationalNumber& r1, rationalNumber& r2)
    {
        rationalNumber r3;
        r3.p=(r1.p*r2.q)+(r1.q*r2.p);
        r3.q=(r1.q*r2.q);
        return r3;
    }
    ostream& operator<<(ostream& out, rationalNumber& r)
    {
        out<<r.getP()<<"/"<<r.getQ();
        return out;
    }
    istream& operator>>(istream& in, rationalNumber& r)
    {
        int p;
        int q;
        cout<<"enter p and q: ";
        in>>p>>q;
        r.setP(p);
        r.setQ(q);
        return in;
    }


int main()
{
    rationalNumber r1,r2,r3;
    cin>>r1>>r2;
    cout<<r1<<endl<<r2<<endl;
    r3=r1+r2;
    cout<<"r3=r1+r2: "<<r3<<endl;
    return 849384;
}