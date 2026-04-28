/*
  🔹 Abstraction :
      👉 Abstraction means hiding internal implementation details and showing only the essential features to the user.

      Abstraction = Hide “how it works” → Show “what it does”
       
      🔹 Real-Life Example 🚗
         
         When you drive a car:
         
         You just use steering, brake, accelerator
         You don’t know how the engine works internally

         🔹 Why Abstraction?
             Reduces complexity 🧠
             Improves code readability
             Enhances security
             Focus on important features only
      
*/


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

         // Example-1 
         #include<iostream>
             using namespace std;

         class AbstractEmployee{
              virtual void AskForPromotion()=0;  // no implementation in this class,Must be implemented in derived class
         };

         class Employee : AbstractEmployee{
         public:
            string name;
            string company;
            int age;
          void display(){
              cout<<"name :" << name <<endl << "company :" << company << endl ;
          }
        
         Employee(string Name , string Company , int Age){
            name=Name;
            company=Company;
            age=Age;
         }
              void AskForPromotion(){
              if(age>20){
                cout<<name<<":got promoted"<<endl;
              }else{
                  cout<<name<<":sorry,better luck for next time";
              }
         }
         };


          int main(){
           Employee employee1 = Employee("darshu","zeta",21);
           employee1.AskForPromotion();
           Employee employee2 = Employee("davan","lam-research",20);
             employee2.AskForPromotion();
           return 0;
          }
           
      // Example-2 

         #include<iostream>
         using namespace std;
         
         class shape{
          public:
          virtual void draw() =0;
         };

         class circle : public shape{
           public:
            void draw(){
              cout<<"drawing circle" << endl;
            }
         };

         int main(){
           /*circle c;
           c.draw(); */  // compile time

           shape* s;
           circle c;
           s=&c;
           s->draw();  // run time


          return 0;
         }



 
 
 

 
 