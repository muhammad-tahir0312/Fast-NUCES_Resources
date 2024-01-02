#include<iostream>
#include<string>

using namespace std;

class Medicine{
    private:
 	   string name, formula;
	    unsigned int manufactureYear, expiryYear;
	    float retailPrice;
    public:
    	Medicine(){	}		// DEF. CONST.
    	Medicine(string n, string f, int mf, int bb, float p){
    		name=n; formula=f; manufactureYear=mf; expiryYear=bb; retailPrice=p;
		}
    // SET FUNCTIONS
    void setName(string n){
        name=n;
    } 
    void setFormula(string f){
        formula=f;
    } 
    void setPrice(float p){
        retailPrice=p;
    }
    void setMauYear(int m){
        manufactureYear=m;
    }
    void serExp(int exp){
        expiryYear=exp;
    }
    // GET FUNCTIONS  
    string getName(){
        return name;
    }
	string getFormula(){
        return formula;
    }
    float getPrice(void){
        return retailPrice;
    }  
    int getManuYear(void){
        return manufactureYear;
    }    
    int getExpYear(void){
        return expiryYear;
    }
    
    bool operator==(const Medicine&m1){
    	
	    if(m1.expiryYear == expiryYear){
	    	
	        cout<<"\nMedicines have the same Expiry year!!";        
	        return 1;
	    }
   		else 
        	return 0;
	}
};

class Capsule:public Medicine{
    private:
    	float absorptionPercentage;   
    public:
    	Capsule():Medicine(){	}	// DEF. CONST.
    	Capsule(string n, string f, int mf, int bb, float p, float abp):Medicine(n,f,mf,bb,p){
		    if(abp>=1 && abp<=100){
		        absorptionPercentage=abp;
		    }
    		else{
		        cout<<"Invalid Input!!";
		        absorptionPercentage=50;
		    }
		}
    // SET FUNCTIONS
    void setAbp(float a){
        absorptionPercentage=a;
    }    
    // GET FUNCTIONS
    float getAbp(void){
        return absorptionPercentage;
    }
};

class Tablet:public Medicine{
    private:
    	float sucroseLevel;    
    public:
    Tablet():Medicine(){	}	
    Tablet(string n, string f, int mf, int bb, float p, float sl):Medicine(n,f,mf,bb,p){
	    if(sl>=0 && sl<=1)	    {
	        sucroseLevel=sl;
	    }
   		 else{
	        cout<<"Invalid Input!!";
	        sl=0.25;
	    }
	}
    // SET FUNCTIONS
    void setSucorse(float a)    {
        sucroseLevel=a;
    }
    // GET FUNCTIONS
    float getSucrose(void){
        return sucroseLevel;
    }
};


class Employee{   
    protected:
    	string empName;
		string empId;
    float salary;
    
    public:
    	Employee(){		}		// DEF. CONST.
    	Employee(string name, string id, float sal) : empName(name), empId(id), salary(sal){    }

    virtual void Search_Medicine(Medicine*, int, Tablet*, int, Capsule*, int, string) =0;
};


class Pharmacist:public Employee {   
    public:
    	Pharmacist(){	}		// DEF. CONST.
    	Pharmacist(string name, string id, float sal):Employee(name, id, sal){	}
    	
    void Search_Medicine(Medicine *med, int numMed, Tablet *tab, int numTab, Capsule *cap, int numCap, string search){
	    int flag = 0;
	    for(int i=0; i<numMed; i++){
	        if(search == med->getFormula()){
	            cout<<"\n\nSearch Results: "<<endl;
				cout<<"\n\tName : "<<med->getName();
	            cout<<"\n\tFormula : "<<med->getFormula();
	            cout<<"\n\tManufacture Date : "<<med->getManuYear();
	            cout<<"\n\tExpiry Date : "<<med->getExpYear();
	            cout<<"\n\tPrice : "<<med->getPrice();
	             flag = 1;
	        }
	    }
	    for(int i=0; i<numTab; i++){
	        if(search == tab->getFormula()){
	            cout<<"\n\nSearch Results: "<<endl;
				cout<<"\n\tName : "<<tab->getName();
	            cout<<"\n\tFormula : "<<tab->getFormula();
	            cout<<"\n\tManufacture Date : "<<tab->getManuYear();
	            cout<<"\n\tExpiry Date : "<<tab->getExpYear();
	            cout<<"\n\tPrice : "<<tab->getPrice();
	            cout<<"\n\tSucrose level: "<<tab->getSucrose();
	             flag = 1;
	
	        }
	    }
	    for(int i=0; i<numCap; i++){
	        if(search == cap->getFormula()){
	            cout<<"\n\nSearch Results: " << endl;
				cout<<"\n\tName : "<<cap->getName();
	            cout<<"\n\tFormula : "<<cap->getFormula();
	            cout<<"\n\tManufacture Date : "<<cap->getManuYear();
	            cout<<"\n\tExpiry Date : "<<cap->getExpYear();
	            cout<<"\n\tPrice : "<<cap->getPrice();
	            cout<<"\n\tAbsorption Level: "<<cap->getAbp();
	             flag = 1;
	
	        }
	    }
	    if(flag==0){
	        cout<<"\nInvalid Formuala, Query not found!!"<<endl;
	    }
	}
};

class CounterStaff:public Employee 
{   
    public:
    	CounterStaff(){	 }		// DEF. CONST.
    	CounterStaff(string name, string id, float sal):Employee(name, id, sal){	}
    
