#include <iostream>
#include <string>
using namespace std; // considered as bad practice (see https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice?rq=1)


class Box {
    public: 
        static int amountOfBoxes;

        int height;
        int length;
        int width;
        string toString();

        // constructors
        Box() : Box(5,5,5) {} // set default values and call other constructor

        Box(int height, int length, int width){
            this->height = height;
            this->length = length;
            this->width = width;
            amountOfBoxes++;
        }

        // copy constructor
        Box(const Box &obj){
            height = obj.height;
            length = obj.length;
            width = obj.width;
            amountOfBoxes++;
        }

        double getVolume(){
            return (double) height * length * width;
        }    

};

// Member functions can be defined outside the class definition,
// with the scope resolution operator ":" 
string Box::toString(){
    // shows box info
    string s;
    s.append("\n\n");
    s.append("---------- BOX ----------");
    s.append("\n");
    s.append("height: ");
    s.append(to_string(height));
    s.append("\n");
    s.append("length: ");
    s.append(to_string(length));
    s.append("\n");
    s.append("width: ");
    s.append(to_string(width));
    s.append("\n");
    s.append("volume: ");
    s.append(to_string(getVolume()));
    s.append("\n");
    s.append("-------------------------");
    s.append("\n");
    return s; 
}

void printLine(int length){
    string s = "";
    s.append(length,'_');
    cout << endl << s << endl;
}

// static member must be initialized outside of the class and main method
int Box::amountOfBoxes = 0;

int main()
{
    cout << "Hello Box-World";
    printLine(15);
    
    Box b1;
    cout << b1.toString();
    Box b2(5,4,8);
    cout << b2.toString();
    Box b3(b2);
    cout << b3.toString();

    cout << "Amount of boxes created: " << Box::amountOfBoxes << endl;

    return 0;
}
