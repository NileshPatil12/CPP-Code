#include<iostream>
using namespace std;
class Polygon
{
    protected:
    int width,height;
    public:
    void set_values(int a,int b)
    {
        width=a;
        height=b;
    }
    virtual int area(void)=0;
};
class Rectangle: public Polygon
{    public:
    
    int area(void){
        return (width*height);
    }
};
class triangle: public Polygon{
    public:
    int area(void){
        return(width*height/2);
    }
};
int main()
{
    Rectangle rect;
    triangle trig;
    Polygon *ppoly1 =&rect;
    Polygon *ppoly2 =&trig;
    ppoly1->set_values(4,5);
    ppoly2->set_values(4,5);
    cout<<ppoly1->area()<<endl;
    cout<<ppoly2->area();
    return 0;
}