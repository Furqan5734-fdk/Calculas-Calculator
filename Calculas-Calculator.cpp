#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
const double PI = 3.14159265;
#include <unistd.h>

//Function for Distance in of two points in Calculas

double Distance(int x1,int x2,int y1,int y2);

//Calculating Derivative
void Derivative(int polynomial[], int degree);

//Calculating Integration
void Integration(int polynomial[], int degree);


//Driver Code
int main(){
	
	
	int choice;
	int x1,x2,y1,y2;
	
	cout<<" ____  ____    ____                ____   ____   "<<endl;
	cout<<"|      |   |  |      |    |  |     |   | |     "<<endl;
	sleep(1);
	cout<<"|      |---|  |      |    |  |     |---|  ----  "<<endl;
	cout<<"|____  |   |  |____  |____|  |___  |   |  ____|  "<<endl;
	sleep(1);
	cout<<" ____  ____        ____              ____   _____   ____   ____"<<endl;
	cout<<"|     |    | |    |     |    | |    |    |    |    |    | |    |"<<endl;
	sleep(1);
	cout<<"|     |----| |    |     |    | |    |----|    |    |    | |----"<<endl;
	cout<<"|____ |    | |___ |____ |____| |___ |    |    |    |____| | \\"<<endl;
	
	//
	
	cout<<"\n\nWhich function you want to perform: "<<endl;
	cout<<"1.Distance"<<endl;
	cout<<"2.Derivative Function"<<endl;
	cout<<"3.Integral Function"<<endl;
	cin>>choice;	
		

	
	
	switch(choice){
		
		////////////////////////CASE FOR DISTANCE///////////////////////////////////
		case 1:
			cout<<"Enter value of x1: ";
			cin>>x1;
			cout<<"Enter value of x2: ";
			cin>>x2;
			cout<<"Enter value of y1: ";
			cin>>y1;
			cout<<"Enter value of y2: ";
			cin>>y2;
			//Calcualting Distance
			cout<<"Distance between two points is : "<<Distance(x1,x2,y1,y2)<<endl;		
			break;
		
		
		////////////////////////CASE FOR DERIVATIVE///////////////////////////////////
		case 2:

		int type;
		
		cout<<"\n1. Polynomial Equation.\n2. Trignometric Function."<<endl;
		cout<<"Which type of derivative: ";
		cin>>type;
		
		//----------------------For Polynomial Equations***************************
		if(type==1){
		
		
			int degree;
			cout<<"Enter Degree of Polynomial equation: ";
			cin>>degree;
			
			int polynomial[degree];

			for(int i=degree;i>=0;i--){
				
				cout << "Enter the coefficient for the degree " << i << ": ";
				cin >> polynomial[i];
				
			}
			
			//Calling Derivative Function	
			Derivative(polynomial,degree);

		}	
	
			//----------------------For Trignometry Functions***************************
		if(type==2)	{
		
			
			int select,radian,degree;
			cout<<" 1. Sin(x). \n 2. Cos(x). \n 3. sin^2x. \n 4. cos^2x. \n 5. tan(x). \n 6. cot(x). \n 7. sec(x). \n 8. csc(x)\n";
			cout<<"Select Function: "<<endl;
			cin>>select;
			
				cout<<"Enter angle in degree: ";
				cin>>degree;
				radian = degree * PI / 180.0;
				cout<<endl;
			
			
			switch(select){
			
				
				case 1:
					
					cout<<"Derivative of Sin(x) = "<<"Cos(x)"<<endl;
					cout<<"\nValue for derivative: "<<cos(radian)<<endl;
					
					break;
					
				case 2:
					cout<<"Derivative of Cos(x) = "<<"Sin(x)"<<endl;
					cout<<"\nValue for derivative: "<<sin(radian)<<endl;
					break;
					
				case 3:
					cout<<"Derivative of Sin^2x = "<<"2.Sin(x).Cos(x)"<<endl;
					cout<<"\nValue for derivative: "<<2*cos(radian)*sin(radian)<<endl;		
					break;
					
				case 4:
					cout<<"Derivative of Cos^2x = "<<"-2.Sin(x).Cos(x)"<<endl;	
					cout<<"\nValue for derivative: "<<-2*cos(radian)*sin(radian)<<endl;
					break;
					
				case 5:
					cout<<"Derivative of tan(x) = "<<"sec^2x"<<endl;
					cout<<"\nValue for derivative: "<<1/pow(cos(radian),2)<<endl;
					
					break;
					
				case 6:
					cout<<"Derivative of cotx = "<<"-csc^2x"<<endl;		
					cout<<"\nValue for derivative: "<<-1/pow(sin(radian),2)<<endl;
					break;
					
				case 7:
					cout<<"Derivative of sec(x) = "<<"sec(x).tan(x)"<<endl;
					cout<<"\nValue for derivative: "<<(1/cos(radian))*(sin(radian)/cos(radian))<<endl;
					break;
					
				case 8:
					cout<<"Derivative of csc(x) = "<<"-csc(x).cot(x)"<<endl;
					cout<<"\nValue for derivative: "<<-(1/sin(radian))*(cos(radian)/sin(radian))<<endl;
					break;
						
				default:
				cout<<"Please Enter correct option."<<endl;
				break;	
			}
			break;
		
		
		////////////////////////CASE FOR INTEGRATION///////////////////////////////////
		case 3:
			
			int equ;	
			cout<<"\n1. Polynomial Equation.\n2. Trignometric Function."<<endl;
			cout<<"Which type of Integration: ";
			cin>>equ;
			
		
		//----------------------For Polynomial Equations***************************		
		if(equ==1){
		
		
			int degree;
			cout<<"Enter Degree of Polynomial equation: ";
			cin>>degree;
			
			int polynomial[degree];

			for(int i=degree;i>=0;i--){
				
				cout << "Enter the coefficient for the degree " << i << ": ";
				cin >> polynomial[i];
				
			}
			
			//Calling Integration Function	
			Integration(polynomial,degree);
		}	
		
		
		//----------------------For Trignometry Functions***************************	
		if(equ==2)	{
		
			
			int select,radian;
			cout<<" 1. Sin(x). \n 2. Cos(x). \n 3. sin^2x. \n 4. cos^2x. \n 5. tan(x). \n 6. cot(x). \n 7. sec(x). \n 8. csc(x)\n";
			cout<<"Select Function: ";
			cin>>select;
			
				cout<<"\nEnter value of x: ";
				cin>>radian;
				cout<<endl;
			
			switch(select){
			
				
				case 1:
					cout<<"Integration of Sin(x) = "<<"-cosx + c"<<endl;
					cout<<"\nValue for Integration: "<<-cos(radian)<<endl;
					
					break;
					
				case 2:
					cout<<"Integration of Cos(x) = "<<"sinx + c"<<endl;
					cout<<"\nValue for Integration: "<<sin(radian)<<endl;
					break;
					
				case 3:
					cout<<"Integration of Sin^2x = "<<" (x - sinx · cosx)/2 + c"<<endl;
					cout<<"\nValue for Integration: "<<(radian - cos(radian)*sin(radian))/2<<endl;		
					break;
					
				case 4:
					cout<<"Integration of Cos^2x = "<<"(x + sinx · cosx)/2 + c"<<endl;	
					cout<<"\nValue for Integration: "<<(radian + cos(radian)*sin(radian))/2<<endl;
					break;
					
				case 5:
					cout<<"Integration of tan(x) = "<<"-ln|cosx| + c"<<endl;
					cout<<"\nValue for Integration: "<<-log(cos(radian))<<endl;
					break;
					
				case 6:
					cout<<"Integration of cotx = "<<"ln|sinx| + c"<<endl;		
					cout<<"\nValue for Integration: "<<log(sin(radian))<<endl;
					break;
					
				case 7:
					cout<<"Integration of sec(x) = "<<"ln|secx + tanx| + c"<<endl;
					cout<<"\nValue for Integration: "<<log((1/cos(radian))*(sin(radian)/cos(radian)))<<endl;
					break;
					
				case 8:
					cout<<"Integration of csc(x) = "<<"-ln|cscx + cotx| + c"<<endl;
					cout<<"\nValue for Integration: "<<-log((1/sin(radian))*(cos(radian)/sin(radian)))<<endl;
					break;
						
				default:
				cout<<"Please Enter correct option."<<endl;
				break;	
			}
			
				
		
		break;
				
		default:
		cout<<"Default"<<endl;
			break;
	}
	
	return 0;
	
}
}
}
////////////////////////////////////////////////Distance///////////////////////////////////////////

