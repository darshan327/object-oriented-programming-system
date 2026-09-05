#include<iostream>
using namespace std;

class test{
    int a;
    public:
    test(int x){
        a=x;
        cout<<"object created"<<a<<endl;
    }
    ~test(){
        cout<<"object destroyed"<<a<<endl;
    }
};

 int main(){
    test t1(10);
    test t2(20);
    test t3(30);
    return 0;
 }
