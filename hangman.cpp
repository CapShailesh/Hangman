
//HANGMAN (x_x)
//It requires 2 players.One player will enter the movie name
//while the other player will have to guess the movie in limited no. of chances(3 wrong guesses)
// i.e.until the MAN IS HANGED.
//	  __________
//    \        \
//    \      (x_x)
//    \      / \ \
//    \      /   \
//    \
//    \

#include<iostream>
#include<stdlib.h>
using namespace std;
class Hangman
{
	string movie,hint,blanks;
	char x;
	int c,i,f,j;
public:
	Hangman()
	{
		i=0;
		j=0;
		c=0;
	}
	void get()
	{
		cout<<"Player 1:Enter a movie name(Psst..Tell Player 2 to close his/her eyes)\n";
		getline(movie);
		cout<<"Enter some hint!\n";
		cin>>hint;
		system ("CLS");
		cout<< "Nice choice!!"<<flush; //flush forces the printing to the screen before it clears
		system ("CLS");
	}
	void hang(int c)
	{
		switch(c)
		{
			case 1:
				cout<<"| \n";
				cout<<"| \n";
				cout<<"| \n";
				cout<<"| \n";
				cout<<"| \n";
				cout<<"| \n";
				break;
			case 2:
				cout<<"__________ \n";
				cout<<"| \n";
				cout<<"| \n";
				cout<<"| \n";
				cout<<"| \n";
				cout<<"| \n";
				cout<<"| \n";
				break;
			case 3:
				cout<<"__________ \n";
				cout<<"|          \n";
				cout<<"| \n";
				cout<<"| \n";
				cout<<"|         O \n";
				cout<<"|        /|\ \n";
				cout<<"|        / \  "<<endl;
				cout<<"\n";
				break;	
			case 4:
				cout<<"__________ \n";
				cout<<"|         | \n";
				cout<<"|       (x_x) \n";
				cout<<"|       / | \ \n";
				cout<<"|        / \  "<<endl;
				cout<<"| \n";
				cout<<"| \n";
				cout<<"\n";
				cout<<"Player 1:You WIN\n"; 
				cout<<":-D\n";
				cout<<"Player 2:You LOSE\n";
				cout<<":-(\n";
				break;
		}
	}
	void play()
	{
		cout<<"Player 2:Are you ready?Lets GO!!";
		for(i=0;movie[i]!='\0';i++)
		blanks[i]='-';
		cout<<"\n";
		while(1)
		{
		        cout<<"------------------------------------------------------------------------\n";
		        if(c==2)
			{
	                        cout<<"HINT : ";
	                        cout<<hint;
	                }
	                	
			cout<<"\nEnter a letter\n";
			cin>>x;
					
			cout<<endl;
			f=1;
			for(i=0;movie[i]!='\0';i++)
			{
				if(movie[i]==x)
				{
					blanks[i]=x;
					f=0;
				}
			}
			for(i=0;blanks[i]!='\0';i++)
			cout<<blanks[i];
			cout<<endl;
			if(f==1)
			{
				c++;
				hang(c);
				if(c==4)
				return;
			}
			j=0;
			for(i=0;blanks[i]!='\0';i++)
			{
				if(blanks[i]=='-')
				{
					j=1;
					break;
				}
			}
			if(j==0)
			break;
			
			 cout<<"------------------------------------------------------------------------\n";
			 cout<<endl;
		}
		cout<<"------------------------------------------------------------------------\n";
		cout<<"Player 2:You WIN\n"; 
		cout<<":-D\n";
		cout<<"Player 1:You LOSE\n";
		cout<<":-(\n";
	}
		
 	  
};
int main()
{
	char t;
	while(1)
	{
		Hangman h;
		h.get();
		h.play();
		cout<<"Do you guys want to play again(y/n)\n";
		cin>>t;
		if(t=='n')
		{
			cout<<"Hope you enjoyed!!";
			break;
		}
	}
	return 0;
}

