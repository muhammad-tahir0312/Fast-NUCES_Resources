#include <iostream>
using namespace std;
class Cup{
private:
int volume;
string color;
public:
Cup(); // default constructor
Cup(int vol, string col); // parameterized constructor
Cup(Cup &cup); // copy constructor
~Cup(); // Destructor
void setVoulume(int vol);
int getVolume();
void setColor(string color);
string getColor();
void printCup();
};
Cup::Cup()
{
volume = 0.0;
color = "black";
}
Cup::Cup(int vol, string col)
{
setVoulume(vol);
setColor(col);
}
Cup::Cup(Cup &cup)
{
this->volume = cup.volume; // or this->volume = cup.getVolume();
this->color = cup.color; // or this->color = getColor();
}
void Cup::setVoulume(int volume)
{
if (volume > 0)
this->volume = volume;
else
this->volume = 0.0;

}
int Cup::getVolume()
{
return this->volume;
}
void Cup::setColor(string color)
{
this->color = color;
}

string Cup::getColor()
{
return this->color;
}
void Cup::printCup()
{
cout<<endl<<"------------------ Print ------------------"<<endl;
cout<<"Volume = "<<getVolume();
cout<<endl<<"Color = "<<getColor();
}
Cup::~Cup()
{
cout<<endl<<"Destructor Runs";
}
int main()
{
Cup c1;
c1.printCup();
Cup c2(50,"Blue");
c2.printCup();
Cup c3(c2); //CopyConstructor
c3.printCup();
c2.setColor("voilet");
cout<<endl<<"Manually change of color of Cup c2";
c2.printCup();
c3.printCup();
return 0;
}
