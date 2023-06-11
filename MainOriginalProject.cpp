/* THIS CODE IS OUR UNIVERSITY PROJECT 
I WANT TO MAKE SURE THAT NO CONCEPT OF OOP IS BEING USED IN THIS PROGRAM 
MOREOVER, THIS PROGRAM IS ONLY AND ONLY FOR SEVENTH FLEET.
ANY TYPE OF STEALING THE CODE IS NOT ALLOWED HERE. THOUGH IT IS PUBLIC REPOSITORY, BUT
IT IS REAALLY NOT FOR EVERYONE 
THIS CODE IS ONLY FOR:
MUHAMMAD HASSAN
UMAR ZULFIQAR
AMAN MIRZA
SUBHAN ALI 
ALL THE COPY RIGHTS ARE SECURED BY THESE MENTIONED ABOVE PEOPLE*/
#include<iostream>
#include<windows.h>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    std::system("cls");
    std::system(" color 5");
    Sleep(900);
    std::cout<<"          .....__* * *         * * * * * * * *                   "<<endl;
    Sleep(900);
    std::cout<<"       ___.....*       *       *                                  "<<endl;
    Sleep(900);
    std::cout<<"       ........*        *      *                                   "<<endl;
    Sleep(900);
    std::system(" color 7");
    std::cout<<"     ............*             *                                   "<<endl;
    Sleep(900);
    std::cout<<"                   *           * * * * * * * *                      "<<endl;
    Sleep(900);
    std::cout<<"                     *         *                                   "<<endl;
    Sleep(900);
    std::system(" color D");
    std::cout<<"                       *       *                                   "<<endl;
    Sleep(900);
    std::cout<<"    ........ *         *       *                                   "<<endl;
    Sleep(900);
    std::cout<<"       .......*       *        *                                   "<<endl;
    Sleep(900);
    std::cout<<"    ............* * *          *                                   "<<endl;
    Sleep(5000);
    system("cls");
    cout<<endl<<endl<<endl;
    cout<<"\n\n\n\t\t\t MADE BY \n\n\n\t\t\t\t\t\t FIRST FLEET"<<endl;
    Sleep(5000);
    std::system(" cls ");
    std::cout<<" \n\n\n\n";
    Sleep(100);
    std::cout<<"                      SPOT-FLIX                                   "<<endl;
    Sleep(100);
    std::cout<<"               EVERYTHING                                            "<<endl;
    Sleep(100);
    std::cout<<"                            YOU                                          "<<endl;
    Sleep(100);
    std::cout<<"                                 NEED                                     "<<endl;
    Sleep(1000);
    std::system(" color C");
    std::cout<<"                     IN ONE PLACE                                  "<<endl;
    Sleep(3000);
    std::system(" cls ");
    std::cout<<"              READ THOUSANDS OF NOVELS                                  "<<endl<<endl;
    Sleep(100);
    std::cout<<"                \t WATCH VAST RANGE OF T.V. SERIES AND MOVIES          "<<endl<<endl;
    Sleep(100);
    std::cout<<"                      \t LISTEN MILLIONS OF SONGS                      "<<endl<<endl;
    Sleep(100);
    std::cout<<"                             \t FOR FREE                            "<<endl<<endl;
    Sleep(5000);
    std::system(" cls ");
    std::cout<<"\n\n\n\n\n\n";
    std::cout<<".....";
    Sleep(100);
    std::cout<<".....";
    Sleep(100);
    std::cout<<".....";
    Sleep(100);
    std::cout<<"LOADING";
    Sleep(100);
    std::cout<<".....";
    Sleep(100);
    std::cout<<".....";
    Sleep(100);
    std::cout<<"....."<<endl;
    Sleep(5000);
    std::system(" cls ");
    char name[500];
    std::system(" color 6");
    std::cout<<" ENTER YOUR NAME"<<endl;
    cin.getline(name,500);
    strlen(name);
    int x;
    x=strlen(name);
    std::system(" cls ");
    for (int b = 0; b <x && !(x>500); b++)
    {
        std::cout<<name[b];
    }
    std::cout<<"      WELCOME      TO     SPOT-FLIX    "<<endl;
    std::system(" pause ");
    std::system(" cls ");
    std::cout<<" WHAT DO YOU WANT TO DO "<<endl<<endl<<endl;
    std::cout<<"                        LISTEN SONGS?             "<<endl<<endl<<endl;
    Sleep(1000);
    std::cout<<"             READ NOVELS?             "<<endl<<endl<<endl;
    Sleep(1000);
    std::cout<<"                                     WATCH MOVIES?             "<<endl<<endl<<endl;
    Sleep(1000);
    std::cout<<"                        WATCH T.V. SERIES?             "<<endl<<endl<<endl;
    Sleep(1000);
    std::system("cls ");
    std::cout<<"          SELECT ANY ONE OPTION          "<<endl<<endl;
    std::cout<<"                   1. S FOR SONGS  "<<endl;
    std::cout<<"            2. N FOR NOVELS        "<<endl;
    std::cout<<"                   3. M FOR MOVIES "<<endl;
    std::cout<<"            4. T FOR T.V. SERIES        "<<endl;
    Sleep(3000);
    std::system(" color D");
    char interest;
    std::cout<<" ENTER YOUR INTEREST:"<<endl<<endl<<endl<<endl;
     INTEREST:
    {
        cin>>interest;
    }
    if(interest=='N' || interest=='n')   
    {
        std::cout<<" GREAT YOU WANT TO READ  NOVELS!"<<endl;
        std::cout<<" VALID INPUT"<<endl;
        Sleep(1000);
        std::cout<<" COMMAND ACCEPTED"<<endl;
        Sleep(2000);
    std::system(" cls ");
    std::system(" color 6");
    std::cout<<"          SELECT ANY ONE OPTION FOR LANGUAGE"<<endl;
    std::cout<<"                   1. ENGLISH  "<<endl;
    std::cout<<"            2. URDU        "<<endl;
    std::cout<<"                   3. JAPANESE         "<<endl;
    Sleep(3000);
    string language ;
    std::cout<<" ENTER YOUR DESIRED LANGUAGE "<<endl;
     Language:
    {
        cin>>language;
    }
    if(language=="ENGLISH" || language=="english")   
    {
        std::cout<<" VALID INPUT"<<endl;
        Sleep(1000);
        std::cout<<" COMMAND ACCEPTED"<<endl;
        Sleep(1000);
        std::cout<<"..........SEARCHING.........."<<endl;
        std::system("cls");
        std::cout<<" SELECT ANY ONE CATEGORY: "<<endl;
        std::cout<<"                   1. SCIENCE FICTION  "<<endl;
        std::cout<<"        2. HISTORICAL FICTION        "<<endl;
        std::cout<<"                   3. MYSTERY  "<<endl;
        std::cout<<"            4. FICTION         "<<endl;
        std::cout<<"                   5. HORROR  "<<endl;
        std::cout<<"            6. FANTASY        "<<endl;
        std::cout<<"                   7. ROMANCE  "<<endl;
        std::cout<<"            8. BIOGRAPHY         "<<endl;
        std::cout<<" WHAT DO YOU WANT TO READ IN ENGLISH NOVELS"<<endl;
        string Cat1,Cat2;
    EnglishNovels:
        {
            std::cout<<" ENTER YOUR LOVED CATEGORY OF NOVELS "<<endl;
            cin>>Cat1>>Cat2;
        }
        if ((Cat1=="SCIENCE" || Cat1=="science") && (Cat2=="FICTION" || Cat2=="fiction"))
        {
            cout<<" HERE WE HAVE \n SOME SCIENCE FICTION NOVELS \n YOU WOULD LOVE"<<endl;
            Sleep(2000);
            system("cls");
            system("color A");
            cout<<"DUNE \n\t\t\t BY FRANK HERBERT IN 1965 "<<endl;
            Sleep(200);
            cout<<"FRANKENSTEIN \n\t\t\t BY MARY SHELLY IN 1818"<<endl;
            Sleep(200);
            cout<<"THE THREE-BODY PROBLEM \n\t\t\t BY LIU CIXIN IN 2008"<<endl;
            Sleep(200);
            cout<<"NEUROMANCER \n\t\t\t BY WILLIAM GIBSON IN 1984"<<endl;
            Sleep(200);
            cout<<"THE LEFT HAND OF DARKNESS \n\t\t\t BY URSULA K. LE GUIN IN 1969"<<endl;
            system("color B");
            Sleep(200);
            cout<<"THE ULTIMATE HITCHHIKER'S GUIDE \n\t\t\tBY DOUGLAS ADAMS IN 1979 "<<endl;
            Sleep(200);
            cout<<"HYPERSION \n\t\t\t BY DAN SIMMONS IN 1989"<<endl;
            Sleep(200);
            cout<<"THE TIME MACHINE \n\t\t\t BY H.G. WELLS IN 1895"<<endl;
            Sleep(200);
            cout<<"THE MARTIAN \n\t\t\t BY ANDY WEIR IN 2011"<<endl;
            Sleep(200);
            cout<<"DO ANDROIDS DREAM OF ELECTRIC SHEEPS? \n\t\t\t BY PHILIP K. DICK IN 1968"<<endl;
            system("color C");
            Sleep(200);
            cout<<" \n\t\t\t BY FRANK HERBERT IN 1965"<<endl;
            Sleep(200);
            cout<<" \n\t\t\t BY FRANK HERBERT IN 1965"<<endl;
            Sleep(200);
            cout<<" \n\t\t\t BY FRANK HERBERT IN 1965"<<endl;
            Sleep(200);
            cout<<" \n\t\t\t BY FRANK HERBERT IN 1965"<<endl;
            Sleep(200);
            cout<<" \n\t\t\t BY FRANK HERBERT IN 1965"<<endl;
            system("color D");
            Sleep(200);
            cout<<"DUNE \n\t\t\t BY FRANK HERBERT IN 1965"<<endl;
            Sleep(200);
            cout<<"DUNE \n\t\t\t BY FRANK HERBERT IN 1965"<<endl;
            Sleep(200);
            cout<<"DUNE \n\t\t\t BY FRANK HERBERT IN 1965"<<endl;
            Sleep(200);
            cout<<"DUNE \n\t\t\t BY FRANK HERBERT IN 1965"<<endl;
            Sleep(200);
            cout<<"DUNE \n\t\t\t BY FRANK HERBERT IN 1965"<<endl;
        }
        else if()
        {

        }
        else if()
        {

        }
        else if()
        {

        }
        else if()
        {

        }
        else if()
        {

        }
        else if()
        {

        }
        else if()
        {

        }
        else if()
        {

        }
        else 
        {

        }
    }
    else if(language=="URDU" || language=="urdu")   
    {
        cout<<" VALID INPUT"<<endl;
        Sleep(1000);
        cout<<" COMMAND ACCEPTED"<<endl;
        Sleep(1000);
        cout<<"..........SEARCHING.........."<<endl;
    } 
    else if(language=="JAPANESE" || language=="japanese")   
    {
        cout<<" VALID INPUT"<<endl;
        Sleep(1000);
        cout<<" COMMAND ACCEPTED"<<endl;
        Sleep(1000);
        cout<<"..........SEARCHING.........."<<endl;
    }
    else 
    {
        cout<<" INVALID INPUT"<<endl;
        cout<<" COMMAND NOT ACCEPTED "<<endl;
        Sleep(1000);
        cout<<" TRY AGAIN "<<endl;
        goto Language;
    }
    }
}