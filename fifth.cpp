#include<iostream>
#include<iomanip>//we included this header file to use 'setw' manupulator.
using namespace std;

int main(){
int a{34};
cout<<"The value of a is "<<a<<endl;
a=56;
cout<<"The value of a is "<<a<<endl;//hear we changed the value of a.
const int b=54;//the 'const' refers to constant which means the value of 'b' will remain constant.
cout<<"The value of b is "<<b<<endl;
//b=57;    we tried to change the value of b but error occured 
//because we have used the operator const.
cout<<"The value of b is "<<b<<endl;
//************manipulators*************
/*1 manupulators help us to butify or write our outputput in an arranged way.
example 1-'endl' it is a manupulator which comes under 'iostream' header file.
it helps in line brake.

example 2-'setw' it is a manupulator which comes under 'iomanip' header file.
it helps to rite aligen our of our output.*/
int x=3,y=74,z=5678;
cout<<"The value of x is "<<setw(4)<<x<<endl;
cout<<"The value of y is "<<setw(4)<<y<<endl;
cout<<"The value of z is "<<setw(4)<<z<<endl<<endl;

cout<<"The value of x without manipulator 'setw' is "<<x<<endl;
cout<<"The value of y without manipulator 'setw' is "<<y<<endl;
cout<<"The value of z without manipulator 'setw' is "<<z<<endl;
/**********operator presidence**************
operator presidence means which operator will resolve first by c++.
we cane learn the rule from goole website named 'cpp referance.com.*/
int p=4,q=5,r=6;
//question is s=r*5+p-45+q
//step 1- since multiply comes first in operator presidence so we put the bracket = (r*5)+p-45+q
//step 2- while resolving - and + the c++ resolve the question from left to rite side=((r*5)+p)-45+q
//step 3- while resolving - and + the c++ resolve the question from left to rite side=(((r*5)+p)-45)+q 
//step 4- while resolving - and + the c++ resolve the question from left to rite side=((((r*5)+p)-45)+q)
int s=((((r*5)+p)));//we use these brackets to make the code easy to understand.with or without the braciet 
//the output will be same.
cout<<"The value of s is "<<s<<endl;


    return 0;
}