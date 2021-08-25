#include "Rectangle.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
  // ========= DO NOT CHANGE THE INPUT CODE BELOW ==================
   int length, width, radius;
   cout << "Enter length of Rectangle : ";
   cin >> length;
   cout << "Enter width of Rectangle : ";
   cin >> width;
   cout << "Enter radius of Circle : ";
   cin >> radius;
   // ======== DO NOT CHANGE THE CODE GIVEN ABOVE ====================
   
   // 1. Create a dynamic Rectangle type variable (pointer)
   Rectangle *r1=new Rectangle();
   // 2. Create a dynamic Rectangle Object set the length and width that was input from the keyboard
   Rectangle *r2=new Rectangle(length,width);
   // 3. Create a dynamic Circle type variable (pointer)
   Circle* c1=new Circle();
   // 4. Create a dynamic Circle Object set radius that was input from the keyboard
   Circle* c2=new Circle(radius);
   // 5. Call the display method of the Rectangle Object
   r2->display();
   // 6. Call the display method of the Circle Object
   c2->display();
   // 7. Delete the Rectangle Object from memory
   delete r2;
   // 8. Delete the Circle Object from memory
   delete c2;
  
  
   // ============ DO NOT CHANGE THE CODE BELOW ===================
   cout << "End of Program" << endl;
  
}
