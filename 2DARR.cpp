/*
#include<iostream>
using namespace std; 
main( ) 
{  
      int  s[2][2];
      int  i, j;
      cout<<"\n2D Array Input:\n";
      for(i=0;i<2;i++)
      {
        for(j=0;j<2;j++)
        {
            cout<<"\ns["<<i<<"]["<<j<<"]=  ";
            cin>>s[i][j];
        }
      } 
       
      cout<<"\nThe 2-D Array is:\n";
      for(i=0;i<2;i++)
      {
        for(j=0;j<2;j++)
        {
            cout<<"\t"<<s[i][j];
        }
        cout<<endl;
      } 
} 
*/









/*
//lecture
#include<iostream>
using namespace std;
class ARRAYADT
{
    int a[3][2];
    int i,j;
    public:
    ARRAYADT()
    {
        i=0;
        j=0;
    }
    void getDATA(int num,int x,int y);
    void putDATA(int num,int x,int y);
};
void ARRAYADT::getDATA(int num,int x,int y)
{
    i=x;
    j=y;
    a[i][j]=num;
}
void ARRAYADT::putDATA(int num,int x,int y)
{
     cout<<"the elemnts are:\n\n";
    for(i=0;i<=2;i++)
    {
         for(j=0;j<=1;j++)
         {
          cout<<"\t"<<a[i][j];
         }
         cout<<endl;
    }
}
int main()
{
    ARRAYADT s;
    int num,i,j;
    cout<<"ENTER 6 ARRAY ELEMENTS\n"<<endl;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=1;j++)
        {
          cout<<"\na["<<i<<"]["<<j<<"]=  ";
            cin>>num;
               s.getDATA(num,i,j);
        }
    }
    s.putDATA(num,i,j);
    return 0;
} */
#include<iostream>
using namespace std;
class ARRAYADT
{
    int a[3][2];
    int i,j;
    public:
    ARRAYADT()
    {
        i=0;
        j=0;
    }
    void getDATA(int num,int x,int y);
    void putDATA();
};
void ARRAYADT::getDATA(int num,int x,int y)
{
    i=x;
    j=y;
    a[i][j]=num;
}
void ARRAYADT::putDATA()
{
     cout<<"the elemnts are:\n\n";
    for(i=0;i<=2;i++)
    {
         for(j=0;j<=1;j++)
         {
          cout<<"\t"<<a[i][j];
         }
         cout<<endl;
    }
}
int main()
{
    ARRAYADT s;
    int num,i,j;
    cout<<"ENTER 6 ARRAY ELEMENTS\n"<<endl;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=1;j++)
        {
          cout<<"\na["<<i<<"]["<<j<<"]=  ";
            cin>>num;
               s.getDATA(num,i,j);
        }
    }
    s.putDATA();
    return 0;
}