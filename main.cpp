#include <iostream>
#include "login_functions.h"


/*

Admin: Divya Singh, 24-6785-1008001-821, 6396283472, Diksha@123
User: Devansh Goel, 24-6785-1000001-811, 7906476851, Dev2003@goel, 600000
User: Purvi Rawat,  24-6785-1000002-812, 6398760376, Purvi123,     70000

*/



using namespace std;



int main()
{

        cout<<"\n\n*************************************************************************************\n\n";
        cout<<"\n                            *************************************";
        cout<<"\n                            |             LOGIN AS              |";
        cout<<"\n                            *************************************";
        cout<<"\n                            |          1.USER                   |\n";
        cout<<"                            |          2.ADMIN                  |\n"; 
        cout<<"                            |          3.EXIT                   |\n";       
        cout<<"                            *************************************\n";


        cout<<"\n\n*************************************************************************************\n\n";
        //asking for user choice
        cout<<"\n>>> Enter your choice::";
        int choice;
        cin>>choice;
        cout<<"\n\n*************************************************************************************\n\n";
        
    
 
    

        switch(choice)
        {
            case 1:
            {
                user_login();
                break;
            }

            case 2:
            {
                admin_login();
                break;
            }

            default:
            {       
                        string s="        PROGRAM ENDED         ";
                        cout<<"\n\n*************************************************************************************\n\n";
                        cout<<"                         "<<s<<"                            ";
                        cout<<"\n\n*************************************************************************************\n\n";
                        exit(0);

            }
        }
        
}