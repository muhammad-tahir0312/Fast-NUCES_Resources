#include<iostream>
#include<string>

using namespace std;

class DailyTemprature{
    private:
	   	double TempF;
   	public:
	   	DailyTemprature()  {}
	   	DailyTemprature(double TempF){
   	  		this -> TempF = TempF;
      	}
    // SET FUNCTION
    void setTempF(double f){
      	TempF = f;
	}
	// GET FUNCTION
	double getTempF(){
	  	return TempF;
	}
	  
	friend class TempCelcius;	// Friend Class Declaration
	friend class TempKelvin;	// Friend Class Declaration
};

class TempKelvin{
	public:
		TempKelvin(){	}
		
	double conversion(DailyTemprature obj){		
		return ( ( ( obj.getTempF() - 32 ) / 1.8 ) + 273.15 );
	}
};

class TempCelcius{
	public:
		TempCelcius(){	}
		
	double conversion(DailyTemprature obj){		
		return ( ( obj.getTempF() - 32 ) / 1.8 );
	}
};

int main(){
	
    DailyTemprature F;
    TempKelvin K;
    TempCelcius C;
   	
   	double f;
   	cout<<"Enter Temperatue in Fahrenheits: ";
    cin>>f;
    
   	F.setTempF(f);
   
   	cout<<"\n\tTemperature in Kelvin is: "<< K.conversion(F) <<" K."; 
    cout<<"\n\tTemperature in Celcius is: "<< C.conversion(F) <<" C."<<endl;  

    return 0;
}
