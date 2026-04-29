    /*
       🔹 Polymorphism in OOP
          
          👉 Polymorphism means “many forms”
          A single function or method can behave differently in different situations.
     
            in c++ polymorphism is achieved through:
            1. Function Overloading (Compile-time Polymorphism)
            2. Operator Overloading (Compile-time Polymorphism)
            3. Virtual Functions (Run-time Polymorphism)

    */    

    /*
       🔹 Compile-Time Polymorphism (Static Polymorphism)

          👉 Compile-time polymorphism means the function call is decided at compile time (before the program runs).

          🔹 Simple Definition

          👉 Same function name → different behavior (decided early)
   
    */ 

    // 🔹 1️⃣ Function Overloading
     //👉 Same function name, but different parameters

       #include<iostream>
       using namespace std;

       class math{
         public:
            int add(int a , int b){
                return a+b;
            }
            int add(int a, int b , int c){
                return a+b+c;
            }
       };

       int main(){
         math m;
       cout<< m.add(2,4)<<endl; // calls add(int a, int b)
         cout<< m.add(2,4,6)<<endl; // calls add(int a, int b, int c)
        return 0;
       }
       

       // 👉 Compiler decides which function to call based on arguments


        // operating overloading 
          // 👉 Same operator behaves differently for different data

         #include<iostream>
          using namespace std;

            class complex{
              public:
              int real;
              int imag;
              complex (int r, int i){
                real=r;
                imag=i;
              }
              void display(){
                cout<< real <<" + "<< imag<<"i"<<endl;
              }
                // operator overloading
                complex operator + (complex c){
                    return complex(real + c.real, imag + c.imag);
                }
            };

            int main(){
                complex c1(2,3),c2(4,5);
                c1.display();
                c2.display();
                complex c3 = c1 + c2; 
                c3.display();
                return 0;
            }

              

      
     /*  Run-Time Polymorphism (Dynamic Polymorphism)

       👉 A virtual function is a member function in a base class that is overridden in a derived class,
        and the function call is decided at runtime (not compile time).

          👉 Virtual function = function call depends on object type (at runtime)

          🔹 Why We Use Virtual Functions
              To achieve runtime polymorphism
              To ensure the correct function is called for the object
              Useful when using base class pointers
        */

        #include<iostream>
        using namespace std;

        class Animal{
            public:
          virtual void sound(){
                cout<<"Animal makes a sound"<<endl;
             }
        };

        class Dog : public Animal{
            public:
              void sound(){
                cout<<"Dog barks"<<endl;
              }
        };

        int main(){
          /* Dog d;
            d.sound();   // with or without virtual function, output would be: Dog barks (calls Dog's sound)
            */ 
            
             Animal* a;
               Dog d;     
               a=&d;          // without virtual function, output would be: Animal makes a sound (calls Animal's sound)
               a->sound();     // with virtual function, output would be: Dog barks (calls Dog's sound)
             
                    

            return 0;
        }