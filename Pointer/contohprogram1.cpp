#include <iostream>
using namespace std;

int main(){
    string food = "Pizza";
    string *ptr = &food; // A pointer variable, with the name ptr, that stores
    cout<<"Address of food: "<<&food<<endl;
    cout<<"Value of ptr: "<<ptr<<endl;
    cout<<"Value food before changing : "<<food<<endl;
    *ptr = "Bread";
    cout<<"Value food changing: "<<food<<endl;
}