    void Search_Medicine(Medicine *med, int numMed, Tablet *tab, int numTab, Capsule *cap, int numCap, string search){
	    int flag = 0;
	    for(int i=0; i<numMed; i++){
	        if(search == med->getName()){
	            cout<<"\n\nSearch Results:\n\nName : "<<med->getName();
	            cout<<"\nFormula : "<<med->getFormula();
	            cout<<"\nManufacture Date : "<<med->getManuYear();
	            cout<<"\nExpiry Date : "<<med->getExpYear();
	            cout<<"\nPrice : "<<med->getPrice();
	            flag == 1;
	        }
	    }
	    for(int i=0; i<numTab; i++){
	        if(search == tab->getName()){
	            cout<<"\n\nSearch Results: " << endl;
				cout<<"\n\tName : "<<tab->getName();
	            cout<<"\n\tFormula : "<<tab->getFormula();
	            cout<<"\n\tManufacture Date : "<<tab->getManuYear();
	            cout<<"\n\tExpiry Date : "<<tab->getExpYear();
	            cout<<"\n\tPrice : "<<tab->getPrice();
	            cout<<"\n\tSucrose level: "<<tab->getSucrose();
	            flag == 1;
	        }
	    }
	    for(int i=0; i<numCap; i++){
	        if(search == cap->getName()){   
				cout<<"\n\nSearch Results: "<< endl;
				cout<<"\n\tName : "<<cap->getName();
	            cout<<"\n\tFormula : "<<cap->getFormula();
	            cout<<"\n\tManufacture Date : "<<cap->getManuYear();
	            cout<<"\n\tExpiry Date : "<<cap->getExpYear();
	            cout<<"\n\tPrice : "<<cap->getPrice();
	            cout<<"\n\tAbsorption Level: "<<cap->getAbp();
	            flag == 1;
	        }
	    }
	    if(flag==0){
	        cout<<"\n\n\t  Invalid Input!!"<<endl;
	    }
	}
};

int main(){
    string name, formula;    int expiry, manufacture;    float price;
    
    Medicine med[3];	// Array of  base class
    Medicine *medPtr= &med[0];	// Pointer pointing the base class's array
    
    ////////# Medicine Class #/////////
    cout<<"For Medicine: ";
    for(int i=0;i<3;i++){
        cout<<"\n\tEnter Name["<<i+1<<"]: ";
        getchar();
        getline(cin, name);
        med[i].setName(name);
        fflush(stdin);
        cout<<"\tEnter Formula:["<<i+1<<"]: ";
        getline(cin, formula);
        med[i].setFormula(formula);
        fflush(stdin);
        cout<<"\tEnter Manufacture Year, Expiry Year["<<i+1<<"]: ";
        cin>>manufacture>>expiry;
        med[i].setMauYear(manufacture);
        med[i].serExp(expiry);
        cout<<"\tEnter Retail Price["<<i+1<<"]: ";
        cin>>price;
        med[i].setPrice(price);    
    }
    
    
    Tablet tab[3];	// Array of  derived class
    Tablet *tabPtr = &tab[0];	// Pointer pointing the derived class's array
    float sucroselevel;
    
    ////////# Tablets Class #/////////
    cout<<"\n\nFor Tablets: ";
    for(int i=0;i<3;i++){
        cout<<"\tEnter Name["<<i+1<<"]: ";
        getchar();
        getline(cin, name);
        tab[i].setName(name);
        fflush(stdin);
        cout<<"\tEnter Formula["<<i+1<<"]: ";
        getline(cin, formula);
        tab[i].setFormula(formula);
        fflush(stdin);
        cout<<"\tEnter Manufacture Year, Expiry Year: ";
        cin>>manufacture>>expiry;
        tab[i].setMauYear(manufacture);
        tab[i].serExp(expiry);
        cout<<"\tEnter Retail Price["<<i+1<<"]: ";
        cin>>price;
        tab[i].setPrice(price);
        cout<<"\tEnter Sucoruse Level["<<i+1<<"]: "; 
		cin>>sucroselevel;
        tab[i].setSucorse(sucroselevel);  
    }
    
    Capsule cap("Panadol", "Paracatemol", 2018, 2022, 10.6, 44.8);	// initializing values using constructor
    
    Capsule *capPtr=&cap;	// Pointer pointing the derived class's object
    
    cout<<"\nChecking For Medicines with same Expiry details------------";
    for(int j=0 ; j<3; j++){
        med[j]==med[j+1];
        cout<<"\n\tFor Medicine1: \nName : "<<med[j].getName()<<"\n\tExpiry Date: "<<med[j].getExpYear();
        cout<<"\n\tFor Medicine2: \nName : "<<med[j+1].getName()<<"\n\tExpiry Date: "<<med[j+1].getExpYear();
    }
    
    Pharmacist p("Arham","HB-2210", 22000.12);		// initializing values using constructor
    CounterStaff c("Ahsan", "NU-3340", 25001.334);	// initializing values using constructor
    
    
    cout<<"\nSearch By Formula:";
    p.Search_Medicine(medPtr, 3, tabPtr, 3, capPtr, 1, "Paracatemol");		// Calling search function
    cout<<"\nSearch By Name:";
    c.Search_Medicine(medPtr, 3, tabPtr, 3, capPtr, 1, "Panadol");  	// Calling search function

    return 0;
}
