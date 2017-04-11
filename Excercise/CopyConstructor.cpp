//Sample of Constructor , destrutor and copy Constructor

#include <iostream>
using namespace std;

class Point{
    
    private:
        int x,y;
    public:
        /***Constructor*/
        Point(){x=1;y=2;}
        /***Multiple Constructor*/
        Point (int x1,int y1){x=x1;y=y1;}
        
        //Copy Constructor
        Point (const Point &p2){x=p2.x;y=p2.y;}
        //importa
    int getX(){return x;}
    int getY(){return y;}
    
    
    int setX(int x1){x=x1;}
    int setY(int y1){y=y1;}
};

int main() {
    
    Point p1(10,15);//Constructor called
    
    
    
    cout<<"X "<<p1.getX()<<endl;
    cout<<"Y "<<p1.getY()<<endl;
    
    p1.setX(90);
    p1.setY(100);
    
    Point p2=p1;
    cout<<"X "<<p2.getX()<<endl;
    cout<<"Y "<<p2.getY()<<endl;

}