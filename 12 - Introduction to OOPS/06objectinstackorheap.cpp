#include<bits/stdc++.h>
using namespace std;

class secret
{

    public:
    char code;
        void input()
        {
            // this->code= userinput;
            if(code)
            {
                cout<<"userinput stored in code is: "<<code<<endl;
            }
        }
};


int main()
{
    secret code1;// creates object in stack
    secret* code2_ptr=new secret();//creates object in heap & () is not neccessary
    
    cout<<"IN STACK"<<endl;
    code1.code='a';
    code1.input();//dot operator is used because in stack

    cout<<"IN HEAP"<<endl;
    code2_ptr->code='b';
    code2_ptr->input();//-> is used because in heap
    free(code2_ptr);
    //delete [ ] code2_ptr;
    if(code2_ptr)
    {
        cout<<"memory is cleared"<<endl;
    }



    return 0;
}
