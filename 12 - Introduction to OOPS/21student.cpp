#include<iostream>
using namespace std;

class student
{
    private:
        int rollNo;
        string name;
        int marks[3];

    public:
        //constructor
            student()
            {
                this->rollNo= 1;
                this->name= "xxxx";
                this->marks[3]={1};
            }

            student(int userRollNO, string userName, int userMarks[3]);
        //Mutator
            void setRollNo(int userRollNO);
            void setName(string userName);
            void setMarks(int userMarks[3]);
        //Accessor
            int getRollNo();
            string getName();
            int* getMarks(); 
        //Facilitator
            int totalMarks();
            char grade();
            void detail();
        //Enquiry
        //Destructor

};

int main()
{

    student* studentList= new student;

    cout<<"Enter student detail: "<<endl;
            cout<<"\tRoll no.: ";
            int userRollNO;
            cin>>userRollNO;
            studentList->setRollNo(userRollNO);
            cout<<endl<<"\tName: ";
            string userName;
            cin>>userName;
            studentList->setName(userName);

            cout<<"\n\tMaths, Physics, Chemistry: ";
            int userMarks[3];
            for(int marks=1; marks<=3; marks++)
            {
                cin>>userMarks[marks];
                
            }
            studentList->setMarks(userMarks);

            studentList->detail();

    return 0;
}

//constructor

    student::student(int userRollNO, string userName, int userMarks[3])
    {
        setRollNo(userRollNO);
        setName(userName);
        setMarks(userMarks);
    }
//Mutator
    void student::setRollNo(int userRollNO)
    {
        this->rollNo=userRollNO;
    }
    void student::setName(string userName)
    {
        this->name= userName;
    }
    void student::setMarks(int userMarks[3])
    {
        this->marks[3]=userMarks[3];
    }
//Accessor
    inline int student::getRollNo(){return rollNo;}
    inline string student::getName(){return name;}
    inline int* student::getMarks(){return marks;}
//Facilitator
    int student::totalMarks()
    {
        int total=0;
        for(int i=0; i<3; i++)
        {
            total+=marks[i];
        }

        return total;
    }
    char student::grade()
    {
        if(totalMarks()<=100 && totalMarks()>=75)
        {
            return 'A';
        }
        else if(totalMarks()<=74 && totalMarks()>=50)
            {return 'B';}
            else if (totalMarks()<=49 && totalMarks()>=31)
                {return 'C';}
                else return 'F';
    }
    void student::detail()
    {
        cout<<"Student details:"<<endl;
        cout<<"\n\tRoll no.: "<<getRollNo();
        cout<<"\n\tname: "<<getName();
        cout<<"\n\tmarks: "<< marks[0]<<" "<<marks[1]<<" "<<marks[2]<<endl;
    }