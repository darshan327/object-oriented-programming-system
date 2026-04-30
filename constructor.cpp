   #include<iostream>
   using namespace std;

    class Employee{
      public:
        string name;
        string company;
        int age;

        void display(){
            cout<<"name :" << name <<endl << "company :" << company << endl << "age :" << age<<endl;
        }

       Employee(string Name , string Company , int Age){
          name=Name;
          company=Company;
          age=Age;
       }

    };

   int main(){
    Employee employee1 = Employee("darshu","zeta",21);
    employee1.display();
    Employee employee2 = Employee("davan","lam-research",20);
      employee2.display();
    return 0;
   }


 /*
   Constructor:
     * same name as class
     * no return type
     * automatically calls 
     
     => default constructor
     => parameter constructor

 */















