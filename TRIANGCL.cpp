#include<iostream>
#include<math.h>
using namespace std;

float dis(int a1,int a2,int b1,int b2)
{
	return sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2));
}
main()
{
	int mode,t,x1,x2,x3,y1,y2,y3;
	float a,b,c;
	cin>>mode;
	
	if(mode==1)
	{
		cin>>t;
		
		while(t--)
		{
			cin>>x1>>y1>>x2>>y2>>x3>>y3;
			
			int a,b,c;
			
			a=dis(x1,x2,y1,y2);
			b=dis(x2,x3,y2,y3);
			c=dis(x1,x3,y1,y3);
			
			if(a==b || a==c || b==c)
			{
				cout<<"Isosceles triangle"<<endl;
			}
			else	
				cout<<"Scalene triangle"<<endl;
		}
	}
	else
	{
		cin>>t;
		
		while(t--)
		{
			cin>>x1>>y1>>x2>>y2>>x3>>y3;
			
			a=dis(x1,x2,y1,y2);
			b=dis(x2,x3,y2,y3);
			c=dis(x1,x3,y1,y3);
			
			if(a==b || a==c || b==c)
			{
				cout<<"Isosceles triangle ";
			}
			else	
				cout<<"Scalene triangle ";
			
			if(a>=b && a>=c)
			{
				if(a*a==b*b+c*c)
					cout<<"right triangle"<<endl;
				else if(a*a>b*b+c*c)
					cout<<"obtuse triangle"<<endl;
				else
					cout<<"acute triangle"<<endl;
			}
			else if(b>=a && b>=c)
			{
				if(b*b==a*a+c*c)
					cout<<"right triangle"<<endl;
				else if(b*b>a*a+c*c)
					cout<<"obtuse triangle"<<endl;
				else
					cout<<"acute triangle"<<endl;
			}	
			else if(c>=b && c>=a)
			{
				if(c*c==b*b+a*a)
					cout<<"right triangle"<<endl;
				else if(c*c>b*b+a*a)
					cout<<"obtuse triangle"<<endl;
				else
					cout<<"acute triangle"<<endl;
			}
			
				
			
		}
	}
}
