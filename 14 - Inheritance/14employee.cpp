#include<iostream>
using namespace std;

class employee
{
    private:
        string name;
        char status;
    public:
        //constructor
        employee()
        {
            name= "XXXX";
            status= 'X';
        }
        employee(string userName, char userStatus);
        //employee(employee& e);
        //Mutator
            void setName(string userName);
            void setStatus(char userStatus);
        //Accessor
            string getName(){return name;}
            char getStatus(){return status;}
        //Facilitator
            void employeeDetail()
            {
                cout<<"Employee Details:"<<endl;
                cout<<"Name: "<<getName()<<endl;
                cout<<"Status: "<<getStatus()<<endl;
            }
        //Enquiry
        //Destructor
};
//construtor
    employee::employee(string userName, char userStatus)
    {
        name= userName;
        status= userStatus;
    }
//Mutator
    void employee::setName(string userName)
    {
        this->name= userName;
    }
    void employee::setStatus(char userStatus)
    {
        this->status= userStatus;
    }
class fullTimeEmployee:public employee
{
    private:
        int salary;
    public:
    //constructor
        fullTimeEmployee()
        {
            setName("XXXX");
            setStatus('X');
            this->salary= 000;
        }
        fullTimeEmployee(string userName,char userStatus, int userSalary):employee(userName, userStatus)
        {
            this->salary= userSalary;
        }
    //Mutator
        void setSalary(int userSalary);
    //Accessor
        int getSalary(){return salary;}
    //Facilitator
        void fullDetail();
    //Enquiry
    //Destructor
};

//Mutator
        void fullTimeEmployee::setSalary(int userSalary)
        {
            this->salary= userSalary;
        }
//Facilitator
        void fullTimeEmployee::fullDetail()
        {
            employeeDetail();
            cout<<"Salary: "<<getSalary()<<endl;
        }
class partTimeEmployee: public employee
{
    private:
        int wages;
    public:
        //constructor
        partTimeEmployee()
        {
            setName("XXXX");
            setStatus('X');
            this->wages= 000;
        }
        partTimeEmployee(string userName,char userStatus, int userWages):employee(userName, userStatus)
        {
            this->wages= userWages;
        }
    //Mutator
        void setWages(int userWages);
    //Accessor
        int getWages(){return wages;}
    //Facilitator
        void partDetail();
    //Enquiry
    //Destructor
};

//Mutator
        void partTimeEmployee::setWages(int userWages)
        {
            this->wages= userWages;
        }
//Facilitator
        void partTimeEmployee::partDetail()
        {
            employeeDetail();
            cout<<"Salary: "<<getWages()<<endl;
        }

int main()
{
    fullTimeEmployee fe1;
    partTimeEmployee pe1;

    cout<<"WITHOUT ENTERING DETAILS: "<<endl;
        fe1.fullDetail();
        pe1.partDetail();
    
    fullTimeEmployee fe2("Abhi",'F',5000);
    partTimeEmployee pe2("tiwa",'P',2000);
     cout<<"AFTER ENTRING DETAILS: "<<endl;
        fe2.fullDetail();
        pe2.partDetail();

    return 3348;
}