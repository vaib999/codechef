/*#include<iostream>
#include<string.h>
using namespace std;

main()
{
	//Take input in an array
	int t;
	cin>>t;
	
	while(t--)
	{
		//if number is a palindrome then add 1 to the middle and propagate the carry to MSB and then copy left hand side 
		  //to right hand side
		char a[1000009];
		
		cin>>a;
		
		int len=strlen(a);
		int mid=len/2;
		
		int i=(len%2==0)?mid-1:mid;
		int j=mid;
		
		int flag=1,flag1=1,carry;
		while(i>=0 && j<len)
		{
			if(a[i]!=a[j])
			{
				flag=0;
				break;
			}
			i--,j++;
		}
		
		if(flag==1)
		{
			for(i=0;i<len;i++)
			{
				if(a[i]!='9')
				{
					flag1=0;
					break;
				}
			}
			
			if(flag1==1)
			{
				for(i=0;i<=len;i++)
				{
					if(i==0)
					{
						a[i]='1';
					}
					else if(i==len)
					{
						a[len]='1';
					}
					else
						a[i]='0';
				}
			}
			else
			{
				int i=(len%2==0)?mid-1:mid;
				int j=mid;
					
				carry=1;
				for(;i>=0;i--)
				{
					a[i]=a[i]+carry;
					carry=a[i]/58;
					a[i]=(a[i]%58)+(carry*48);

				}
					
				i=(len%2==0)?mid-1:mid;
				j=mid;
				
				while(i>=0 && j<len)
				{
					a[j]=a[i];
					i--,j++;
				}
			}
		}
		else
		{
			//if existing array is not palindrome then
			  //case1
			  	//copy left side to right side
			  	int i=(len%2==0)?mid-1:mid;
				int j=mid;
				
				int left=0,right=0;
				int flag=0;
				
				while(i>=0 && j<len)
				{
					if(a[j]!=a[i])
					{
						break;
						
					}
					else
					{
						a[j]=a[i];
					}
					
					i--,j++;
				}
				if(a[i]  < a[j] )
				{
					while(i>=0 && j<len)
					{
						a[j]=a[i];
						i--,j++;
					}
					
					int i=(len%2==0)?mid-1:mid;
					int j=mid;
					carry=1;
					
					while(i>=0 && j<len)
					{
						a[i]=a[i]+carry;
						carry=a[i]/58;
						a[i]=(a[i]%58)+(carry*48);
						
						a[j]=a[i];
						
						i--,j++;
					}
				}
				else
				{
					while(i>=0 && j<len)
					{
						a[j]=a[i];
						j++,i--;
					}
				}
				
				
				//if number left to the ignored digit is greater than the ignored digit(just right) it is sufficient
			  //case2
			  	//if not greater than add 1 to middle digit and propagate carry to MSB and the copy left side to right side
		}

		cout<<a<<endl;
	}	
}
*/

#include <iostream>
#include <string.h>

using namespace std;
char a[1000000];
int l;

 
void next_palin()
{
   int flag=0,k;
   for(int i=0;i<l/2;i++)
   {
       if(a[i]<a[l-1-i])
        flag=-1;
 
       else if(a[i]>a[l-1-i])
        flag=1;
 
        a[l-i-1]=a[i];
   }
 
   if(flag==-1||flag==0)
   {
       int t=0;
       if(l%2==0)
        k=l/2-1;
 
       else
        k=l/2;
 
       while(a[k-t] == '9')
		{
			a[k-t] = '0';
			a[l-1-k+t] = '0';
			t++;
		}
		a[k-t]++;
		a[l-1-k+t] = a[k-t];
   }
 
}

int main()
{
    int t,i,j;
 
    cin>>t;
    while(t--)
    {
        cin>>a;
         l=strlen(a);
 
        int flag=1;
        for(i=0;i<l;i++)
        {
            if(a[i]!='9')
            {
                flag=0;
                break;
            }
        }
 
        if(flag==1)
        {
            a[0]='1';
            a[l]='1';
            for(i=1;i<l;i++)
                a[i]='0';
            a[l+1] = '\0';
        }
        else
            next_palin();
 
        cout<<a<<endl;
    }
}

