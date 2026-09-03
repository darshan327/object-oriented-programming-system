/* Virtual Function Example */

/* #include<iostream>
using namespace std;

  class base{
    public:
      virtual void sound(){
        cout<<"animal make sound";
     }
  };

  class derived : public base{
   public:
    void sound() override{
        cout<<"dog make a sound";
    }
  };

  int main(){
    base * b;
    derived d;
    b=&d;
    b->sound();
    
    return 0;
  }
 */


/*2) pure virtual function */
   
/*  #include<iostream>
using namespace std;

   class animal{
    public: 
    virtual void sound()=0;
   };
    
   class dog : public animal{
    public:
      void sound() override{
        cout<<"dog make a sound";
      }
   };

   class cat : public animal{
     public:
      void sound() override{
        cout<<"cat make a sound";
      }
   };

   int main(){
    animal *a;
    dog d;
    cat c;
    a=&d;
    a->sound();
    a=&c;
    a->sound();

    return 0;
   }

   */

   

   

    