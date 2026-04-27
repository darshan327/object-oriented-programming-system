   #include<iostream>
   using namespace std;

    class Employee{
      public:
        string name;
        string company;
        int age;

        void display(){
            cout<<"name :" << name <<endl << "company :" << company << endl << "age :" << age;
        }
    };

   int main(){
    Employee employee1;
      employee1.name="darshu";
      employee1.company="zeta";
      employee1.age=21;
      employee1.display();
    Employee employee2;
      employee2.name="davan";
      employee2.company="lam research";
      employee2.age=20;
      employee2.display();
    return 0;
   }





   /*
    class
       👉 A class is a blueprint (template) for creating objects.
         📘 Class = Design / Plan

    object    
         🚗 Object = Actual thing created from that plan
      
    Access modifier 
         👉 Access modifiers control who can access the data and functions of a class.
 
         In C++, there are 3 main types:

          public : 👉 Members are accessible from anywhere (inside and outside the class)

          private : 👉 Members are accessible only inside the class
          
          protected : ✅ Accessible in derived (child) classes









   */