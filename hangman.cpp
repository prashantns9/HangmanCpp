#include<iostream>
#include<cstring>
using namespace std;

class movie
{
	public:
		char word[20],buffword[20],noc;
		int flag,chances;
		
		movie()
		{
			strcpy(buffword,"-------------------");
			
			chances=6;
			
	
		}
	
		void guess();
		

};



void movie::guess()
		{
			
			char lett;
			cout<<"\n\n";
			for(int i=0;i<noc;i++)
			{
				if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
				{
					buffword[i]=word[i];
			
				}
				cout<<buffword[i];
			
				
			}

			cout<<"\tChances Left="<<chances;
			cout<<"\nEnter a letter";
			cin>>lett;
			flag=0;
			for(int i=0;i<noc;i++)
			{		
		
				
		
				if(word[i]==lett)
				{
					buffword[i]=word[i];
					flag=1;
				}	
		
		
			}
			if(flag==0)
			{
				chances--;
			}
			int win=1;
			for(int i=0;i<noc;i++)
			{
				if(buffword[i]=='-')
				{
					win=0;
				}
			}
			if(win==1)
			{
				for(int i=0;i<noc;i++)
				{
				
					cout<<buffword[i];
			
				
				}
				cout<<"\tYou Win\n";

				return;
			}

			if(chances>0)
			{
				guess();
				
			}
			else
			{
				cout<<"\nYou lose\n";
			}
		}
int main()
{
	
	movie mov1;

	mov1.noc=8;			//specify characters in movie name
	strcpy(mov1.word,"prashant"); //movie name

	
	mov1.guess();

	/*create more objects for more movies and call guess() by those objects*/
	
	

}

