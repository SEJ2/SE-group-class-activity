#include <mutex>
#include <iostream>

using namespace std;

// creating the class Captain Kirk
class CaptainKirk{
   int* Data;
//public variable scope of the class
    public:
    //class constructor 
    CaptainKirk(int* data): Data(data){
    }
 //method to that gets the data the user input
     int print_data(){
         cout << " captain's data is : " << *Data;
         return 0;
      }
};

//static class constructor
    static Singleton* get_instance(){
       
    }


    printf(number);
}


int main()
{
    
    
}
