#include <iostream>
using namespace std;
class student {
    public:
    string name;
    
    void intoduce() {
        cout << "HI, I am " << name << endl;
    }
}

int main(){
    student s1;
    s1.name = "Athishaya Rajesh";
    s1.introduce();
    return 0;
    
}