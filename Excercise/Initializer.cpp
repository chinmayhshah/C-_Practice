// Use of Initializer Functions and constructor 

#include <iostream>
using namespace std;

//normal way to use Initializer List
class Point{
  int x;
  int y;
public:
    Point(int i,int j):x(i),y(j){}
    int getX(){return x;}
    int getY(){return y;}
    
};


/*necessary places where the Initializer list is required 
non-static const data
*/
class Test{
    const int t;
  public:
    //Test(int t):t(t){}
    /*
        Test(int t):t(t){}
    */
    int getT(){return t;}
};


int main() {
    Point p(10,80);
    std::cout << p.getX() <<endl << p.getY() << std::endl;
	//code
	return 0;
}