#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int age;
    int height;
    
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << "Enter your height (cm)" << endl;
    cin >> height;

    if (age>=16 && height>=157){
        cout << "You can ride!" << endl;
    }
    else{
        cout << "Sorry, you can't ride this ride." << endl;
    }
    return 0;
}