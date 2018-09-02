#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x; cout << "Enter your grade. Note that it should not be in words" << endl;
    while(!(cin>>x)){
 	cin.clear();
 	cin.ignore(999,'\n');
 	cout<<"Please enter a numeric value"<<endl;
 }
    string grade[6] = { "B+", "B", "C+", "C", "D", "E" }; int max=79; int min=75; x = abs(x);
    for (int i = 0; i < 6; i++){ //the absolute value of x is taken to prevent errors such as negative numbers and % signs.
        if (x >= min and x <= max){ //each scope within the for loop returns 0 so that when the grade for the value inputed
            cout << "You had a " << grade[i] << endl;// is found, the for loop discontinues to reduce program execution time.
            return 0;
        }else if (x < 50 or x == 0){
            cout << "You had an F" << endl;
            return 0;
        }else if (x >=80 and x <=100){
            cout << "You had an A" << endl;
            return 0;
        }
        max = max-5; min = min-5;
    }
}
