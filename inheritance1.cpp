  /*
     Inheritance :
       👉 Inheritance means one class (child / derived class) can reuse properties and functions of another class (parent / base class).

         🔹 Types of Inheritance
            1. Single Inheritance
            2. Multiple Inheritance
            3. Multilevel Inheritance
            4. Hierarchical Inheritance
            
  */

   // 1. Single Inheritance
   // 👉 Single inheritance means a child class inherits from only one parent class.
      #include<iostream>
      using namespace std;

        class Animal{
          public:
          void eat(){
             cout<<"Eating..." << endl;
          }
        };

        class Dog : public Animal{
           public: 
            void bark(){
              cout<<"Barking..."<<endl;
            }
        };

        int main(){
          Dog d;
          d.eat(); // inherited from animal
          d.bark(); // own function
          return 0;
        }
   


     // 2. Multiple Inheritance
      // 👉 Multiple inheritance means a single child class inherits from more than one parent class.
      #include<iostream>
      using namespace std;

      class father{
       public:
        void skills(){
          cout<< "father is driving..."<<endl;
        }
      };

       class mother{
        public:
        void talent(){
          cout<<"mother is cooking..."<<endl;
        }
       };

       class child : public father, public mother{
         public:
         void reading(){
          cout<<"child is reading..."<<endl;
         }
       };

       int main(){
         child c;
         c.skills(); // from father
         c.talent();  // from mother
         c.reading(); // own function
        return 0;
       }
       

    // 3. Multilevel Inheritance
      // 👉 Multilevel inheritance means a class is derived from another class, which is already derived from another class.
 
         #include<iostream>
         using namespace std;

         class Animal{
          public:
          void eat(){
            cout<<"Eating..."<<endl;
          }
         };

         class Dog : public Animal{
            public:
            void bark(){
              cout<<"Barking..."<<endl;
            }
         };

         class puppy : public Dog{
            public:
            void weep(){
              cout<<"weeping..."<<endl;
            }
         };

         int main(){
          puppy p;
          p.eat(); // from animal
          p.bark(); // from dog
          p.weep(); // own function
            return 0;
         }
          

      //  🔹 Hierarchical Inheritance
        // 👉 Hierarchical inheritance means multiple child classes inherit from a single parent class.

        #include<iostream>
        using namespace std;

        class Animal{
          public:
          void eat(){
            cout<<"Eating..."<<endl;
          }
        };
    
         class Dog : public Animal{
          public:
          void bark(){
            cout<<"Barking..."<<endl;
          }
         };
        
         class cat : public Animal{
          public:
          void meow(){
            cout<<"meowing..."<<endl;
          }
         };

         int main(){
          Dog d;
          d.eat();
          d.bark();
          cat c;
          c.eat();
          c.meow();
          return 0;
         }