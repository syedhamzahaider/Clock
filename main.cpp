
#include<iostream>
#include<cstdlib>
#include<dos.h>
#include<conio.h>
#include<windows.h>
using namespace std;
class clock
{
public :
    int hours;
    int minuits;
    int seconds;
    int m_seconds = 1;
    int c,d,e;


        int gettime(int hours,int minuits, int seconds)
           {


            if (hours<24&&minuits<60&&seconds<60)
    main:
        {
            for(int hr=0;hr<24;hr++)
            {
            if(hours==24)
            {
                hours=12;
            }
            if (hours<24&&minuits<60&&seconds<60)

            for (int mi=0;mi<60;mi++)
            {if (hours<24&&minuits<60&&seconds<60)
                {

                    //minuits++;

                    if (minuits==60)
                    {
                      minuits=0;
                        hours++;
                    }}

                    for (int sec=0;sec<60;sec++)
                    {



                    for (int i=0;i<7;i++)
                    {
                        if (hours<24&&minuits<60&&seconds<60)
                        {
                        ++m_seconds;
                        if(m_seconds==10)
                        {
                            m_seconds=0;
                        }
                        cout<<hours<<":"<<minuits<<":"<<seconds;//<<endl;

                         if(hours>12)
                        {
                            cout<<"\tPM"<<endl;
                        }
                        else
                        {
                            cout<<"\tAM"<<endl;
                        }


                        system("cls");

                        }
                    }
                    if (seconds==60)
                     { seconds=0;
                       minuits++;
                     }
                            seconds++;



////////////////////////////////////////uncomment for the addition of two clocks/////////////////////////////////////////////////////
//                        cout<<hours<<":"<<minuits<<":"<<seconds<<endl;
//                        c=hours+hours;d=minuits+minuits;e=seconds+seconds;
//                        if  (e>=60)
//                           { e=0;e++;
//                           }
//                           if (d>=60)
//                           {d=0;d++;}
//                           if(c>=24)
//                           {c=12;c++;}
//                        cout<<"ADDITION OF THESE CLOCKS IS : "<<endl;
//                        cout<<c<<":"<<d<<":"<<e;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




            }
        }
    }
}
        else{cout<<"invalid input";}

goto main;
 }
















};
int main()
{int h,m,s;
        cout<<"ENTER HOURS : ";
        cin>>h;
        cout<<"ENTER MINUITS : ";
        cin>>m;
        cout<<"ENTER SECONDS : ";
        cin>>s;
clock me;
me.gettime(h,m,s);

}

