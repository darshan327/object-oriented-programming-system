  /* The 4 Pillars of Object-Oriented Programming (OOP) are the core concepts that make OOP powerful and structured.
    1. Encapsulation (Data Hiding)
    2. Abstraction (Hiding Complexity)
    3. Inheritance (Reusability)
    4. Polymorphism (Many Forms)
    */

   /* 🔹 Encapsulation in OOP

      👉 Encapsulation means binding data (variables) and methods (functions) together in a single unit (class) 
        and restricting direct access to the data.

        Encapsulation = Data Hiding + Controlled Access

      You don’t allow direct access to variables → instead use getter and setter functions.

      Why Encapsulation?
        Protects data from unwanted access 🔒
        Improves security
        Makes code easier to maintain
        Gives controlled access (you decide how data is used)

        */

        #include<iostream>
        using namespace std;

        class Employee{
            private:
             string Name;
             string Company;
             int Age;
        public:
          void setName(string name){
            Name = name;
          }
          string getName(){
            return Name;
          }
          
            void setCompany(string company){
                Company=company;
            }
            string getCompany(){
                return Company;
            }

            void setAge(int age){
              Age=age;
            }
            int getAge(){
                return Age;
            }

        };

        int main(){
           Employee employee;
           employee.setName("darshu");
           cout<<"Name :"<<employee.getName()<<endl;
           
            employee.setCompany("zeta");
            cout<<"company :" <<employee.getCompany()<<endl;

            employee.setAge(21);
            cout<<"Age :"<<employee.getAge();
            return 0;
        }