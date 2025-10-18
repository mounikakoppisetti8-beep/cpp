#include<bits/stdc++.h>
using namespace std;
class Marks{
    int intmarks;
    int extmarks;
public:
    Marks(){
        intmarks = 0;
        extmarks = 0;
    }
    Marks(int im, int em){
        intmarks = im;
        extmarks = em;
    }
    Marks operator-(Marks m);
    void Display(){
        cout << intmarks << endl << extmarks << endl;
    }
};
  Marks Marks ::operator-(Marks m){
        Marks temp;
        temp.intmarks = intmarks - m.intmarks;
        temp.extmarks = extmarks - m.extmarks;
        return temp;}
int main(){
    Marks m1(20,30), m2(30,40);
    Marks m3 = m1 - m2;
    m3.Display();
}

