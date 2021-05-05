#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main()
{
    using std::string;
    string response, print;
    int a, b, c;
    cout<<"Setap DOS is testing memory..."<<endl;
    Sleep(1000);
    system("cls");
    cout<<"Setap DOS is testing memory... 1 GB"<<endl;
    Sleep(500);
    system("cls");
    cout<<"Setap DOS is testing memory... 2 GB"<<endl;
    Sleep(500);
    system("cls");
    cout<<"Setap DOS is testing memory... 3 GB"<<endl;
    Sleep(500);
    system("cls");
    cout<<"Setap DOS is testing memory... 4 GB"<<endl;
    Sleep(500);
    system("cls");
    cout<<"Setap DOS is testing memory... 4 OK"<<endl;
    Sleep(2000);
    system("cls");
    cout<<"Welcome to Setap DOS 0.095"<<endl;
    cout<<"Please wait while the system is loading"<<endl;
    Sleep(2000);
    system("cls");
    cout<<"Welcome to Setap DOS 0.095"<<endl;
    cout<<"Please wait while the system is loading"<<endl;
    cout<<"3%"<<endl;
    Sleep(2000);
    system("cls");
    cout<<"Welcome to Setap DOS 0.095"<<endl;
    cout<<"Please wait while the system is loading"<<endl;
    cout<<"36%"<<endl;
    Sleep(2000);
    system("cls");
    cout<<"Welcome to Setap DOS 0.095"<<endl;
    cout<<"Please wait while the system is loading"<<endl;
    cout<<"68%"<<endl;
    Sleep(2000);
    system("cls");
    cout<<"Welcome to Setap DOS 0.095"<<endl;
    cout<<"Please wait while the system is loading"<<endl;
    cout<<"89%"<<endl;
    Sleep(2000);
    system("cls");
    cout<<"Welcome to Setap DOS 0.095"<<endl;
    cout<<"Please wait while the system is loading"<<endl;
    cout<<"99%"<<endl;
    Sleep(2000);
    system("cls");
    start:
    cout<<"Input command: ";
    cin>>response;
    if (response=="exit")
    {
        system("cls");
        cout<<"It is now save to turn off this PC"<<endl;
        return 0;
    }
    else
    {
        if (response=="print")
        {
            cout<<""<<endl;
            cout<<"Enter a word that you would like to display: ";
            cin>>print;
            cout<<print<<endl;
            cout<<""<<endl;
            cout<<"Command executed successfully."<<endl;
            cout<<""<<endl;
            goto start;
        }
        else
            if (response=="calculateplus")
             {
                cout<<""<<endl;
                cout<<"Input the first number to add: ";
                cin>>a;
                if (a==2147484647)
                    {
                        cout<<"Application terminated - Exit code: CRASH_VALUE_UNSUPPORTED"<<endl;
                        goto start;
                    }
                else
                cout<<"Input the second number to add: ";
                cin>>b;
                if (b==2147484647)
                    {
                        cout<<"Application terminated - Exit code: CRASH_VALUE_UNSUPPORTED"<<endl;
                        goto start;
                    }
                else
                cout<<""<<endl;
                c=a+b;
                cout<<a<<"+"<<b<<"="<<c<<endl;
                cout<<""<<endl;
                goto start;
             }
            else
                if (response=="calculateminus")
                {
                cout<<""<<endl;
                cout<<"Input the first number to subtract: ";
                cin>>a;
                if (a==2147484647)
                               {
                                   cout<<"Application terminated - Exit code: CRASH_VALUE_UNSUPPORTED"<<endl;
                                   goto start;
                               }
                else
                cout<<"Input the second number to subtract: ";
                cin>>b;
                if (b==2147484647)
                               {
                                   cout<<"Application terminated - Exit code: CRASH_VALUE_UNSUPPORTED"<<endl;
                                   goto start;
                               }
                else
                cout<<""<<endl;
                c=a-b;
                cout<<a<<"-"<<b<<"="<<c<<endl;
                cout<<""<<endl;
                goto start;
                }
                else
                    if (response=="help")
                     {
                       cout<<""<<endl;
                       cout<<"Note: Commands are case sensitive!"<<endl;
                       cout<<""<<endl;
                       cout<<"exit - Closes Setap DOS"<<endl;
                       cout<<"help - Opens this menu"<<endl;
                       cout<<"print - Displays a word"<<endl;
                       cout<<"clear - Clears the log"<<endl;
                       cout<<"calculateplus - Adds 2 numbers"<<endl;
                       cout<<"calculateminus - Subtracts 2 numbers"<<endl;
                       cout<<"calculatemultiply - Multiplies 2 numbers"<<endl;
                       cout<<"calculatedivide - Divides 2 numbers"<<endl;
                       cout<<""<<endl;
                       goto start;
                    }
                    else
                        if (response=="clear")
                        {
                           system("cls");
                           cout<<"Successfully cleared all lines"<<endl;
                           cout<<""<<endl;
                           goto start;
                        }
                        else
                        {
                           if (response=="calculatemultiply")
                           {
                               cout<<""<<endl;
                               cout<<"Input the first number to multiply: ";
                               cin>>a;
                               if (a==2147484647)
                               {
                                   cout<<"Application terminated - Exit code: CRASH_VALUE_UNSUPPORTED"<<endl;
                                   goto start;
                               }
                               else
                               cout<<"Input the second number to multiply: ";
                               cin>>b;
                               if (b==2147484647)
                               {
                                   cout<<"Application terminated - Exit code: CRASH_VALUE_UNSUPPORTED"<<endl;
                                   goto start;
                               }
                               else
                               cout<<""<<endl;
                               c=a*b;
                               cout<<a<<"x"<<b<<"="<<c<<endl;
                               cout<<""<<endl;
                               goto start;
                           }
                           else
                           {
                            if (response=="calculatedivide")
                             {
                               cout<<""<<endl;
                               cout<<"Input the first number to divide: ";
                               cin>>a;
                               if (a==2147484647)
                               {
                                   cout<<"Application terminated - Exit code: CRASH_VALUE_UNSUPPORTED"<<endl;
                                   goto start;
                               }
                               else
                               cout<<"Input the second number to divide: ";
                               cin>>b;
                               if (b==2147484647 || b==0)
                               {
                                   cout<<"Application terminated - Exit code: CRASH_VALUE_UNSUPPORTED"<<endl;
                                   goto start;
                               }
                               else
                               cout<<""<<endl;
                               c=a/b;
                               cout<<a<<"÷"<<b<<"="<<c<<endl;
                               cout<<""<<endl;
                               goto start;
                             }
                            else
                            {
                                if (response=="version")
                                {
                                    cout<<"Setap Disk Operating System"<<endl<<"Version 0.095 <alpha/hotfix>"<<endl<<"Setap-DOS is a friendly Command Line Interface made by Setap (setapdede)."<<endl;
                                    goto start;
                                }
                                else
                                {
                                    cout<<"Invalid command"<<endl;
                                    cout<<""<<endl;
                                    goto start;
                                }
                            }
                           }

                        }


    }

}
