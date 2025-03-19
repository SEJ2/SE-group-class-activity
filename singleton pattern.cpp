//sources
//https://www.geeksforgeeks.org/cpp-class-methods/
//https://www.geeksforgeeks.org/c-classes-and-objects/?ref=gcse_outind
// https://www.geeksforgeeks.org/implementation-of-singleton-class-in-cpp/
//https://www.youtube.com/watch?v=PPup1yeU45I
// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

// creating the class Captain Kirk
class CaptainKirk{
    //private data interger variable
   int* Data;
   //private constructor to allow singleton pattern implementation
   CaptainKirk(int* data): Data(data)
   {
    }
    
//public variable scope of the class
    public:
    
    //static get instance function 
    static CaptainKirk* get_instance(int* data)
    {
        //static null constuct to hold instance of class
        static CaptainKirk* _instance;
        
        //to see if there is if instance already exist 
            if (!_instance) {
                //create new instance if null
                _instance = new CaptainKirk(data);
            }
       return _instance;
    }
 //method to that gets the data the user input
     int print_data(){
         cout << " captain's data is : " << *Data;
         return 0;
      }
};


int main()
{
    
    
}
