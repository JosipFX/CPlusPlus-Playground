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
    // shows box info
    string s = "---------- BOX ----------";
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

int main()
{
    cout << "Hello Box-World";
    printLine(15);
    
    Box b1;
    cout << endl << "B1 height: " << b1.height;
    cout << endl << "B1 width: " << b1.width;
    cout << endl << "B1 length: " << b1.length;
    cout << endl << "B1 volume: " << b1.getVolume();
    
    printLine(15);
    
    Box b2(5,4,8);
    cout << endl << "B2 height: " << b2.height;
    cout << endl << "B2 width: " << b2.width;
    cout << endl << "B2 length: " << b2.length;
    cout << endl << "B2 volume: " << b2.getVolume();
    
    printLine(15);
    
    cout << endl << b1.toString() << endl;

    return 0;
}
