#include<iostream> // Header file
#include<string> // string headerfile
using namespace std; // pre fix std
class Shape // Shape class
{
    protected : // protected
    string name;
    public :
        Shape() // default constructor
        {
            cout << "Default Shape constructor called" <<endl; 
            name = "";  
        }
        Shape(string pName) // Overload constructor
        {
            name = pName;
        }
        int calcArea()
        {
            return 0;
        }
};
class Rectangle : public Shape // Rectangle class drived of shape class
{
    protected :
        int length;
        int width;
        public :
        Rectangle() // Default constructor
        {
            length = 0;
            width = 0;
            cout << "Default Rectangle constructor called" << endl;
        }
        Rectangle( string pName, int l, int w) :Shape(pName) // Overload constructor
        {
            length = l;
            width = w;
        }
        int calcArea() // calculation
        {
            cout <<name <<":";
            return length * width;
        }
};
class Square : public Rectangle // Square class drived class of Rectangle
{
    public :
    Square()
    {
        cout << "Default Square Constructor called" <<endl; // Default constructor of Square class
    }
    Square(string pName, int length) : Rectangle(pName, length, length) // Overload constructor
    {
      //  cout << "Square called"<<endl;
    }
     int calcArea() // calculation
     {
         return length * length;
     }
};
class Radius : public Shape // Radius class drived Shape class
{
    protected :
    int radius;
    public :
    Radius(){
        cout << "Default Radius constructor called" <<endl; // Default constructor of radius
    }
    Radius(string  pName, int r) : Shape(pName) // overload constructor
    {
         radius = r;  
    }
   int calcArea() // calculation
   {
       return 22/7 * radius;
   }
};
int main() // Main function
{
    Rectangle rec("Rec1", 8, 5);
    cout << rec.calcArea() <<endl; // display rectangle 
    Square sq("svd",5);
    cout << sq.calcArea() <<endl; // Display Square
    Radius rad("Circle", 7);
    cout << rad.calcArea(); // Display Radius
    return 0; // End  function
}