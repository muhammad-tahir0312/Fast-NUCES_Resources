#include<iostream>
#include<cmath>

using namespace std;

double lenght(double , double , double , double );
double radius(double, double, double, double);
double circumference(double);
double area(double);

double pi{3.1416};

int main()
{
    double x1, x2 , y1, y2, dis, r, a , p_m;
    
    cout<<"Enter X co-ordinate of first point:\t";
    cin>>x1;
    cout<<"Enter Y co-ordinate of first point:\t";
    cin>>y1;
    cout<<"Enter X co-ordinate of second point:\t";
    cin>>x2;
    cout<<"Enter Y co-ordinate of second point:\t";
    cin>>y2;

    dis = lenght(x1,y1,x2,y2);
    r = radius(x1,y1,x2,y2);
    a  = area(r);
    p_m = circumference(r);

    cout<<endl<<"The Distance between the points ("<<x1<<" , "<<y1<<") & ("<<x2<<" , "<<y2<<") = "<<dis;
    cout<<endl<<"The Radius of Cicle with centre ("<<x1<<" , "<<y1<<") & point on circumference ("<<x2<<" , "<<y2<<") = "<<r;
    cout<<endl<<"Area of Circle = "<<area;
    cout<<endl<<"Perimeter of Circle = "<<p_m;
    
    return 0;
}

double lenght(double ax, double ay, double bx, double by)
{
    double d = sqrt(pow((ax - bx),2) + pow((ay - by),2));
    
	return d;
}

double radius(double ax, double ay, double bx, double by)
{
    return lenght(ax, ay,bx, by);
}

double circumference(double r) 
{
    return (2 * pi * r);
}

double area(double r)
{
    return (pi * pow(r, 2)) ;
}
