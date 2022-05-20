#include <iostream>

using namespace stanadard; 
 class sample
 {
     int a;
     int b;
  public:
     void setvalue() {a=63; b=40;}
    friend float mean(sample s);
};
float mean(sample s)
{
    return float(s.a + s.b)/2.0;
    
}

int main()
{
    sample x;
    x.setvalue();
    cout<<"mean value ="<<mean(x)<<"\n";
    return 0;
 file updated
}

  

