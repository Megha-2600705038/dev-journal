#include <iostream>
using namespace std;

class Box{
    private:
    int width;

    public:
    friend void printWidth(Box box);
    void setWid(int wid);
};

void Box::setWid(int wid){
    width = wid;
}
void printWidth(Box box){
    cout<<"Width = "<<box.width;
}

int main(){
    Box Mybox;
    Mybox.setWid(10);
    printWidth(Mybox);
    return 0;
}
