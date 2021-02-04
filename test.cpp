#include <iostream>
using namespace std;

class Box {
    public: 
        int height;
        int length;
        int width;
    
        double getVolume(){
            return (double) height * length * width;
        }
    
};

int main()
{
    cout<<"Hello World";
    
    double volume;
    Box b1;
    b1.height = 2;
    b1.width = 3;
    b1.length = 8;
    
    volume = b1.height*b1.width*b1.length;
    cout << endl << "THE VOLUME IS: " << volume << endl;
    cout << "Volume with Method: " << b1.getVolume();
    
    return 0;
}
