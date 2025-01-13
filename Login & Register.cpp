#include<iostream>
#include<string.h>
#include<vector>
#include<conio.h>
using namespace std;
class User
{
private:
   string password,username;
public:
    User(string name,string pass)
    {
        username=name;
        password=pass;
    }
  string  getusername()
    {
        return username;
    }
    string getpass()
    {
        return password;
    }
};
class UserManager
{
private:
    vector<User>users;
public:
    Registeruser()
    {
        string username,password;
        cin.ignore();
        cout<<"Enter User Name"<<endl;
        getline(cin,username);
        cout<<"Enter Password"<<endl;
        cin>>password;
        User newuser(username,password);
        users.push_back(newuser);
        cout<<"Register Successfully...\n"<<endl;
    }
     int l=0;
  login(string name,string pass)
    {
        for(int a=0;a<users.size();a++)
        {
            if(users[a].getusername()==name&&users[a].getpass()==pass)
            {
               l++;
            }
        }
            if(l>0)
            {
                cout<<"Log In Successfully.\n"<<endl;
            }
            else
            {
                cout<<"Invalid Login.\n"<<endl;

            }
    }
    show()
    {
        cout<<"User List"<<endl;
        for(int i=0;i<users.size();i++)
        {
            cout<<users[i].getusername()<<endl;
        }
    }
    Search(string username)
    {
        int s=0;
        for(int i=0;i<users.size();i++)
        {
            if(users[i].getusername()==username)
            {
                s++;
            }
        }
        if(s>0)
        {

                cout<<"User Found.\n"<<endl;

        }

            else
            {
                cout<<"Not Found"<<endl;

            }

    }
    Delete(string user)
    {
        int d=0;
        for(int i=0;i<users.size();i++)
        {
            if(users[i].getusername()==user)
            {
                d++;
                users.erase(users.begin()+i);
            }
        }
                if(d>0)
                {
                cout<<"User Removed Successfully.\n"<<endl;
                }
            else
            {
                cout<<"This User Does Not Exist In The List.\n"<<endl;
            }

    }
};
int main()
{
    UserManager um;
    int op;
    char choice;
    do{
            system("cls");
     cout<<"\t\t\t\t\tRegister & Log In List\n"<<endl;
    cout<<"\t\t\t\t\t1. Register User "<<endl;
    cout<<"\t\t\t\t\t2. Log in "<<endl;
    cout<<"\t\t\t\t\t3. Show User List "<<endl;
    cout<<"\t\t\t\t\t4. Search User "<<endl;
    cout<<"\t\t\t\t\t5. Delete User "<<endl;
    cout<<"\t\t\t\t\t6. Exit "<<endl;
    cout<<"Enter Your Choice "<<endl;
    cin>>op;
    switch(op){
    case 1:
        {
        um.Registeruser();

break;
        }
    case 2:
        {
            string username,password;
            cout<<"Enter User Name :";
            cin>>username;
            cout<<"Enter Password :";
            cin>>password;
            um.login(username,password);
            break;
        }
    case 3:
        {
            um.show();
            break;
        }
    case 4:
        {
            string n;
            cout<<"Enter Name You Want To Search"<<endl;
            cin>>n;
            um.Search(n);
            break;
        }
    case 5:
        {
            string use;
            cout<<"Enter User Name You Want To Delete"<<endl;
            cin>>use;
            um.Delete(use);
            break;
        }
    case 6:
        {

            cout<<"Exit Successfully "<<endl;
            break;
        }
    default:
        {
            cout<<"Invalid Number!!"<<endl;
        }
    }
cout<<"\t\t\t\t\tDo You Want TO Continue?\n\t\t\t\t\t\t\t\t[Yes/No]\nPress 'y/Y' for Yes and Press 'n/N' for No : ";
cin>>choice;}
while(choice=='y'||choice=='Y');
getch();
}

