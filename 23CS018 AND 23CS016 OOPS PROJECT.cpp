/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
int main(){
//BMI CALCULATOR
//Weight(kg)/ height * height(m)
//Underweight 18.5
//Normal weight 18.5-24.9
//Overweight >25

float  weight, height, bmi;
cout << "Weight(kg), height(m): ";
cin>> weight >>height;
bmi = weight / height * height;

if(bmi < 18.5)
   cout << "Underweight" << endl;
   else if(bmi<25)
   cout << "Overweight" << endl;
   else
   cout << "Normalweight" << endl;
   
   cout << "your bmi is "<< bmi;
   
   system("pause>0");
 }
 
   
   

