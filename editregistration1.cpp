#include<iostream>
#include<string>
#include<stdlib.h>
#include<fstream>
using namespace std;
class newuser
{
    private:
    string Name;
    int age;
    string phonenumber,Nationality,Passport,username,password;
    char gender;
    public:
   newuser(string Name,int age,string phonenumber,char gender,string Nationality,string Passport,string username,string password)
    {
        this->Name=Name;
        this->age=age;
        this->phonenumber=phonenumber;
        this->gender=gender;
        this->Nationality=Nationality;
        this->Passport=Passport;
        this->username=username;
        this->password=password;

    }
   /* void Namereg(string Name)
    {
        this->Name=Name;
    }
    void agereg(int age)
    {
        this->age;
    }
    void genderreg(char gender)
    {
        this->gender=gender;
    }
    void phonrnoreg(string phonenumber)
    {
        this->phonenumber=phonenumber;
    }
    void nationalityreg(string Nationality)
    {
        this->Nationality=Nationality;
    }*/
    void 
    display()
    {
        cout<<"Your name is "<<Name<<endl;
        cout<<"Your age is "<<age<<endl;
        cout<<"Your Phone number"<<phonenumber<<endl;
        cout<<"Your Gender is "<<gender<<endl;
        cout<<"Your Nationality is"<<Nationality<<endl;
        cout<<"Passport Number is"<<Passport<<endl;
        cout<<"Data Stored Successfull"<<endl;
        cout<<"For Safety Reasons the username and password are not Displayed"<<endl;
    }
    void inputtofileusername()//to write the input username in the usernamefile
{
    ofstream usernamefile;
    usernamefile.open("Username.txt");
    usernamefile<<username;
    usernamefile.close();
}
void inputtofilepassword()
{
    ofstream passwordfile;
    passwordfile.open("userpassword.txt");
    passwordfile<<password;
    passwordfile.close();
}
void outputfromfileusername()//to print the data from the usernamefile
{
    string line;
    ifstream usernamefile;
    usernamefile.open("Username.txt",ios::out);
    usernamefile>>line;
    cout<<"The enetered username";
    cout<<line<<endl;
    usernamefile.close();
}
void outputfromthefilepassword()
{
    string line;
    ifstream passwordfile;
    passwordfile.open("userpassword.txt");
    passwordfile>>line;
    cout<<"The Entered password";
    cout<<line<<endl;
    passwordfile.close();
}
friend voiddisplayticket();

};
string  phonenumber();
string Nationality();
char gender();
string Passportnumber();
string Username();
string Password();
void signin();
int Registration();

int main1()
{
    int choice ;
    cout<<"Welcome to the *** Airlianes" <<endl;
    cout<<"Sign in"<<endl;
    cout<<"Registration"<<endl;
    cout<<"Press 1.for signin"<<endl<<"Press 2. for the Registration "<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:cout<<"Enter the Signin options to continue to booking"<<endl;
                signin();
                break; 
        case 2:cout<<"Enter the Details to be signup"<<endl;
                Registration();
                break;
                    
    }


    return 0;
}
int Registration()
{
    string namereg,phonenumberreg,f_phonenumberreg,nationality,passportnumber,username,password;
    int agereg;
    int genderreg;
    
    cout<<"Enter Your Name "<<endl;
    cin>>namereg;
    cout<<"Enter your Age "<<endl;
    cin>>agereg; 
    phonenumberreg=phonenumber();
    genderreg=gender();
    cout<<"Phase Two registrtation"<<endl;
    passportnumber=Passportnumber();
    nationality=Nationality();
    username=Username();
    password=Password();
    newuser user(namereg,agereg,phonenumberreg,genderreg,nationality,passportnumber,username,password);
    user.display();
    user.inputtofileusername();
    user.outputfromfileusername();
    user.inputtofilepassword();
    user.outputfromthefilepassword();
    main1();
    return 0;
}
string Passportnumber()
{
    string passportnumber;
    cout<<"Enter the Passport Number"<<endl;
    cin>>passportnumber;
   // cout<<"hi";
    return passportnumber;

}
string Username()
{
    string username;
    cout<<"Enter your customized username"<<endl;
    cin>>username;
    return username;

}
string Password()
{
    string password;
    cout<<"Enter the Password "<<endl;
    cin>>password;
    return password;
}
string Nationality()//nationality function

 {
    string nationality;
    cout<<"Enter Your Nationality"<<endl;
    cin>>nationality;
    cout<<"hi"<<endl;
    return nationality;

 }

char gender()
{
    char genderreg;
    
    //convert to check the gender 
    do
    {
        cout<<"Enter your Gender"<<endl;
        cout<<"Press M for Male \n Press F for female \n Press N for third Gender"<<endl;
       cin>>genderreg;
        switch(genderreg)
    {
        case 'm':return 'M';
                break;
        case 'f':return 'F';
                break;
        case 'n':return 'N';
                break;
        default: cin.ignore(1000,'\n');
        cout<<"ENTER AGAIN"<<endl;
    }
    } while (1);
    
    
    return 'x';
    
    
}
bool check(string phone){//to check phonenumber function
    if(phone.length()!=10){
        return false;
    }
    for(int i=0;i<phone.length();i++)
    {
    if((int)phone[i]-48>=0 && (int)phone[i]-48<=9)
    {
      continue;
    }
    else
    {
      return false;
    }
  }
  return true;
}
string phonenumber(){
    string phone_number;
    cout<<"Enter your phone number: ";
    cin>>phone_number;
    while(!check(phone_number)){
        cout<<"You've enetered wrong number\nEnter your phone number: ";
        cin>>phone_number;
    }
    cout<<"You've entered right number"<<endl;
    return phone_number;
  
  
}
void signin()
{
    string usernamesignin,passwordsignin,usernamefile,passwordfile;
    int check=0;
    cout<<"Enter the username"<<endl;
    cin>>usernamesignin;
    cout<<"Enter the passsword"<<endl;
    cin>>passwordsignin;
    ifstream in;
    in.open("Username.txt");
    in>>usernamefile;
    //cout<<usernamefile;
    in.close();
    in.open("userpassword.txt");
    in>>passwordfile;
    //cout<<passwordfile;  
    in.close();
    if((usernamesignin==usernamefile)&&(passwordfile==passwordsignin))
    {
        check=1;
        cout<<"Welcome to a booking Lobby"<<endl;

    }
    else{
        cout<<"Incorrect Login Credentials"<<endl;
        main1();
    }



}
void displayticket()
{
    
}



