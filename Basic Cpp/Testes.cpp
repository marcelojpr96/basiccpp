#include <iostream>
#include <string> //Needed for getline
#include <cmath> //Needed to do math operations
using namespace std;

//1.1
void myFunction(){
    cout << "I just got executed! \n";
}
//1.2
void myFunction2(string fname){
    cout << fname << " Doe";
}
//1.3
int myFunction3(int x){
    return 5 + x;
}

class MyClass{

    //access specifier so it can be used outside of the class
    public :
    int myNum ;
    //Creating a function with no return value
    void myMethod(){
        cout << "Hello World! \n";
    }
    //creating a constructor
    /*MyClass(){
        cout << "Hello World! \n";
    }*/

};

// more Classes : 
class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z); //constructor declaration
    /*{ // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }*/
};

//Constructor definition outside the class
Car::Car(string x, string y, int z){
    brand = x;
    model = y;
    year = z;
}

int main(){

    string text = "Hello";
    string text2 = "World";

    // concatenate strings
    cout << text + text2 << endl;

    //length of string
    cout << text.length() << endl;
    
    //access a character in the string
    cout << text[0] << endl ;

    //Change a character in a string
    text[0] = 'J';
    cout << text << endl ;

    //Read a full line of text instead of a word or int
    // need to include string in the header
    string myFullName ; 
    cout << "Write your full name \n";
    //getline(cin, myFullName);
    cout << "my full name is : " << myFullName << endl;

    // print the highest number inside parentheses
    int x = 5;
    int y = 10;
    cout << max(x, y) << endl;

    //print square root
    cout << sqrt(y)<< endl;

    //Rounding out numbers
    double z = 2.60;
    cout << round(z) << endl;

    // printing bool true or false, 1 and 0 respectively
    bool t = true;
    bool f = false;
    cout << t << endl;
    cout << f << endl;

    //prints the true or false of the expression in numbers
    cout << (y>x) << endl;

    //if statements
    if(x<y){
        cout << x << " < " << y << endl;
    }else if (x>y){
        cout << x << " > " << y << endl;
    }else{
        cout << x << " = " << y << endl;
    }

    //Ternary operator or short if else
    int time = 20;
    string result = (time<18) ? "Good Day. \n" : "Good evening \n";
    cout << result;

    //Switch
    int day = 2 ;
    switch (day){
        case 1 : 
            cout << "saturday" ;
            break;
        case 2: 
            cout << "sunday" << endl;
            break;
        default :
        cout << "wekeend";
        break;
    }

    //loops 

    //while
    int fori = 1 ;
    while (fori < 6){
        cout << fori << endl;
        fori++;
    }
    fori = 1 ;

    //do while
    do{
        cout << fori << endl;
        fori++;
    }while(fori < 6);

    // for loop
    for(int is = 0; is<5; is++){
        cout << is;
    }
    cout <<endl;

    //stoping a for loop is i is 5
    for(int i = 0 ; i<10 ; i++){
        if (i==5){
            break; //serve para sair do loop em que estamos
        }
        cout << i << endl;
    }

    //if the value is 4 jump to 5
    for(int i = 0 ; i<10 ; i++){
        if (i==4){
            continue; //salta para o próximo
        }
        cout << i << endl;
    }

    // Arrays
    // create an array called cars
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    //print the second value in the array
    cout << cars[1] << endl;

    //Change the Volvo value to opel
    cars[0] = "Opel";
    cout << cars[0] << endl;

    //looping trough cars
    for(int i = 0; i<4 ; i++){
        cout << cars[i] << i << endl;
    }


    //references 

    //create a reference variable named meal, should reference food
    string food = "Pizza";
    string &meal = food; 
    cout << meal << " " << food << endl;


    // get the memory address of food
    cout << &food << endl; 

    //create a pointer variable with the name ptr, that points to a string variable, to create a pointer use * after the type of the variable
    string* ptr = &food;
    cout << ptr << endl;

    //Functions
    //create a function and call it outside main 1.1
    myFunction();

    //function with an argument 1.2
    myFunction2("John ");
    cout << endl;

    //function with return 1.3
    cout << myFunction3(3) << endl;



    //Classes
    //created outside of int main  
    //crreating an object of class
    MyClass myObj ;

    //setting the value of a variable inside the object to 15
    myObj.myNum = 15;
    cout << myObj.myNum << endl;
    myObj.myMethod();

    // Create Car objects and call the constructor with different values
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    // Print values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

    return 0;
}