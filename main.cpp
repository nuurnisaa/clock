#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
   int h, m , s, a, err;
   err=a=0;
   while(err==0)
    {
    cout<<"Enter hour: "<<endl;
    cin>>h;
    cout<<"Enter minute: "<<endl;
    cin>>m;
    cout<<"Enter second: "<<endl;
    cin>>s;

    if(h<25&&m<60&&s<60)
        err++;

    else
        system ("cls");
    }

         while(a==0)
        {
            system("cls");
            cout<<h<<":"<<m<<":"<<s<<endl;
            Sleep(1000);
            s++;
            if(s>59) {
                s=0;
                m++;
            }
           if(m>59)
            {
            m=0;
            h++;
           }
           if(h>23)
          {
              h=0;
              }

  }
    return 0;
}
