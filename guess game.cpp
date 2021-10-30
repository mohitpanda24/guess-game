#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>

using namespace std;
int hello (){
    char a;
 cout<<"if want to play 'p' in want to quit 'q'";
    cin>>a;
system("clear");
    


   

cout<<" _______ __   __ _______ _______ _______ " <<endl;
cout<<"|       |  | |  |       |       |       |"<<endl;
cout<<"|    ___|  | |  |    ___|  _____|  _____|"<<endl;
cout<<"|   | __|  |_|  |   |___| |_____| |_____ "<<endl;
cout<<"|   ||  |       |    ___|_____  |_____  |"<<endl;
cout<<"|   |_| |       |   |___ _____| |_____| |"<<endl;
cout<<"|_______|_______|_______|_______|_______|"<<endl;



 


    while(a == 'p'){
    

    
int num,guessednum, tries = 0;
	srand(time(0)); 
	num = rand() % 100 + 1;
	

	do
	{
        
	    cout << "Enter a guess between 1 and 100 : ";
		cin >> guessednum;
		tries++;

		if (guessednum > num)
			cout << "Too high!\n\n";
		else if (guessednum < num)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You got it in "<<tries<< " guesses!\n";
	} while (guessednum != num);
    cout<<"if want to play 'p' in want to quit 'q'";
    cin>>a;

 
    }

}


void player2(){

 char a;
cout<<"if want to play 'p' in want to quit 'q'";
    cin>>a;
system("clear");
 cout<<" _______ __   __ _______ _______ _______ " <<endl;
cout<<"|       |  | |  |       |       |       |"<<endl;
cout<<"|    ___|  | |  |    ___|  _____|  _____|"<<endl;
cout<<"|   | __|  |_|  |   |___| |_____| |_____ "<<endl;
cout<<"|   ||  |       |    ___|_____  |_____  |"<<endl;
cout<<"|   |_| |       |   |___ _____| |_____| |"<<endl;
cout<<"|_______|_______|_______|_______|_______|"<<endl;


    while(a == 'p'){      

    system("clear");
cout<<"░██████╗░██╗░░░██╗███████╗░██████╗░██████╗██╗███╗░░██╗░██████╗░  ░██████╗░░█████╗░███╗░░░███╗███████╗\n";
cout<<"██╔════╝░██║░░░██║██╔════╝██╔════╝██╔════╝██║████╗░██║██╔════╝░  ██╔════╝░██╔══██╗████╗░████║██╔════╝\n";
cout<<"██║░░██╗░██║░░░██║█████╗░░╚█████╗░╚█████╗░██║██╔██╗██║██║░░██╗░  ██║░░██╗░███████║██╔████╔██║█████╗░░\n";
cout<<"██║░░╚██╗██║░░░██║██╔══╝░░░╚═══██╗░╚═══██╗██║██║╚████║██║░░╚██╗  ██║░░╚██╗██╔══██║██║╚██╔╝██║██╔══╝░░\n";
cout<<"╚██████╔╝╚██████╔╝███████╗██████╔╝██████╔╝██║██║░╚███║╚██████╔╝  ╚██████╔╝██║░░██║██║░╚═╝░██║███████╗\n";
cout<<"░╚═════╝░░╚═════╝░╚══════╝╚═════╝░╚═════╝░╚═╝╚═╝░░╚══╝░╚═════╝░  ░╚═════╝░╚═╝░░╚═╝╚═╝░░░░░╚═╝╚══════╝\n";
        
    int num1,num2;
    string player1,player2;
    cout<<"enter your name:";
    cin>>player1;
    cout<<"enter your name: ";
    cin>>player2;
    cout<<player1<<" enter a number:";
    cin>>num1;
    system("clear");
cout<<" _______ __   __ _______ _______ _______ " <<endl;
cout<<"|       |  | |  |       |       |       |"<<endl;
cout<<"|    ___|  | |  |    ___|  _____|  _____|"<<endl;
cout<<"|   | __|  |_|  |   |___| |_____| |_____ "<<endl;
cout<<"|   ||  |       |    ___|_____  |_____  |"<<endl;
cout<<"|   |_| |       |   |___ _____| |_____| |"<<endl;
cout<<"|_______|_______|_______|_______|_______|"<<endl;
cout<<player2<<" enter the number given by "<<player1<<": ";
cin>>num2;
for(int a =1;num1 != num2;a++){

    cout<<"retry the number given by "<<player1<<": ";
    cin>>num2;
    if(a>=3 && num1!=num2){
        cout<<player1<<" wins!!!!!!!!!!!!!!!\n";break;
    }
        if  (num1 == num2 && a <= 3){
            cout<<player2<<"wins!!!!!!!!!!!\n";break;
        }
    }

       
    cout<<endl;
   
    
} 
}
int main()
{ 

    
    system("clear");
cout<<"\033[1;032m \033[1m \040[1;040m \040[1;040m ";
cout<<" _______ __   __ _______ _______ _______ " <<endl;
cout<<"|       |  | |  |       |       |       |"<<endl;
cout<<"|    ___|  | |  |    ___|  _____|  _____|"<<endl;
cout<<"|   | __|  |_|  |   |___| |_____| |_____ "<<endl;
cout<<"|   ||  |       |    ___|_____  |_____  |"<<endl;
cout<<"|   |_| |       |   |___ _____| |_____| |"<<endl;
cout<<"|_______|_______|_______|_______|_______|"<<endl;
    int onetwo;
    system("clear");
cout<<" _______ __   __ _______ _______ _______ " <<endl;
cout<<"|       |  | |  |       |       |       |"<<endl;
cout<<"|    ___|  | |  |    ___|  _____|  _____|"<<endl;
cout<<"|   | __|  |_|  |   |___| |_____| |_____ "<<endl;
cout<<"|   ||  |       |    ___|_____  |_____  |"<<endl;
cout<<"|   |_| |       |   |___ _____| |_____| |"<<endl;
cout<<"|_______|_______|_______|_______|_______|"<<endl;

    cout<<"human vs computer enter 1:\n";
    cout<<"human vs human enter 2:\n";
    cin>>onetwo;
    system("clear");
cout<<" _______ __   __ _______ _______ _______ " <<endl;
cout<<"|       |  | |  |       |       |       |"<<endl;
cout<<"|    ___|  | |  |    ___|  _____|  _____|"<<endl;
cout<<"|   | __|  |_|  |   |___| |_____| |_____ "<<endl;
cout<<"|   ||  |       |    ___|_____  |_____  |"<<endl;
cout<<"|   |_| |       |   |___ _____| |_____| |"<<endl;
cout<<"|_______|_______|_______|_______|_______|"<<endl;
   
    
    switch(onetwo){
        case(1):hello();break;
        default :player2();
    }
   
    return 0;

    }

