#include <iostream>
#include<cmath>

using namespace std;

int main()
{
double d;
double h;
double angle;
cout<<"enter the distance your from the tree : "<<endl;
cin>>d;
cout<<"enter the eye when peering into your angle-measuring device : "<<endl;
cin>>angle;
cout <<"enter the height :"<<endl;
cin>>h;
 double height= h+d*tan(angle);
 cout<<"the total height is thus: "<<height<<endl;

    return 0;
}
