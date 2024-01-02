 #include<iostream>
 #include<string>
 
 using namespace std;
 
 class CatPicture{
 	private:
 		string cat_name;
 	public:
 	CatPicture(){ }			// default const.
 	CatPicture(string c){ 	// para. const.
		SetCat_name(c);
	}	
 	// set func.
 	void SetCat_name(string n){
 		cat_name = n;
	}
 	// get func.
 	string GetCat_name(){
 		return cat_name;
	}
};
 
class CuteCatPicture : public CatPicture {
	private:
		int	like_count;
	public:
		CuteCatPicture(){}  // default const.
		CuteCatPicture(string n) : CatPicture(n) {		// para. const.	
			like_count = 0;
		} 
	// set func.
	void Setlike_count(int a){
		like_count = a;
	}
	// get func.
	int Get_num_likes(){
		cout << "\tCute Cat's Current Picture likes : " <<  like_count << endl;
	}
	
	void Get_description(){
		cout << "\n\tCat Name: " << CatPicture::GetCat_name() << "\n\tLikes: " << like_count << endl; 
	}
	
	void Like(){  // increments like_count
		like_count++;
	}	
};
 
 //CuteCatPicture::like_count=0;
 
class GrumpyCatPicture : public CatPicture {
	private:
		int	like_count;
	public:
		GrumpyCatPicture(){}  // default const.
		GrumpyCatPicture(string n) : CatPicture(n) { 	// para. const.	
			like_count = 0;
		} 	
	// set func.
	void Setlike_count(int a){
		like_count = a;
	}
	// get func.
	int Get_num_likes(){
		cout << "\tGrumpy Cat's Current Picture likes : " <<  like_count << endl;
	}
	
	void Get_description(){
		cout << "\n\tCat Name: " << CatPicture::GetCat_name() << "\n\tLikes: " << like_count << endl; 
	}
	
	void Like(){  // increments like_count
		like_count++;
	}
};

 
int main(){
	
	cout << "Description: # 01" << endl;
	CuteCatPicture C1("Poco Kun");	// 1st OBJECT
	C1.Get_description();
	
	cout  << "	*After Incrementing Likes* " << endl;
	C1.Like();
	C1.Get_num_likes();
	
	
	cout << endl << endl << "Description: # 02" << endl;
	GrumpyCatPicture C2("Pown");	// 2nd OBJECT
	C2.Setlike_count(44);
	C2.Get_description();
	cout << "	*After Incrementing Likes* " << endl;
	C2.Like();
	C2.Get_num_likes();

	return 0;
}

