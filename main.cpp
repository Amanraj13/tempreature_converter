#include<iostream>
#include<string>

using namespace std;
//function prototype
void display_from();
void display_to();

//global variable
float from;
int to;


int main(){
    float temp;

    //calling the functions to display the units
    display_from();
    display_to();

    //converting the tempreature

    if(from==1&&to==2){
        cout<<"\nEnter the tempreature in Celsius:";
        cin>>temp;
        cout<<"The entered tempreature in Fahrenheit is:"<<temp*9/5+32;
    }

    else if(from==1&&to==3){
        cout<<"\nEnter the tempreature in Celcius:";
        cin>>temp;
        cout<<"The entered tempreature in Kelvin is:"<<temp+273.15;
    }

    else if(from==1&&to==4){
        cout<<"\nEntered the tempreature in Celsius:";
        cin>>temp;
        cout<<"The entered tempreature in Rankine is:"<<(temp+273.15)*9/5;
    }

    else if(from==2&&to==1){
        cout<<"\nEnter the tempreature in Fahrenheit:";
        cin>>temp;
        cout<<"The entered tempreature in Celsius is:"<<(temp-32)*5/9;
    }

    else if(from==2&&to==3){
        cout<<"\nEnter the tempreature in Fahrenheit:";
        cin>>temp;
        cout<<"\nThe entered tempreature in Kelvin is:"<<(temp-32)*5/9+273.15;
    }

    else if(from==2&&to==4){
        cout<<"\nEnter the tempreature in Fahrenheit:";
        cin>>temp;
        cout<<"The entered tempreature in Rankine is:"<<temp+459.67;
    }

    else if(from==3&&to==1){
        cout<<"\nEnter the tempreature in Kelvin:";
        cin>>temp;
        cout<<"The entered tempreature in Celsius is:"<<temp-273.15;
    }

    else if(from==3&&to==2){
        cout<<"\nEnter the tempreature in Kelvin:";
        cin>>temp;
        cout<<"The entered tempreature in Fahrenheit is:"<<(temp-273.15)*9/5+32;
    }

    else if(from==3&&to==4){
        cout<<"\nEnter the tempreature in Kelvin:";
        cin>>temp;
        cout<<"The entered tempreature in Rankine is:"<<temp*9/5;
    }

    else if(from==4&&to==1){
        cout<<"\nEnter the tempreature in Rankine:";
        cin>>temp;
        cout<<"The entered tempreature in Celsius is:"<<(temp-491.67)*5/9;
    }

    else if(from==4&&to==2){
        cout<<"\nEnter the tempreature in Rankine:";
        cin>>temp;
        cout<<"The entered tempreature in Fahrenheit is:"<<temp-459.67;
    }

    else if(from==4&&to==3){
        cout<<"\nEnter the tempreature in Rankine:";
        cin>>temp;
        cout<<"The entered tempreature in Kelvin is:"<<temp*5/9;
    }

    else{
        cout<<"\n\nInvalid Choice";
    }


return 0;
}

//function to display the units
void display_from(){

    cout<<"\n1.Celsius";
    cout<<"\n2.Fahrenheit";
    cout<<"\n3.Kelvin";
    cout<<"\n4.Rankine";
    cout<<"\n\nPlease enter the number marked against the units";
    cout<<"\nEnter your choice:";
    cin>>from;

}

void display_to(){

    cout<<"\n1.Celsius";
    cout<<"\n2.Fahrenheit";
    cout<<"\n3.Kelvin";
    cout<<"\n4.Rankine";
    cout<<"\nPlease enter the number marked against the units";
    cout<<"\nEnter your choice:";
    cin>>to;
    
}
