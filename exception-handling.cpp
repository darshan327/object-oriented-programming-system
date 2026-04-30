   /* Exception handling 
       👉 Exception handling is used to handle runtime errors so the program doesn’t crash and can handle problems gracefully.
         or An exception is an unexpected event that occurs during the execution of a program.
       👉 Exception = runtime error
       👉 Handling = managing that error safely

   
      🔹 Why Use Exception Handling?
           Prevents program crash ❌
           Handles unexpected errors safely ✅
           Improves reliability
           Separates error-handling code from normal code

           Keyword	  Meaning
             try	  Block where error may occur
             throw	  Used to throw an exception
             catch	  Handles the exception
   */

   // without exception handling
   /* #include<iostream>
   using namespace std;

     int main(){
        int a,b;
        cout<<"Enter the two Numbers :";
        cin>>a>>b;
        int result = a/b;
        cout<<"Result :" <<result <<endl;
        return 0;
     }
        */

        // with Exception handling
     /*  #include<iostream>
       using namespace std;

       int main(){
            int a,b,r;
            cout<<"Enter the two Numbers :";
            cin>>a>>b;
          try{
            if(b==0)
                throw b; // throwing an exception
            r=a/b;
            cout<<"program continues..."<<r<<endl;
          }
          catch( int msg){
            cout<<"Error :"<<msg<<endl; // handling the exception
          }
         
        return 0;
       }
        */

      // Array Bound Exception (Out-of-Bounds)

         //👉 An array bound exception happens when you try to access an index outside the valid range of an array.

        // without Exception handling
            
     /*   #include<iostream>
        using namespace std;

        int main(){
            int arr[5]={1,2,3,4,5};
            cout<< arr[10]<<endl;
            return 0;
        }
            */


      /*    #include<iostream>
          using namespace std;
          
          int main(){
           int index,n;
           cout<<"Enter the index to acess";
           cin>> index;
           cout<<"Enter the size of array";
           cin>>n;
           int arr[n];
           cout<<"Enter the array of elements";
           for(int i=0; i<n; i++){
            cin>>arr[i];
           }
            
            try{
               
                if(index>=5 || index<0){
                    throw "Index out of Bounds";
                }
                cout<< "value is :" << arr[index] << endl;
            }
            catch(const char* msg){
                cout<<"Error :"<<msg<<endl;
            }
            return 0;
          }
          */

    // Standard Library Exception Handling
        /*  #include <iostream>
          #include <vector>
          using namespace std;
          
          int main() {
         vector<int> v = {1,2,3,4,5};

         try {
             cout << v.at(10);   // automatically throws exception
         }
         catch (exception &e) {
             cout << "Error: " << e.what();
         }
         return 0;
         }
         */

         // Multiple catch blocks 

      /*   #include <iostream>
          using namespace std;

          int main(){
             try{
                int choice;
                cout<<"Enter the choice :";
                cin>>choice;
                if(choice==1){
                    throw choice;
                }else if(choice==2){
                    throw "an error occured in choice 2";
                }else {
                    throw 3.14;
                }
            }
                catch (int e){
                    cout<<"Integer Exception :"<<e<<endl;
                }
                catch (const char* msg){
                    cout<<"string Exception :"<<msg<<endl;
                }
                catch(double e){
                    cout<<"Double Exception :"<<e<<endl;
                }
             
            return 0;
          }
            */


            // 🔹 Number Format Exception

             //👉 A Number Format Exception occurs when you try to convert a string into a number, but the string is not in a valid numeric format.

               
    
               /* #include <iostream>
                #include <string>
                using namespace std;
                
                int main() {
                    string input;
                    cout << "Enter a number: ";
                    cin >> input;
                
                    try {
                        int num = stoi(input);
                        cout << "You entered: " << num << endl;
                    }
                    catch (const invalid_argument &e) {
                        cout << "Invalid number format!" << endl;
                    }
                    catch (const out_of_range &e) {
                        cout << "Number out of range!" << endl;
                    }
                
                    return 0;
                }
          


             //   🔹 Null Pointer Exception

               //👉 A null pointer exception happens when you try to access or use a pointer that is nullptr (points to nothing).

                   #include <iostream>
                    using namespace std;
                    
                    int main() {
                        int* ptr = nullptr;
                    
                        try {
                            if (ptr == nullptr)
                                throw "Null Pointer Exception";
                    
                            cout << *ptr;
                        }
                        catch (const char* msg) {
                            cout << msg;
                        }
                    
                        return 0;
                    }