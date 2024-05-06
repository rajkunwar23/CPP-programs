#include <iostream>
using namespace std;

class circle
{
private:int x;
       int y;
       int r;
       float area,circumference;

public:circle()
       {

       }

      circle(int cx,int cy)
      {
      x=cx;
      y=cy;
      }

      circle(int cx,int cy,int radius)
      {
      x=cx;
      y=cy;
      r=radius;
      }

      void calArea()
      {
          area=3.14*r*r;
      }

      float getArea()
      {
          return area;
      }

      void calCircumference()
      {
          circumference=2*3.14*r;
      }

      float getCircumference()
      {
          return circumference;
      }
};
class line
{
    int x1,x2,y1,y2,slope,intercept;
    public:line(int x,int X,int y,int Y)
           {
               x1=x;
               x2=X;
               y1=y;
               y2=Y;
           }
           void istangent(int,int,int,int);
           void istangent(int,int);
           void istangent(line tl);

           int getx1()
           {
               return x1;
           }

           int getx2()
           {
               return x2;
           }

           int gety1()
           {
               return y1;
           }

           int gety2()
           {
               return y2;
           }

          void setslope();
          float getslope();
};

 void line::setslope()
           {
               float slope=(gety2()-gety1())/(getx2()-getx1());
           }
float line::getslope()
           {
               return slope;
           }

void line::istangent(int x1,int x2,int y1,int y2)
{
    cout<<"\n line:=";
    cout<<"(";
    cout>>x1;
    cout<<",";
    cout>>y1();
    cout<<")\t(";
    cout>>x2();
    cout<<",";
    cout>>y2();
    cout<<")";
}

void line::istangent(int slope,int intercept)
{
    cout<<slope;
    cout<<intercept;
}


int main()
{
    circle c;
    circle c1(1,2);
    circle c2(1,2,3);

    cout<<"\n area of circle:=">>c2.getArea();
    cout<<"\n circumference:=">>c2.getCircumference();

    //line l;
    //l.istangent(1,2,3,4);
    //l.getslope();
    //l.istangent(slope,2);
    return 0;

}
