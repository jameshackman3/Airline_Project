#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void mainMenu();
void flights();
    //hello
    
    int main()
    {
        flights();
        
    }
    void flights(){
    int choiceboard,choicedest,moneyadd=0;
    int check1,check2,back,charges,choiceflight;

        do{
                check1=0;
            cout<<"Welcome to the  ABC  Airlines!"<<endl;
        cout<<"Enter your Boarding destination"<<endl;
        string flight[] = {"Dubai","Canada","UK","USA","Australia","Europe"};
        for (int i = 0; i < 6; i++)
        {
            cout<<(i+1)<<". Flight from "<<flight[i]<<endl;
        }
        cout<<"Your Choice"<<endl;
        cout<<endl;
        
        cin>>choiceboard;
        switch(choiceboard)
        {
            case 1:moneyadd=4000;
                    break;

            case 2:moneyadd=8000;
                    break;      

            case 3:moneyadd=9000;
                    break;  
            case 4:moneyadd=6000;
                    break;

            case 5:moneyadd=8000;
                    break;        
            case 6:moneyadd=7500;
                    break;

            default:cout<<"*********************Invalid Selection************************"<<endl<<endl<<endl;
                            check1=1;
                    break;     
        }

    }while(check1==1);

       do{
        check2=0;
                   cout<<"Destination "<<endl;
         string flight[] = {"Dubai","Canada","UK","USA","Australia","Europe"};
         for (int i = 0; i < 6; i++)
         {
             cout<<(i+1)<<". Flight To "<<flight[i]<<endl;
         }
         cout<<"Press the number To Enter your Destination : ";
         cin>>choicedest;
         cout<<endl;
         if(choiceboard==choicedest){
                cout<<"Boarding Station and the Destinatiion Cannot be Same"<<endl;
                check2=1;
              continue;
        }
        cout<<"Your Entered destination -"<< flight[choicedest];
        }while(check2==1);

        switch(choicedest)
        {

        
        case 1:
            cout<<"Welcome to Dubai Emirates"<<endl;
            cout<<"Enjoy the journey!"<<endl;
            cout<<endl;
            cout<<"following are the flights"<<endl;
            cout<<"1) DUB - 454"<<endl;
            cout<<"\t06-07-2022  8:00AM  10hrs  Rs. "<<14000+moneyadd<<endl;
            cout<<"2) DUB - 987"<<endl;
            cout<<"\t08-07-2022  4:00AM  9hrs  Rs."<<16000+moneyadd<<endl;
            cout<<"3) DUB - 326"<<endl;
            cout<<"\t09-07-2022  8:00AM  10hrs  Rs. "<<moneyadd+140000<<endl;
            cout<<"4) DUB - 126"<<endl;
            cout<<"\t11-07-2022  5:00PM  10hrs  Rs."<<moneyadd+10000<<endl;
            cout<<"Select the flight that you want to pick: "<<endl;
            cin>>choiceflight;
            if (choiceflight==1)
            {
                charges = 14000+moneyadd;
                cout<<"You have succesfully books the flight DUB - 454."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }else if (choiceflight==2)
            {
                charges = 16000+moneyadd;
                cout<<"You have succesfully books the flight DUB - 987."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }else if (choiceflight==3)
            {
                charges = 14000+moneyadd;
                cout<<"You have succesfully books the flight DUB - 326."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }else if (choiceflight==4)
            {
                charges = 10000+moneyadd;
                cout<<"You have succesfully books the flight DUB - 126."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }else{
                cout<<"Inavlid input, shifting to the previous menu.";
                flights();
            }
            cout<<"Press 0 to go back to the main menu."<<endl;
            cin>>back;
            if(back==0){
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            
            break;
            case 2:
            cout<<"Welcome to Canadian Airlines"<<endl;
            cout<<"Enjoy the journey!"<<endl;
            cout<<endl;
            cout<<"following are the flights"<<endl;
            cout<<"1) CA - 454"<<endl;
            cout<<"\t06-07-2022  8:00AM  10hrs  Rs. "<<14000+moneyadd<<endl;
            cout<<"2) CA - 987"<<endl;
            cout<<"\t08-07-2022  4:00AM  9hrs  Rs."<< 16000+moneyadd<<endl;
            cout<<"3) CA - 326"<<endl;
            cout<<"\t09-07-2022  8:00AM  10hrs  Rs."<< 14000+moneyadd<<endl;
            cout<<"4) CA - 126"<<endl;
            cout<<"\t11-07-2022  5:00PM  10hrs  Rs."<<15700+moneyadd<<endl;
            cout<<"Select the flight that you want to pick: "<<endl;
            cin>>choiceflight;
            if (choiceflight==1)
            {
                charges = 14000+moneyadd;
                cout<<"You have succesfully books the flight CA - 454."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }else if (choiceflight==2)
            {
                charges = 16000+moneyadd;
                cout<<"You have succesfully books the flight CA - 987."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }else if (choiceflight==3)
            {
                charges = 14000+moneyadd;
                cout<<"You have succesfully books the flight CA - 326."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }else if (choiceflight==4)
            {
                charges = 10000+moneyadd;
                cout<<"You have succesfully books the flight CA - 126."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }else{
                cout<<"Inavlid input, shifting to the previous menu.";
                flights();
            }
            cout<<"Press 0 to go back to the main menu."<<endl;
            cin>>back;
            if(back==0)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        
        case 3:
            cout<<"Welcome to United Kingdom Airlines"<<endl;
            cout<<"Enjoy the journey!"<<endl;
            cout<<endl;
            cout<<"following are the flights"<<endl;
            cout<<"1) UK - 454"<<endl;
            cout<<"\t06-07-2022  8:00AM  10hrs  Rs." <<moneyadd+14000<<endl;
            cout<<"2) UK - 987"<<endl;
            cout<<"\t08-07-2022  4:00AM  9hrs  Rs." <<16000+moneyadd<<endl;
            cout<<"3) UK - 326"<<endl;
            cout<<"\t09-07-2022  8:00AM  10hrs  Rs."<< 14000+moneyadd<<endl;
            cout<<"4) UK - 126"<<endl;
            cout<<"\t11-07-2022  5:00PM  10hrs  Rs." <<10000+moneyadd<<endl;
            cout<<"Select the flight that you want to pick: "<<endl;
            cin>>choiceflight;
            if (choiceflight==1)
            {
                charges = 14000+moneyadd;
                cout<<"You have succesfully books the flight UK - 454."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }else if (choiceflight==2)
            {
                charges = 16000+moneyadd;
                cout<<"You have succesfully books the flight UK - 987."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }else if (choiceflight==3)
            {
                charges = 14000+moneyadd;
                cout<<"You have succesfully books the flight UK - 326."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }else if (choiceflight==4)
            {
                charges = 10000+moneyadd;
                cout<<"You have succesfully books the flight UK - 126."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }else{
                cout<<"Inavlid input, shifting to the previous menu.";
                flights();
            }
            cout<<"Press 0 to go back to the main menu."<<endl;
            cin>>back;
            if(back==0)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
            
        case 4:
            cout<<"Welcome to USA Airlines"<<endl;
            cout<<"Enjoy the journey!"<<endl;
            cout<<endl;
            cout<<"following are the flights"<<endl;
            cout<<"1) USA - 454"<<endl;
            cout<<"\t06-07-2022  8:00AM  10hrs  Rs."<< moneyadd+14000<<endl;
            cout<<"2) USA - 987"<<endl;
            cout<<"\t08-07-2022  4:00AM  9hrs  Rs. "<<16000+moneyadd<<endl;
            cout<<"3) USA - 326"<<endl;
            cout<<"\t09-07-2022  8:00AM  10hrs  Rs." <<14000+moneyadd<<endl;
            cout<<"4) USA - 126"<<endl;
            cout<<"\t11-07-2022  5:00PM  10hrs  Rs. "<<10000+moneyadd<<endl;
            cout<<"Select the flight that you want to pick: "<<endl;
            cin>>choiceflight;
            if (choiceflight==1)
            {
                charges = 14000+moneyadd;
                cout<<"You have succesfully books the flight USA - 454."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }else if (choiceflight==2)
            {
                charges = 16000+moneyadd;
                cout<<"You have succesfully books the flight USA - 987."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }else if (choiceflight==3)
            {
                charges = 14000+moneyadd;
                cout<<"You have succesfully books the flight USA - 326."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }else if (choiceflight==4)
            {
                charges = 10000+moneyadd;
                cout<<"You have succesfully books the flight USA - 126."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }else{
                cout<<"Inavlid input, shifting to the previous menu.";
                flights();
            }
            cout<<"Press 0 to go back to the main menu."<<endl;
            cin>>back;
            if(back==0)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        case 5:
            cout<<"Welcome to Australian Airlines"<<endl;
            cout<<"Enjoy the journey!"<<endl;
            cout<<endl;
            cout<<"following are the flights"<<endl;
            cout<<"1) AS - 454"<<endl;
            cout<<"\t06-07-2022  8:00AM  10hrs  Rs."<< 14000+moneyadd<<endl;
            cout<<"2) AS - 987"<<endl;
            cout<<"\t08-07-2022  4:00AM  9hrs  Rs. "<<16000+moneyadd<<endl;
            cout<<"3) AS - 326"<<endl;
            cout<<"\t09-07-2022  8:00AM  10hrs  Rs." <<14000+moneyadd<<endl;
            cout<<"4) AS - 126"<<endl;
            cout<<"\t11-07-2022  5:00PM  10hrs  Rs." <<10000+moneyadd<<endl;
            cout<<"Select the flight that you want to pick: "<<endl;
            cin>>choiceflight;
            if (choiceflight==1)
            {
                charges = 14000+moneyadd;
                cout<<"You have succesfully books the flight AS - 454."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }else if (choiceflight==2)
            {
                charges = 16000+moneyadd;
                cout<<"You have succesfully books the flight AS - 987."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }else if (choiceflight==3)
            {
                charges = 14000+moneyadd;
                cout<<"You have succesfully books the flight AS - 326."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }else if (choiceflight==4)
            {
                charges = 10000+moneyadd;
                cout<<"You have succesfully books the flight AS - 126."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }else{
                cout<<"Invalid input, shifting to the previous menu.";
                flights();
            }
            cout<<"Press 0 to go back to the main menu."<<endl;
            cin>>back;
            if(back==0)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
            case 6:
            cout<<"Welcome to Europian Airlines"<<endl;
            cout<<"Enjoy the journey!"<<endl;
            cout<<endl;
            cout<<"following are the flights"<<endl;
            cout<<"1) EU - 454"<<endl;
            cout<<"\t06-07-2022  8:00AM  10hrs  Rs."<< 14000+moneyadd<<endl;
            cout<<"2) EU - 987"<<endl;
            cout<<"\t08-07-2022  4:00AM  9hrs  Rs. "<<16000+moneyadd<<endl;
            cout<<"3) EU - 326"<<endl;
            cout<<"\t09-07-2022  8:00AM  10hrs  Rs." <<14000+moneyadd<<endl;
            cout<<"4) EU - 126"<<endl;
            cout<<"\t11-07-2022  5:00PM  10hrs  Rs. "<<10000+moneyadd<<endl;
            cout<<"Select the flight that you want to pick: "<<endl;
            cin>>choiceflight;
            if (choiceflight==1)
            {
                charges = 14000+moneyadd;
                cout<<"You have succesfully books the flight EU - 454."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }else if (choiceflight==2)
            {
                charges = 16000+moneyadd;
                cout<<"You have succesfully books the flight EU - 987."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }else if (choiceflight==3)
            {
                charges = 14000+moneyadd;
                cout<<"You have succesfully books the flight EU - 326."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }else if (choiceflight==4)
            {
                charges = 10000+moneyadd;
                cout<<"You have succesfully books the flight EU - 126."<<endl;
                cout<<"You can go back to menu and get the ticket!"<<endl;
                cout<<charges;
            }
            else{
                cout<<"Invalid input, shifting to the previous menu.";
                flights();
            }
            cout<<"Press 0 to go back to the main menu."<<endl;
            cin>>back;
            if(back==0)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
            
        default:
            cout<<"Invalid input, shifting to the main menu.";
            mainMenu();
            break;
        }
        
       
        
        }   
    
    void mainMenu()
    {
        cout<<"You got successfully exited"<<endl;
    }