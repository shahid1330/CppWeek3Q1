#include<iostream>
using namespace std;
class rev
{
	int s;
	public:
		void input()
		{
			cout<<"Enter the number : " <<endl;
				cin>>s;
		}
		void reverse_sum()
		{
		 int rev=0;
		 int *x=&s;
		 int sum=0;
		 while(*x != 0)	  
		 {
		 	int d= *x % 10;
		 	rev=rev*10+d;
		 	sum=sum+d;
		 	*x=*x/10;
		 }
		 cout<<"reverse is : "<<rev<<endl;
		 cout<<"Sum is : "<<sum;
		}
	
		
};
int main()
{
	rev ob;
	ob.input();
	ob.reverse_sum();
	return 0;
}
