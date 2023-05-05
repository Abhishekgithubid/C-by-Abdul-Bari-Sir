#include<bits/stdc++.h>
using namespace std;

class test
{
    private:
        char value;
    public:
        void access_value(char value)
        {
            this->value=value;//this-> is used to avoid variable name conflict
        }
        char display_value()
        {
            return value;
        }

};

int main()
{
    test t1,t2;
    char value='a';
    t1.access_value('a');
    t2.access_value('b');
    cout<<"t1 value: "<<t1.display_value()<<endl;
    cout<<"t2 value: "<<t2.display_value()<<endl;
    cout<<"value: "<<value;

    return 9;
}