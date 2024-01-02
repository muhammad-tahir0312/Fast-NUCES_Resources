#include<iostream>
#include<string>

using namespace std;

class Parcel{
	private:
		// SENDER
		string S_Name;
		string S_Address;
		string S_City;
		string S_Province;
		int S_PostalCode;
		double Weight;
		double Cost;
		// RECIVER
		string R_Name;
		string R_Address;
		string R_City;
		string R_Province;
		int R_PostalCode;
	public:
		Parcel(){	}	// DEF. CONST.
		Parcel(string Sn, string Sa, string Sc, string Sp, int Spostal, double Sw, double Scost, string Rn, string Ra, string Rc, string Rp, int Rpostal){
			S_Name = Sn;
			S_Address = Sa;
			S_City = Sc;
			S_Province = Sp;
			S_PostalCode = Spostal;
			
			R_Name = Rn;
			R_Address = Ra;
			R_City = Rc;
			R_Province = Rp;
			R_PostalCode = Rpostal;
			
			if(Sw > 0 && Scost >0){
			    Weight=Sw; Cost=Scost;
			}
		    else{
		        cout<<"Invalid Data Entry";
		        exit(0);
		    }
		}
	// Get Functions	
	double GetWeight(){
		return Weight;
	}
	double GetCost(){
		return Cost;
	}
	string GetS_Name(){
		return S_Name;
	}
	string GetS_Address(){
		return S_Address;
	}
	string GetS_City(){
		return S_City;
	}
	string GetS_Province(){
		return S_Province;
	}
	int GetS_PostalCode(){
		return S_PostalCode;
	}
	string GetR_Name(){
		return R_Name;
	}
	string GetR_Address(){
		return R_Address;
	}
	string GetR_City(){
		return R_City;
	}
	string GetR_Province(){
		return R_Province;
	}
	int GetR_PostalCode(){
		return R_PostalCode;
	}
};

class TwoDayPackage : public Parcel {
	private:
    	double FlatFee;
		
	public:
		TwoDayPackage(){	}  // DEF. CONST.
		TwoDayPackage(double f, string Sn, string Sa, string Sc, string Sp, int Spostal, double Sw, double Scost, string Rn, string Ra, string Rc, string Rp, int Rpostal):Parcel(Sn, Sa, Sc, Sp, Spostal, Sw, Scost, Rn, Ra, Rc, Rp, Rpostal){
			FlatFee = f;
		}
	static double Total;		// Static variable
	
	//	Extra Functions
	double CalculateCost(){
		
	    Total+= FlatFee + (GetWeight() * GetCost());
	    return FlatFee + (GetWeight() * GetCost());
	}
	//	Display Function
    void Display(){
    
    	cout<<"For Two Day Package Service:" << endl;
    	cout<<"\nSender Details:\n\tName: "<< GetS_Name() <<"\n\tAddress: "<< GetS_Address() <<"\n\tCity: " << GetS_City() << "\n\tPostal Code: " << GetS_PostalCode() << "\n\tProvince: " << GetS_Province() << endl;
	    cout<<"\nReciever Details:\n\tName: " << GetR_Name() << "\n\tAddress: " << GetR_Address() << "\n\tCity: " << GetR_City() << "\n\tPostal Code: "  << GetR_PostalCode() << "\n\tProvince: " << GetR_Province() << endl;
	    cout<<"\nPackage Details: \n\tWeight: " << GetWeight() << "\n\tCost Per gram: " << GetCost() << "\n\tCost: "<< CalculateCost() << endl;
	}		
};

double TwoDayPackage::Total=0;	// Initialization of static variable

class OvernightPackage : public Parcel {
	private:
		double AddFee;
		
	public:
		OvernightPackage(){ 	}	// DEF. CONST.
		OvernightPackage(double a, string Sn, string Sa, string Sc, string Sp, int Spostal, double Sw, double Scost, string Rn, string Ra, string Rc, string Rp, int Rpostal):Parcel(Sn, Sa, Sc, Sp, Spostal, Sw, Scost, Rn, Ra, Rc, Rp, Rpostal){
			AddFee = a;
		}
	static double Total;		// Static variable
	
	//	Extra Functions
	double CalculateCost(){
		
    	Total += GetWeight() * (GetCost() + AddFee);
    	return GetWeight() * (GetCost() + AddFee);
	}
    void Display(){
    
    	cout<<"\n\nFor Over Night Package Service:" << endl;
    	cout<<"\nSender Details:\n\tName: "<< GetS_Name() <<"\n\tAddress: "<< GetS_Address() <<"\n\tCity: " << GetS_City() << "\n\tPostal Code: " << GetS_PostalCode() << "\n\tProvince: " << GetS_Province() << endl;
	    cout<<"\nReciever Details:\n\tName: " << GetR_Name() << "\n\tAddress: " << GetR_Address() << "\n\tCity: " << GetR_City() << "\n\tPostal Code: "  << GetR_PostalCode() << "\n\tProvince: " << GetR_Province() << endl;
	    cout<<"\nPackage Details: \n\tWeight: " << GetWeight() << "\n\tCost Per gram: " << GetCost() << "\n\tCost: "<< CalculateCost() << endl;
	}
};

double OvernightPackage::Total=0;	// Initialization of static variable

int main(){
	
	TwoDayPackage T(20.2, "Ahmed","Phase 4", "Karachi", "Sindh", 6400, 5.4, 15.3, "Hsg","Cant","Lahore", "Punjab", 3569);
	T.Display();
	
	
	OvernightPackage O(20.2, "Qasim","Shah Latif", "Karachi", "Sindh", 2053, 9.6, 18, "Tahir","Mal Road","Quetta", "Balochistan", 4586);
	O.Display();
	
	
	cout<<"\n\nTotal Cost = "<< T.CalculateCost() + O.CalculateCost() << endl;

 	return 0 ;
}

