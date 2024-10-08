#include<iostream>
using namespace std;

class Rectangle
{
	public:
		double length;
		double width;
		public:
			double getArea()
			{
				return length * width;
			}
			double getPerimeter()
			{
			   return 	2*(length + width);
			}
			void Display()
			{
				cout<<"the area of the rectangle  is: "<<getArea()<<endl;
				cout<<"the perimeter of the rectangle   is: "<<getPerimeter()<<endl;
			}
};

  int main()
  {
   
    Rectangle rect1, rect2;
    
    rect1.length = 3;
    rect1.width = 6;
    
    rect2.length = 2;
    rect2.width = 4;
    
    cout<<" Rectangle 1: "<<endl;
    rect1.Display();
    
     
    cout<<endl; 

    cout<<" Rectangle 2: "<<endl;
    rect2.Display();
    
    
  	
  	
  }

