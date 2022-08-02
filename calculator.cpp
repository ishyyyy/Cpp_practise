#include <iostream>
#include <math.h>
using namespace std;
class simple_calculator
{
protected:
    int a;
    int b;
    int c;
    int d;
    int result;

public:
    void getcalculator()
    {
        cout << "----------CALCULATOR------------" << endl;
        cout << "enter  the value of c" << endl;
        cin >> c;
        cout << "press 1 for addition" << endl;
        cout << "press 2 for subtraction" << endl;
        cout << "press 3 for multiplication" << endl;
        cout << "press 4 for divide" << endl;
        
        switch (c)
        {
        case 1:
            result = a + b;
            break;
        case 2:
            result = a - b;
        case 3:
            result = a * b;
        case 4:
            result = a / b;
        }
        cout<<result<<endl;
    }
};

class scientific_calculator
{
protected:
    int a;
    int b;
    int result;

public:
    void calculatecientificvalue(){
    cout<<"-------SCIENTIFIC CALCULATOR----------"<<endl;
    cout<<"enter the value you want to find the value of"<<endl;
    cin>>a;
    cout<<"input 1 for the value of sin "<<endl;
    cout<<"input 2 for the value of cos "<<endl;
    cout<<"input 3 for the square root "<<endl;
    cout<<"input 4 for the power "<<endl;
    int power;
    cin>>power;
    switch (a)
    {
        case 1:
        result= sin(a);
        break;
        case 2:
        result=cos(a);
        break;
        case 3:
        result=sqrt(a);
        break;
        case 4:
        result=pow(a,power);
        break;
    }

        
    }
};

int main(){
    simple_calculator sc;
    scientific_calculator scc;
    sc.getcalculator();
    scc.calculatecientificvalue();
    return 0;
}
    



