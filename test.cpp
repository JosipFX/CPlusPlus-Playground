#include <iostream>
#include <string>
using namespace std; // considered as bad practice (see https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice?rq=1)


class Box {
    public: 
        int height;
        int length;
        int width;
        string toString();

        // constructor
        Box() : Box(5,5,5) {} // set default values

        Box(int height, int length, int width){
            this->height = height;
            this->length = length;
            this->width = width;
        }

        double getVolume(){
            return (double) height * length * width;
        }    

};

// Member functions can be defined outside the class definition,
// with the scope resolution operator ":" 
string Box::toString(){
    string s = "This Box has a Volume of: ";
    s.append(to_string(getVolume()));
    return s; 
}

void printLine(){
    cout << endl << "______________________________" << endl;
}

int main()
{
    cout << "Hello Box-World";
    printLine();
    
    Box b1;
    cout << endl << "B1 height: " << b1.height;
    cout << endl << "B1 width: " << b1.width;
    cout << endl << "B1 length: " << b1.length;
    cout << endl << "B1 volume: " << b1.getVolume();
    
    printLine();
    
    Box b2(5,4,8);
    cout << endl << "B2 height: " << b2.height;
    cout << endl << "B2 width: " << b2.width;
    cout << endl << "B2 length: " << b2.length;
    cout << endl << "B2 volume: " << b2.getVolume();
    
    printLine();
    
    cout << endl << b1.toString() << endl;

    return 0;
}
