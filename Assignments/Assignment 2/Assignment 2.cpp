// NAME AND MATRICS NUMBER : MUHAMMAD FAIRUZ BIN HERMAN (A25CS0267)
// NAME AND MATRICS NUMBER : NASAAIE BIN NORISKAMAR (A25CS0118)
//DATE : 29/12/2025
// SET : SET 1



#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void userInformation(int &,char &, int &, int &);
double calculatorBMR(int , char ,int , int);
void displayActivity(double, double &,double &,double &,double &,double &,double &);
int calculatorCalorie(double ,double &,double &,double &,double &,double &,double &);

int main (){
	int age, height, weight;
	char gender,cont;
	double BMR,calorie1,calorie2,calorie3,calorie4,calorie5,calorie6;
	do {
		
		cout<< "Basal Metabolic Rate (BMR) Calculator"<<endl;
		cout<<" "<<endl;
		userInformation(age, gender, height, weight);
		BMR=calculatorBMR(age, gender, height, weight);
		cout <<"BMR = "<<fixed<<setprecision(2)<<BMR<<" Calories/ day (using Mifflin-St Jeor Equation)"<<endl;
		cout<<" "<<endl;
		displayActivity(BMR,calorie1,calorie2,calorie3,calorie4,calorie5,calorie6);
		cout<<" "<<endl;
		cout<<"Do you want to enter other data? [Y @ N]: " ;
		cin>>cont;
		cout<<" "<<endl;
	}while (cont == 'Y'||cont=='y');
	cout <<"Thank you :)";
	return 0;
}

void userInformation(int &age,char &gender,int &height, int&weight){
	cout<<"Age [15-80]: ";
	cin>>age;
	if(age>80 || age<15){
		while (age>80||age<15){
			cout<<"Age [15-80]: ";
			cin>>age;
		}
	}
	
	cout <<"Gender [F @ M]: ";
	cin>>gender;
	if(gender!='F' && gender!='M' && gender!='f' && gender!='m'){
		while (gender!='F' && gender!='M' && gender!='f' && gender!='m'){
		cout <<"Gender [F @ M]: ";
		cin>>gender;
		}
	}
	
	cout<<"Height (cm): ";
	cin>>height;
	cout<<"Weight (kg): ";
	cin>>weight;
}

double calculatorBMR(int A,char G,int H,int W){
	double BMR;
	if (G=='m'||G=='M'){
		BMR=(10*W)+(6.25*H)-(5*A)+5;
	}
	else if (G=='F' || G=='f'){
		BMR=(10*W)+(6.25*H)-(5*A)-161;
	}
	return BMR;
}

void displayActivity(double BMR,double &calorie1,double &calorie2,double &calorie3,double &calorie4,double &calorie5,double &calorie6){
	calculatorCalorie(BMR,calorie1,calorie2,calorie3,calorie4,calorie5,calorie6);
	cout<<"Daily calorie needs based on activity level"<<endl;
	cout<<" "<<endl;
	cout<<"Activity Level							Calorie"<<endl;
	cout<<"Sedentary: little or no exercise				"<<calorie1<<endl;
	cout<<"Exercise 1-3 times/week						"<<calorie2<<endl;
	cout<<"Exercise 4-5 times/week						"<<calorie3<<endl;
	cout<<"Daily exercise or intense exercise 3-4 times/week		"<<calorie4<<endl;
	cout<<"Intense exercise 6-7 times/week					"<<calorie5<<endl;
	cout<<"Very intense exercise daily, or physical job			"<<calorie6<<endl;
	cout<<" "<<endl;
	cout<<"Exercise: 15-30 minutes of elevated heart rate activity. "<<endl;
	cout<<"Intense exercise: 45-120 minutes of elevated heart rate activity."<<endl;
	cout<<"Very intense exercise: 2+ hours of elevated heart rate activity."<<endl;
	
}

int calculatorCalorie(double BMR,double &calorie1,double &calorie2,double &calorie3,double &calorie4,double &calorie5,double &calorie6){
	double remainder;
	calorie1=BMR * 1.2;
	remainder=calorie1-static_cast<int>(calorie1);
	if (remainder>=0.5){
		calorie1=ceil(calorie1);
	}
	else {
		calorie1=floor(calorie1);
	}
	
	
	calorie2=BMR*1.375;
	remainder=calorie2-static_cast<int>(calorie2);
	if (remainder>=0.5){
		calorie2=ceil(calorie2);
	}
	else {
		calorie2=floor(calorie2);
	}
	
	calorie3=BMR*1.465;
	remainder=calorie3-static_cast<int>(calorie3);
	if (remainder>=0.5){
		calorie3=ceil(calorie3);
	}
	else {
		calorie3=floor(calorie3);
	}
	
	calorie4=BMR*1.55;
	remainder=calorie4-static_cast<int>(calorie4);
	if (remainder>=0.5){
		calorie4=ceil(calorie4);
	}
	else {
		calorie4=floor(calorie4);
	}
	
	calorie5=BMR*1.725;
	remainder=calorie5-static_cast<int>(calorie5);
	if (remainder>=0.5){
		calorie5=ceil(calorie5);
	}
	else {
		calorie5=floor(calorie5);
	}
	
	calorie6=BMR*1.9;
	remainder=calorie6-static_cast<int>(calorie6);
	if (remainder>=0.5){
		calorie6=ceil(calorie6);
	}
	else {
		calorie6=floor(calorie6);
	}
}
