//Ishaan kukade
//23070123062
#include <iostream>
using namespace std;
class date{
    int d;
    int m;
    int y;
    public:
    date() {
        
        d = 4;
        m = 9;
        y = 2024;
    }

    
void display(){
    cout << "Today's date is: "<< d << "/" << m << "/"<< y << endl;
}
};
int main() {
    date mydate;
    mydate.display();
    

    return 0;
}
/*OUTPUT
Today's date is: 4/9/2024
*/