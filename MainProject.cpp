/* THIS CODE IS OUR UNIVERSITY PROJECT 
I WANT TO MAKE SURE THAT NO CONCEPT OF OOP IS BEING USED IN THIS PROGRAM 
MOREOVER, THIS PROGRAM IS ONLY AND ONLY FOR SQUAD001
ANY TYPE OF STEALING THE CODE IS NOT ALLOWED HERE. THOUGH IT IS PUBLIC REPOSITORY, BUT
IT IS REAALLY NOT FOR EVERYONE 
THIS CODE IS ONLY FOR:
MUHAMMAD HASSAN
UMAR ZULFIQAR
AMAN MIRZA
SUBHAN ALI 
ALL THE COPY RIGHTS ARE SECURED BY THESE MENTIONED ABOVE PEOPLE 
AT LAST IT IS REQUESTED THAT IF ANY OUTER PERSON LOOKS THIS CODE BEFORE 15 JUNE 2023, HE CAN SUGGEST
AN EDIT ON MY SNAPCHAT WHICH IS mhassan_0007 */
#include<iostream>
#include<windows.h>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    system(" cls ");
    system(" color 5");
    Sleep(100);
    cout<<"          .....__* * *         * * * * * * * *                   "<<endl;
    Sleep(100);
    cout<<"       ___.....*       *       *                                  "<<endl;
    Sleep(100);
    cout<<"       ........*        *      *                                   "<<endl;
    Sleep(100);
    system(" color 7");
    cout<<"     ............*             *                                   "<<endl;
    Sleep(100);
    cout<<"                   *           * * * * * * * *                      "<<endl;
    Sleep(100);
    cout<<"                     *         *                                   "<<endl;
    Sleep(100);
    system(" color D");
    cout<<"                       *       *                                   "<<endl;
    Sleep(100);
    cout<<"    ........ *         *       *                                   "<<endl;
    Sleep(100);
    cout<<"       .......*       *        *                                   "<<endl;
    Sleep(100);
    cout<<"    ............* * *          *                                   "<<endl;
    Sleep(5000);
    system(" cls ");
    cout<<" \n\n\n\n";
    Sleep(100);
    cout<<"                      SPOT-FLIX                                   "<<endl;
    Sleep(100);
    cout<<"               EVERYTHING                                            "<<endl;
    Sleep(100);
    cout<<"                            YOU                                          "<<endl;
    Sleep(100);
    cout<<"                                 NEED                                     "<<endl;
    Sleep(1000);
    system(" color C");
    cout<<"                     IN ONE PLACE                                  "<<endl;
    Sleep(3000);
    system(" cls ");
    cout<<"              READ THOUSANDS OF NOVELS                                  "<<endl<<endl;
    Sleep(100);
    cout<<"                WATCH VAST RANGE OF T.V. SERIES AND MOVIES          "<<endl<<endl;
    Sleep(100);
    cout<<"                      LISTEN MILLIONS OF SONGS                      "<<endl<<endl;
    Sleep(100);
    cout<<"                             FOR FREE                            "<<endl<<endl;
    Sleep(5000);
    system(" cls ");
    cout<<"\n\n\n\n\n\n";
    cout<<".....";
    Sleep(100);
    cout<<".....";
    Sleep(100);
    cout<<".....";
    Sleep(100);
    cout<<"LOADING";
    Sleep(100);
    cout<<".....";
    Sleep(100);
    cout<<".....";
    Sleep(100);
    cout<<"....."<<endl;
    Sleep(5000);
    system(" cls ");
    char name[500];
    system(" color 6");
    cout<<" ENTER YOUR NAME"<<endl;
    cin.getline(name,500);
    strlen(name);
    int x;
    x=strlen(name);
    system(" cls ");
    for (int b = 0; b <x && !(x>500); b++)
    {
        cout<<name[b];
    }
    cout<<"      WELCOME      TO     SPOT-FLIX    "<<endl;
    system(" pause ");
    system(" cls ");
    cout<<" WHAT DO YOU WANT TO DO "<<endl<<endl<<endl;
    cout<<"                        LISTEN SONGS?             "<<endl<<endl<<endl;
    Sleep(1000);
    cout<<"             READ NOVELS?             "<<endl<<endl<<endl;
    Sleep(1000);
    cout<<"                                     WATCH MOVIES?             "<<endl<<endl<<endl;
    Sleep(1000);
    cout<<"                        WATCH T.V. SERIES?             "<<endl<<endl<<endl;
    Sleep(1000);
    system("cls ");
    cout<<"          SELEST ANY ONE OPTION          "<<endl<<endl;
    cout<<"                   1. S FOR SONGS  "<<endl;
    cout<<"            2. N FOR NOVELS        "<<endl;
    cout<<"                   3. M FOR MOVIES "<<endl;
    cout<<"            4. T FOR T.V. SERIES        "<<endl;
    Sleep(3000);
    system(" color D");
    char interest;
    cout<<" ENTER YOUR INTEREST:"<<endl<<endl<<endl<<endl;
     INTEREST:
    {
        cin>>interest;
    }
    if(interest=='N' || interest=='n')   
    {
        cout<<" GREAT YOU WANT TO READ  NOVELS!"<<endl;
        cout<<" VALID INPUT"<<endl;
        Sleep(1000);
        cout<<" COMMAND ACCEPTED"<<endl;
         Sleep(2000);
    system(" cls ");
    system(" color 6");
    cout<<"          SELECT ANY ONE OPTION FOR LANGUAGE"<<endl;
    cout<<"                   1. ENGLISH  "<<endl;
    cout<<"            2. URDU        "<<endl;
    cout<<"                   3. PUNJABI  "<<endl;
    cout<<"            4. KOREAN         "<<endl;
     cout<<"                   5. HINDI  "<<endl;
    cout<<"            6. SPANISH        "<<endl;
    cout<<"                   7. FRENCH  "<<endl;
    cout<<"            8. ARABIC         "<<endl;
     cout<<"                   9. GERMAN "<<endl;
    cout<<"            10. TURKISH        "<<endl;
    Sleep(3000);
    string language ;
    cout<<" ENTER YOUR DESIRED LANGUAGE "<<endl;
     Language:
    {
        cin>>language;
    }
    if(language=="ENGLISH" || language=="english")   
    {
        cout<<" VALID INPUT"<<endl;
        Sleep(1000);
        cout<<" COMMAND ACCEPTED"<<endl;
        Sleep(1000);
        cout<<"..........SEARCHING.........."<<endl;
        system("cls");
        cout<<" SELECT ANY ONE CATEGORY: "<<endl;
        cout<<"                   1. SCIENCE FICTION  "<<endl;
        cout<<"        2. HISTORICAL FICTION        "<<endl;
        cout<<"                   3. MYSTERY  "<<endl;
        cout<<"            4. FICTION         "<<endl;
        cout<<"                   5. HORROR  "<<endl;
        cout<<"            6. FANTASY        "<<endl;
        cout<<"                   7. ROMANCE  "<<endl;
        cout<<"            8. BIOGRAPHY         "<<endl;
        cout<<" WHAT DO YOU WANT TO READ IN ENGLISH NOVELS"<<endl;
        string Cat1, Cat2;
     EnglishNovels:
        {
            cout<<" ENTER YOUR LOVED CATEGORY OF NOVELS "<<endl;
            cin>>Cat1>>Cat2;
        }    
        if((Cat1=="SCIENCE" || Cat1=="science") && (Cat2=="fiction" || Cat2=="FICTION"))
        {
            system("cls");
            system(" color A");
            cout<<"DUNE                                                    "<<endl;
            cout<<" BY FRANK HERBERT IN 1965"<<endl;
            Sleep(2000);
            cout<<"    FRANKENSTEIN                                                "<<endl;
            cout<<" BY MARY SHELLY IN 1818"<<endl;
            Sleep(2000);
            cout<<"                THE THREE-BODY PROBLEM                           "<<endl;
            cout<<" BY LIU CIXIN IN 2008"<<endl;
            Sleep(2000);
            cout<<"                                      NEUROMANCER              "<<endl;
            cout<<" BY WILLIAM GIBSON IN 1984"<<endl;
            Sleep(2000);
            cout<<"                                                 THE LEFT HAND OF DARKNESS   "<<endl;
            cout<<" BY URSULA K. LE GUIN IN 1969"<<endl;
             Sleep(5000);
            system("cls");
             system(" color B");
            Sleep(2000);
            cout<<"                  THE ULTIMATE HITCHHIKER'S GUIDE                  "<<endl;
            cout<<" BY DOUGLAS ADAMS IN 1979"<<endl;
            Sleep(2000);
            cout<<"        HYPERSION                                                   "<<endl;
            cout<<" BY DAN SIMMONS IN 1989"<<endl;
            Sleep(2000);
            cout<<"                 THE TIME MACHINE                                   "<<endl;
            cout<<" BY H.G. WELLS IN 1895"<<endl;
            Sleep(2000);
            cout<<"                                 THE MARTIAN                                    "<<endl;
            cout<<" BY ANDY WEIR IN 2011"<<endl;
            Sleep(2000);
            cout<<"                                            DO ANDROIDS DREAM OF ELECTRIC SHEEPS?"<<endl;
            cout<<" BY PHILIP K. DICK IN 1968"<<endl;
             Sleep(5000);
            system("cls");
             system(" color C");
            Sleep(2000);
            cout<<"                                  SNOW CRASH                                     "<<endl;
            cout<<" BY NEAL STEPHENSON IN 1992"<<endl;
            Sleep(2000);
            cout<<"                A WRINKLE IN TIME                                                 "<<endl;
            cout<<" BY MADELEINE L'ENGLE IN 1962"<<endl;
            Sleep(2000);
            cout<<" NINETEEN EIGHTY-FOUR                                                                     "<<endl;
            cout<<" BY GEORGE ORWELL IN 1949"<<endl;
            Sleep(2000);
            cout<<"                     EXHALATION                                                  "<<endl;
            cout<<" BY TED CHIANG IN 2008"<<endl;
            Sleep(2000);
            cout<<"                               THE MOON IS THE HARSH MISTRESS                    "<<endl;
            cout<<" BY ROBERT A. HEINLEIN IN 1966"<<endl;
             Sleep(5000);
            system("cls");
             system(" color D");
            Sleep(2000);
            cout<<"                                                             THE FIFTH SEASON          "<<endl;
            cout<<" BY N.K. JEMISIN IN 2015"<<endl;
            Sleep(2000);
            cout<<"                                                      BINTI                   "<<endl;
            cout<<" BY NNEDI OKARAFOR IN 2015"<<endl;
            Sleep(2000);
            cout<<"                                         BRAVE NEW WORLD                         "<<endl;
            cout<<" BY ALDOUS HUXLEY IN 1932"<<endl;
            Sleep(2000);
            cout<<"                             ANNIHILATION                                      "<<endl;
            cout<<" BY JEFF VANDERMEER IN 2014"<<endl;
            Sleep(2000);
            cout<<"                     KINDRED                                               "<<endl;
            cout<<" BY OCTAVIA E. BUTLER IN 1979"<<endl;
             Sleep(5000);
            system("cls");
             system(" color E");
            Sleep(2000);
            cout<<"             SOLARIS                                                         "<<endl;
            cout<<" BY STANISLAW LEM IN 1961"<<endl;
            Sleep(2000);
            cout<<" A MEMORY CALLED EMPIRE                                        "<<endl;
            cout<<" BY ARKADY MARTIN IN 2019"<<endl;
            Sleep(2000);

        }
         else if( (Cat1=="HISTORICAL" || Cat1=="historical") && (Cat2=="FICTION" || Cat2=="fiction"))
        {
            system("cls");
             system(" color 0");
            cout<<"WAR AND PEACE                                                    "<<endl;
            cout<<" BY LEO TOLSTOY IN 1867"<<endl;
            Sleep(2000);
            cout<<"             ALL THE LIGHT WE CANNOT SEE                                                "<<endl;
            cout<<" BY ANTHONY DOERR IN 2014"<<endl;
            Sleep(2000);
            cout<<"                                        THE PILLARS OF THE EARTH                           "<<endl;
            cout<<" BY KEN FOLLETT IN 1989"<<endl;
            Sleep(2000);
            cout<<"                                                                 WOLF HALL      "<<endl;
            cout<<" BY HILARY MANTEL IN 2009"<<endl;
            Sleep(2000);
            cout<<"                                                  THE BOOK THIEF   "<<endl;
            cout<<" BY MARKUS ZUSAK IN 2005"<<endl;
             Sleep(5000);
            system("cls");
             system(" color 1");
            Sleep(2000);
            cout<<"                                     THE RED TENT                  "<<endl;
            cout<<" BY ANITA DIAMANT IN 1997"<<endl;
            Sleep(2000);
            cout<<"                             BELOVED                                     "<<endl;
            cout<<" BY TONI MORRISON IN 1987"<<endl;
            Sleep(2000);
            cout<<"                   OUTLANDER                                   "<<endl;
            cout<<" BY DIANA GABALDON IN 1991"<<endl;
            Sleep(2000);
            cout<<"A GENTLEMAN IN MOSCOW                                    "<<endl;
            cout<<" BY AMOR TOWELS IN 2016"<<endl;
            Sleep(2000);
            cout<<"                     ALIAS GRACE"<<endl;
            cout<<" BY MARGARET ATWOOD IN 1996"<<endl;
             Sleep(5000);
            system("cls");
             system(" color 2");
            Sleep(2000);
            cout<<"                                THE FOUR WINDS: A NOVEL                                     "<<endl;
            cout<<" BY KRISTIN HANNAH IN 2021"<<endl;
            Sleep(2000);
            cout<<"GIRL WITH A PEARL EARRING: A SERVANT                                                 "<<endl;
            cout<<" BY TRACY CHEVALIER IN 1999"<<endl;
            Sleep(2000);
            cout<<"                                    THE OTHER BOLEYN GIRL                           "<<endl;
            cout<<" BY PHILIPPA GREGORY IN 2001"<<endl;
            Sleep(2000);
            cout<<"                  GONE WITH THE WIND                                                 "<<endl;
            cout<<" BY MARGARET MITCHELL IN 1936"<<endl;
            Sleep(2000);
            cout<<"                                    THE NIGHTINGALE                    "<<endl;
            cout<<" BY KRISTIN HANNAH IN 2015"<<endl;
             Sleep(5000);
            system("cls");
             system(" color 3");
            Sleep(2000);
            cout<<"                                                   THE UNDERGROUND RAILROAD          "<<endl;
            cout<<" BY COLSON WHITEHEAD IN 2016"<<endl;
            Sleep(2000); 
            cout<<"                                           PACHINKO                   "<<endl;
            cout<<" BY MIN JEE LEE IN 2017"<<endl;
            Sleep(2000);
            cout<<"                       THE ENGLISH PATIENT                         "<<endl;
            cout<<" BY MICHAEL ONDAATJE IN 1992"<<endl;
            Sleep(2000);
            cout<<"THE PERSONAL LIBRARIAN                                      "<<endl;
            cout<<" BY HEATHER TERRELL IN 2021"<<endl;
            Sleep(2000);
            cout<<"                      ATONEMENT                                               "<<endl;
            cout<<" BY LAC MCEWAN IN 2001"<<endl;
             Sleep(5000);
            system("cls");
             system(" color 4");
            Sleep(2000);
            cout<<"                               THE NAME OF THE ROSE                       "<<endl;
            cout<<" BY UMBERTO ECO IN 1980"<<endl;
            Sleep(2000);
            cout<<"                                                    I, CLAUDIUS             "<<endl;
            cout<<" BY ROBERT GRAVES IN 1934"<<endl;
            Sleep(2000);
        }
        else if( Cat1=="MYSTERY" || Cat1=="mystery")
        {
            system("cls");
             system(" color 5");
            cout<<"GONE GIRL                                                    "<<endl;
            cout<<" BY GILLIAN FLYNN"<<endl;
            Sleep(2000);
            cout<<"         REBECCA                                                "<<endl;
            cout<<" BY DAPHANE DU MAURIER"<<endl;
            Sleep(2000);
            cout<<"                THE WOMAN IN WHITE                           "<<endl;
            cout<<" BY WILKIE COLLINS"<<endl;
            Sleep(2000);
            cout<<"                                  THE SILENT PATIENT      "<<endl;
            cout<<" BY ALEX MICHAELIDES"<<endl;
            Sleep(2000);
            cout<<"                                                    THE HOUND OF THE BASKERVILLES   "<<endl;
            cout<<" BY ARTHUR CONAN DOYLE"<<endl;
             Sleep(5000);
            system("cls");
             system(" color 6");
            Sleep(2000);
            cout<<"                                       THE BIG SLEEP                  "<<endl;
            cout<<" BY RAYMOND CHANDELER"<<endl;
            Sleep(2000);
            cout<<"                 THE GIRL ON THE TRAIN                                      "<<endl;
            cout<<" BY PAULA HAWKINS"<<endl;
            Sleep(2000);
            cout<<" BIG LITTLE LIES                                   "<<endl;
            cout<<" BY LIANE MORIARTY"<<endl;
            Sleep(2000);
            cout<<"                THE NAME OF THE ROSE                "<<endl;
            cout<<" BY UMBERTO ECO"<<endl;
            Sleep(2000);
            cout<<"                                    THE MALTESE FALCON"<<endl;
            cout<<" BY DASHIELL HAMMETT"<<endl;
             Sleep(5000);
            system("cls");
             system(" color 7");
            Sleep(2000);
            cout<<"                                                       THE MOONSTONE                                     "<<endl;
            cout<<" BY WILKIE COLLINS"<<endl;
            Sleep(2000);
            cout<<"                                THE GUEST LIST: A NOVEL                           "<<endl;
            cout<<" BY LUCY FOLEY"<<endl;
            Sleep(2000);
            cout<<"        THE WOMAN IN THE WINDOW               "<<endl;
            cout<<" BY A. J. FINN"<<endl;
            Sleep(2000);
            cout<<"                               THE SILENCE OF THE LAMBS        "<<endl;
            cout<<" BY THOMAS HARRIS"<<endl;
            Sleep(2000);
            cout<<"                                                       IN COLD BLOOD                    "<<endl;
            cout<<" BY TRUMAN CAPOTE"<<endl;
             Sleep(5000);
            system("cls");
             system(" color 8");
            Sleep(2000);
            cout<<"                                    THE SECRET HISTORY          "<<endl;
            cout<<" BY DONNA TARTT"<<endl;
            Sleep(2000); 
            cout<<"      THE POSTMAN ALWAYS RINGS TWICE                   "<<endl;
            cout<<" BY JAMES M. CAIN"<<endl;
            Sleep(2000);
            cout<<"                                    SHUTTER ISLAND                         "<<endl;
            cout<<" BY DENNIS LEHANE "<<endl;
            Sleep(2000);
            cout<<"                                                   MY SISTER, THE SERIAL KILLER "<<endl;
            cout<<" BY OYINKAN BRAITHWAITE"<<endl;
            Sleep(2000);
            cout<<"                              THE DAUGHTER OF TIME "<<endl;
            cout<<" BY JOSEPHINE TEY"<<endl;
             Sleep(5000);
            system("cls");
             system(" color 9");
            Sleep(2000);
            cout<<"                                                  THE TALENTED MR. RIPLEY                       "<<endl;
            cout<<" BY PATRICIA HIGHSMITH"<<endl;
       }
        else if (Cat1=="FICTION" || Cat1=="fiction")
        {
            system("cls");
             system(" color A");
            cout<<"PRIDE AND PREJUDICE                                                    "<<endl;
            cout<<" BY JANE AUSTEN"<<endl;
            Sleep(2000);
            cout<<"                   TRUST                                                "<<endl;
            cout<<" BY HERNAN DIAZ"<<endl;
            Sleep(2000);
            cout<<"                        HAPPY PLACE                           "<<endl;
            cout<<" BY EMILY HENRY"<<endl;
            Sleep(2000);
            cout<<"                                   LESSONS IN CHEMISTRY      "<<endl;
            cout<<" BY BONNIE GARMUS "<<endl;
            Sleep(2000);
            cout<<"                                                       IT ENDS WITH US   "<<endl;
            cout<<" BY COLLEEN HOOVER"<<endl;
             Sleep(5000);
            system("cls");
             system(" color B");
            Sleep(2000);
            cout<<"                                     THE GREAT GATSBUY                  "<<endl;
            cout<<" BY F.SCOTT FITZGERALD"<<endl;
            Sleep(2000);
            cout<<"        ONE HUNDRED YEARS OF SOLITUDE                                      "<<endl;
            cout<<" BY GABRIEL GARCIA MARQUEZ"<<endl;
            Sleep(2000);
            cout<<"                                     NINETEEN EIGHTY-FOUR                                   "<<endl;
            cout<<" BY GEORGE ORWELL"<<endl;
            Sleep(2000);
            cout<<"                                                         JANE EYRE                "<<endl;
            cout<<" BY CHARLOTTE BRONTE"<<endl;
            Sleep(2000);
            cout<<"                                                 BELOVED          "<<endl;
            cout<<" BY TONI MORRISON"<<endl;
             Sleep(5000);
            system("cls");
             system(" color C");
            Sleep(2000);
            cout<<"               THE INVISIBLE LIFE OF ADDIE LARUE                  "<<endl;
            cout<<" BY V. E. SCHWAB"<<endl;
            Sleep(2000);
            cout<<"         LOLITA                           "<<endl;
            cout<<" BY VLADIMIR NABOKOV"<<endl;
            Sleep(2000);
            cout<<"ANNA KARENINA               "<<endl;
            cout<<" BY LEO TOLSTOY "<<endl;
            Sleep(2000);
            cout<<"             THE SEVEN HUSBANDS OF EVELYN HUGO        "<<endl;
            cout<<" BY TAYLOR JENKINS REID"<<endl;
            Sleep(4000);
            cout<<"                                              THE CATCHER IN THE RYE             "<<endl;
            cout<<" BY J.D. SALINGER"<<endl;
             Sleep(5000);
            system("cls");
             system(" color D");
            Sleep(2000);
            cout<<"                  ONLY LOVE CAN HURT LIKE THIS          "<<endl;
            cout<<" BY PAIGE TOON"<<endl;
            Sleep(3000); 
            cout<<"   ATLAS: THE STORY OF PA SALT                      "<<endl;
            cout<<" BY LUCIDA RILEY"<<endl;
            Sleep(2000);
            cout<<"                               THE VIOLEN CONSPIRACY: A NOVEL                         "<<endl;
            cout<<" BY BRENDAN SLOCUMB "<<endl;
            Sleep(2000);
            cout<<"                                                             ULYSSES "<<endl;
            cout<<" BY JAMES JOYCE"<<endl;
            Sleep(2000);
            cout<<"                                          MIDNIGHT'S CHILDREN       "<<endl;
            cout<<" BY SALMAN RUSHDIE "<<endl;
             Sleep(5000);
            system("cls");
        }
        else if( Cat1=="HORROR" || Cat1=="horror")
        {
            system("cls");
             system(" color E");
            cout<<"THE HAUNTING OF HILL HOUSE                                                    "<<endl;
            cout<<" BY SHIRLEY JACKSON "<<endl;
            Sleep(2000);
            cout<<"                          DRACULA                                                 "<<endl;
            cout<<" BY BRAM STOKER"<<endl;
            Sleep(2000);
            cout<<"                                  RING                            "<<endl;
            cout<<" BY KOJI SUZUKI"<<endl;
            Sleep(2000);
            cout<<"                                      GHOST STORY      "<<endl;
            cout<<" BY PETER STRAUB "<<endl;
            Sleep(2000);
            cout<<"                                                  IT   "<<endl;
            cout<<" BY STEPHEN KING "<<endl;
             Sleep(5000);
            system("cls");
             system(" color F");
            Sleep(2000);
            cout<<"                                     THE EXORCIST                     "<<endl;
            cout<<" BY WILLIAM PETER BLATTY"<<endl;
            Sleep(2000);
            cout<<"                          THE SHINING       "<<endl;
            cout<<" BY STEPHEN KING"<<endl;
            Sleep(2000);
            cout<<"         HOUSE OF LEAVES                                   "<<endl;
            cout<<" BY MARK Z."<<endl;
            Sleep(2000);
            cout<<"                        THE HUNGER                "<<endl;
            cout<<" BY ALMA KATSU"<<endl;
            Sleep(2000);
            cout<<"                                   BIRD BOX          "<<endl;
            cout<<" BY JOSH MALERMAN"<<endl;
            system("cls");
             system(" color 0");
            Sleep(2000);
            cout<<"                                           INTERVIEW WITH THE VAMPIRE        "<<endl;
            cout<<" BY ANNE RICE"<<endl;
            Sleep(2000);
            cout<<"                                  THE OTHER                           "<<endl;
            cout<<" BY TOM TYRON"<<endl;
            Sleep(2000);
            cout<<"              LET THE RIGHT ONE IN               "<<endl;
            cout<<" BY JOHN AJVIDE  "<<endl;
            Sleep(2000);
            cout<<"                                  THE WOMAN IN BLACK        "<<endl;
            cout<<" BY SUSAN HILL"<<endl;
            Sleep(4000);
            cout<<"                                              WORLD WAR Z             "<<endl;
            cout<<" BY MAX BROOKS"<<endl;
             Sleep(5000);
            system("cls");
        }
        else if( Cat1=="FANTASY" || Cat1=="fantasy")
        {
            system("cls");
             system(" color 1");
            cout<<"THE NAME OF THE WIND                                                    "<<endl;
            cout<<" BY PATRICK ROTHFUSS "<<endl;
            Sleep(2000);
            cout<<"                     A GAME OF THRONES                                                 "<<endl;
            cout<<" BY GEORGE R. R. MARTIN"<<endl;
            Sleep(2000);
            cout<<"                                      THE FIFTH SEASON                            "<<endl;
            cout<<" BY N. K. JEMISINE"<<endl;
            Sleep(2000);
            cout<<"                                                      THE WAY OF KINGS     "<<endl;
            cout<<" BY BRANDON SANDERSON"<<endl;
            Sleep(2000);
            cout<<"                                  THE EYE OF THE WORLD   "<<endl;
            cout<<" BY ROBERT JORDAN"<<endl;
             Sleep(5000);
            system("cls");
             system(" color 2");
            Sleep(2000);
            cout<<"          THE LIES OF LOCKE LAMORA                     "<<endl;
            cout<<" BY SCOTT LYNCH"<<endl;
            Sleep(2000);
            cout<<"ASSASSIN APPRENTICE       "<<endl;
            cout<<" BY ROBIN HOOB"<<endl;
            Sleep(2000);
            cout<<"                   A WIZARD OF EARTHSEA                                   "<<endl;
            cout<<" BY URSULA K. LE GUIN"<<endl;
            Sleep(2000);
            cout<<"                                       THE LORD OF THE RINGS                "<<endl;
            cout<<" BY J. R. R. TOLKIEN"<<endl;
            Sleep(2000);
            cout<<"                                                            THE NIGHT CIRCUS"<<endl;
            cout<<" BY ENN MORGENSTERN"<<endl;
             Sleep(5000);
            system("cls");
             system(" color 3");
            Sleep(2000);
            cout<<"                                  MISTBORN: THE FINAL EMPIRE        "<<endl;
            cout<<" BY BRANDON SANDERSON"<<endl;
            Sleep(2000);
            cout<<"                      SIX OF CROWS                           "<<endl;
            cout<<" BY LEIGH BARDUGO"<<endl;
            Sleep(2000);
            cout<<"         AMERICAN GODS               "<<endl;
            cout<<" BY NEIL GAIMAN "<<endl;
            Sleep(2000);
            cout<<"                      THE BLADE ITSELF        "<<endl;
            cout<<" BY JOE ABERCROMBIE"<<endl;
            Sleep(4000);
            cout<<"                                       THE POPPY WAR             "<<endl;
            cout<<" BY R. F. KUANG"<<endl;
             Sleep(5000);
            system("cls");
             system(" color 4");
            Sleep(2000);
            cout<<"                                                     THE COLOUR OF MAGIC"<<endl;
            cout<<" BY TERRY PRATCHETT"<<endl;
            Sleep(2000);
            cout<<"                                 GARDENS OF THE MOON        "<<endl;
            cout<<" BY STEVEN ERICKSON"<<endl;
            Sleep(2000);
            cout<<"       CHILDREN OF BLOOD AND BONE                           "<<endl;
            cout<<" BY TOMI ADEYEMI"<<endl;
            Sleep(2000);
            cout<<"THE ONCE AND FUTURE KING               "<<endl;
            cout<<" BY T. H. WHITE"<<endl;
            Sleep(2000);
            cout<<"                         A DARKER SHADE OF MAGIC        "<<endl;
            cout<<" BY V. E. SCHWAB"<<endl;
             Sleep(5000);
            system("cls");
             system(" color 5");
            Sleep(4000);
            cout<<"                                                CIRCE             "<<endl;
            cout<<" BY MADELINE MILLER"<<endl;
        }
        else if( Cat1=="ROMANCE" || Cat1=="romance")
        {
            system("cls");
             system(" color 6");
           cout<<"THE KISS QUOTIENT                                                    "<<endl;
            cout<<" BY ............... "<<endl;
            Sleep(2000);
            cout<<"                THE HATING GAME: A NOVEL                                                 "<<endl;
            cout<<" BY SALLY THORNE"<<endl;
            Sleep(2000);
            cout<<"                                        RED, WHITE & ROYAL BLUE        "<<endl;
            cout<<" BY CASSEY MCQUISTON"<<endl;
            Sleep(2000);
            cout<<"                      SEVEN DAYS IN JUNE     "<<endl;
            cout<<" BY TIA WILLIAMS"<<endl;
            Sleep(2000);
            cout<<"          THE NOTEBOOK                "<<endl;
            cout<<" BY NICHOLAS SPARKS"<<endl;
             Sleep(5000);
            system("cls");
             system(" color 7");
            Sleep(2000);
            cout<<"CALL ME BY YOUR NAME                     "<<endl;
            cout<<" BY ANDRE ACIMAN"<<endl;
            Sleep(2000);
            cout<<"                THE TIME TRAVELER'S WIFE       "<<endl;
            cout<<" BY AUDREY NIFFENEGGER"<<endl;
            Sleep(2000);
            cout<<"                                        BOOK LOVERS "<<endl;
            cout<<" BY EMILY HENRY"<<endl;
            Sleep(2000);
            cout<<"                          ELEANOR & PARK                "<<endl;
            cout<<" BY RAINBOW ROWELL"<<endl;
            Sleep(2000);
            cout<<"           VISION IN WHITE"<<endl;
            cout<<"BY NORA ROBERTS"<<endl;
             Sleep(5000);
            system("cls");
             system(" color 8");
            Sleep(2000);
            cout<<"BARED TO YOU       "<<endl;
            cout<<" BY SYLVIA DAY"<<endl;
            Sleep(2000);
            cout<<"            THE DUKE AND I                           "<<endl;
            cout<<" BY JULIA QUINN"<<endl;
            Sleep(2000);
            cout<<"                          THE WEDDING DATE               "<<endl;
            cout<<" BY JASMINE GUILLORY"<<endl;
            Sleep(2000);
            cout<<"                                          TO ALL THE BOYS I'VE LOVED BEFORE        "<<endl;
            cout<<" BY JENNY HAN "<<endl;
            Sleep(4000);
            cout<<"                        YOU HAD ME AT HOLA             "<<endl;
            cout<<" BY ALEXIS DARIA"<<endl;
            system("cls");
             system(" color 9");
            Sleep(2000);
            cout<<"                                           INDIGO"<<endl;
            cout<<" BY BEVERLY JENKINS"<<endl;
            Sleep(2000);
            cout<<"                                                  THE PROPOSAL        "<<endl;
            cout<<" BY JASMINE GUILLORY"<<endl;
             Sleep(5000);
            system("cls");
        }
        else if( Cat1=="BIOGRAPHY" || Cat1=="biography")
        {
            system("cls");
             system(" color A");
             cout<<"STEVE JOBS                                                    "<<endl;
            cout<<" BY WALTER ISAACSON "<<endl;
            Sleep(2000);
            cout<<"           THE AUTOBIOGRAPHY OF BENJAMIN FRANKLIN                                                 "<<endl;
            cout<<" BY ............."<<endl;
            Sleep(2000);
            cout<<"                                                 BECOMING"<<endl;
            cout<<" BY MICHELLE OBAMA "<<endl;
            Sleep(2000);
            cout<<"                                        ELON MUSK     "<<endl;
            cout<<" BY ASHLEE VANCE"<<endl;
            Sleep(2000);
            cout<<"                                SHOE DOG"<<endl;
            cout<<" BY PHIL KNIGHT"<<endl;
            Sleep(2000);
            cout<<"               LEONARDO DA VINCI                     "<<endl;
            cout<<" BY WALTER ISAACSON"<<endl;
            Sleep(5000);
            system("cls");
             system(" color B");
            Sleep(2000);
            cout<<" INTO THE WILD       "<<endl;
            cout<<" BY JON KRAKAUER"<<endl;
            Sleep(2000);
            cout<<"              THE STORY OF MY LIFE "<<endl;
            cout<<" BY HELEN KELLER"<<endl;
            Sleep(2000);
            cout<<"                                  JOHN ADAMS                "<<endl;
            cout<<" BY DAVID MCCULLOUGH"<<endl;
            Sleep(2000);
            cout<<"                                                             JUST KIDS"<<endl;
            cout<<"BY PATTI SMITH"<<endl;
            Sleep(2000);
            cout<<"                                                        OPEN"<<endl;
            cout<<" BY ANDRE AGASSI"<<endl;
             Sleep(5000);
            system("cls");
             system(" color C");
            Sleep(2000);
            cout<<"                                           BORN A CRIME      "<<endl;
            cout<<" BY TERVOOR NOAH"<<endl;
            Sleep(2000);
            cout<<"                                 BOSSYPANTS  "<<endl;
            cout<<" BY TINA FEY"<<endl;
            Sleep(2000);
            cout<<"             LONG WALK TO FREEDOM     "<<endl;
            cout<<" BY NELSON MANDELA "<<endl;
             Sleep(5000);
            system("cls");
        }
        else 
        {
            cout<<" INVALID INPUT "<<endl;
            goto EnglishNovels;
        }
  
        

    }
    else if(language==" URDU " || language=="urdu")   
    {
        cout<<" VALID INPUT"<<endl;
        Sleep(1000);
        cout<<" COMMAND ACCEPTED"<<endl;
        Sleep(1000);
        cout<<"..........SEARCHING.........."<<endl;
    } 
    else if(language==" PUNJABI " || language=="punjabi")   
    {
        cout<<" VALID INPUT"<<endl;
        Sleep(1000);
        cout<<" COMMAND ACCEPTED"<<endl;
        Sleep(1000);
        cout<<"..........SEARCHING.........."<<endl;
    }
    else if(language==" KOREAN " || language=="korean")   
    {
        cout<<" VALID INPUT"<<endl;
        Sleep(1000);
        cout<<" COMMAND ACCEPTED"<<endl;
        Sleep(1000);
        cout<<"..........SEARCHING.........."<<endl;
    }
    else if(language==" HINDI  " || language=="hindi")   
    {
        cout<<" VALID INPUT"<<endl;
        Sleep(1000);
        cout<<" COMMAND ACCEPTED"<<endl;
        Sleep(1000);
        cout<<"..........SEARCHING.........."<<endl;
    }
    else if(language==" SPANISH " || language=="spanish")   
    {
        cout<<" VALID INPUT"<<endl;
        Sleep(1000);
        cout<<" COMMAND ACCEPTED"<<endl;
        Sleep(1000);
        cout<<"..........SEARCHING.........."<<endl;
    }
    else if(language==" FRENCH " || language=="french")   
    {
        cout<<" VALID INPUT"<<endl;
        Sleep(1000);
        cout<<" COMMAND ACCEPTED"<<endl;
        Sleep(1000);
        cout<<"..........SEARCHING.........."<<endl;
    }
    else if(language==" ARABIC " || language=="arabic")   
    {
        cout<<" VALID INPUT"<<endl;
        Sleep(1000);
        cout<<" COMMAND ACCEPTED"<<endl;
        Sleep(1000);
        cout<<"..........SEARCHING.........."<<endl;
    }
    else if(language==" GERMAN " || language=="german")   
    {
        cout<<" VALID INPUT"<<endl;
        Sleep(1000);
        cout<<" COMMAND ACCEPTED"<<endl;
        Sleep(1000);
        cout<<"..........SEARCHING.........."<<endl;
    }
    else if(language==" TURKISH " || language=="turkish")   
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
     else if (interest=='s' || interest=='t')
    {
        cout<<" VALID INPUT"<<endl;
        Sleep(1000);
        cout<<" COMMAND ACCEPTED"<<endl;
    }
    else if (interest=='M' || interest=='N')
    {
        cout<<" VALID INPUT"<<endl;
        Sleep(1000);
        cout<<" COMMAND ACCEPTED"<<endl;
    }
    else if (interest=='S' || interest=='T')
    {
        cout<<" VALID INPUT"<<endl;
        Sleep(1000);
        cout<<" COMMAND ACCEPTED"<<endl;
    }
    else 
    {
        cout<<" INVALID INPUT "<<endl;
        cout<<" COMMAND NOT ACCEPTED "<<endl;
        Sleep(1000);
        cout<<" TRY AGAIN "<<endl;
        goto INTEREST;
    }
   
    Sleep(2000);
    system(" cls ");
   
    
}