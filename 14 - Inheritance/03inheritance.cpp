#include<iostream>
using namespace std;

class circle
{
    private:
        int radius;
    public:
        //constructor
            circle(float userRadius=1)
            {
                radius= userRadius;
            }
        //Mutator
            void setRadius(float userRadius);
        //Accessor
            float getRadius(){return radius;}
        //Faciliator
            float circleArea();
            float circlePerimeter();
        //Enquiry
        //destructor

};
//Mutator
    void circle::setRadius(float userRadius)
    {
        radius= userRadius;
    }
//Faciliator
    float circle::circleArea()
    {
        float volume;
        volume= 3.14*radius*radius;
        return volume;
    }
    float circle::circlePerimeter()
    {
        float perimeter;
        perimeter= 2*3.14*radius;

        return perimeter;
    }

class cylinder:public circle
{
    private:
        float height;
    public:
        //constructor
        cylinder(float userRadius=1, float userHeight=1):circle(userRadius)
        {
            //setRadius(userRadius);
            height= userHeight;
        }
        //Mutator
            void setHeight(float userHeight);
        //Accessor
            float getHeight(){return height;}
        //Faciliator
            float cylinderVolume();
            float cylinderToatalsurfaceArea() ;
        //Enquiry
        //destructor

};
//Mutator
    void cylinder::setHeight(float userHeight)
    {
        height= userHeight;
    }
//Faciliator
    float cylinder::cylinderVolume()
    {
         float volume;
         volume=circleArea()* getHeight();

         return volume;
    }
    float cylinder::cylinderToatalsurfaceArea()  
    {
        float totalSurfaceArea;
        totalSurfaceArea= circlePerimeter()*(getHeight()+getRadius());

        return totalSurfaceArea;
    }

int main()
{
    circle c1;
    cout<<"c1.getRadius()"<<c1.getRadius()<<endl;
    cout<<"c1.circleArea()"<<c1.circleArea()<<endl;
    cout<<"c1.circlePerimeter()"<<c1.circlePerimeter()<<endl;
    cylinder cy1(3,5);
    cout<<"cy1.getRadius()"<<cy1.getRadius()<<endl;
    cout<<"cy1.getHeight()"<<cy1.getHeight()<<endl;
    cout<<"cy1.cylinderVolume()"<<cy1.cylinderVolume()<<endl;
    cout<<"cy1.cylinderToatalsurfaceArea()"<<cy1.cylinderToatalsurfaceArea()<<endl;
    cout<<"cy1.circleArea()"<<cy1.circleArea()<<endl;
    cout<<"cy1.circlePerimeter()"<<cy1.circlePerimeter()<<endl;


    return 94943;
}