#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void displaymenu();
float Area(float radius);
float Area(float weight,float height);
float Area(double weight,double height);
int main()
{
	char choice;
	bool flag=true;
	do{
		displaymenu();
		cin>>choice;
		if(choice == '1'){
			float radius;
			cout<<"\nEnter radius :";
			cin>>radius;
			cout<<"Area of circle = "<<fixed;
			cout<< setprecision(2) <<Area(radius)<<endl;
		}else if(choice == '2'){
			float weight,height;
			cout<<"\nEnter weight and height :";
			cin>>weight>>height;
			cout<<"Area of rectangle = "<<fixed;
			cout<< setprecision(2) <<Area(weight,height)<<endl;
		}else if(choice == '3'){
			double weight,height;
			cout<<"\nEnter weight and height :";
			cin>>weight>>height;
			cout<<"Area of triangle = "<<fixed;
			cout<< setprecision(2) <<Area(weight,height)<<endl;
		}else if(choice == '4') flag=false;
		 else{
			 cout<<"\nYou choose out of range is";
			 cout<<"not process.\n";
		}
	}while(flag);
	cout<<"\n...Exit Program...\n";
	return 0;
}
float Area(const float radius)
{return(3.14159F*radius*radius);
}
 float Area(const float weight,const float height)
 {return(weight*height);
 }
 float Area(const double weight,const double height)
 {return(0.5*weight*height);
 }
 void displaymenu()
 {
	cout<<endl;
	cout<<"Program Calculate Area"<<endl;
	cout<<"1.Circle"<<endl;
	cout<<"2.Rectangle"<<endl;
	cout<<"3.Triangle"<<endl;
	cout<<"4.Exit"<<endl;
	cout<<"Enter your choose number"<<endl;
 }