double Distance(int x1,int x2,int y1,int y2){
	double result;
	result= sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return result;
}

////////////////////////////////////////////////Derivative///////////////////////////////////////////

void Derivative(int polynomial[], int degree){

	int count=degree;
	
	cout<<"\nf(x) = ";           
	for(int i=degree;i>=0;i--) 
	{
		
		if(i==0)
		{
			cout<<polynomial[i]<<endl;
			break;
		}
		
		cout<<polynomial[i]<<"x^"<<count<<" + ";
		count--;
		
	}
	
	count=degree;
	cout<<"\nf`(x) = ";
	
	for(int i=degree;i>=0;i--) 
	{
		
		if(i==0)
		{
			break;
		}
		
		cout<< count * polynomial[i]<<"x^"<<count-1<<" + ";
		count--;
		
	}
	

}

////////////////////////////////////////////////Integration///////////////////////////////////////////

void Integration(int polynomial[], int degree){

	int count=degree;
	
	cout<<"\nf(x) = ";           
	for(int i=degree;i>=0;i--) 
	{
		
		if(i==0)
		{
			cout<<polynomial[i]<<endl;
			break;
		}
		
		cout<<polynomial[i]<<"x^"<<count<<" + ";
		count--;
		
	}
	
	cout<<"\nAfter Taking Integration = ";
	for(int i=degree;i>=0;i--) 
	{
		
		if(i==0)
		{
			cout<<polynomial[i]<<" / "<<i+1<<"x^"<<i+1;
			break;
		}
		
		cout<<polynomial[i]<<"/"<<i+1<<"("<<"x^"<<i+1<<")"<<" + " ;	
		
	}
	

}
