#include <iostream>
#include<math.h>
#include<conio.h>
using namespace std;
main()
{ int a,b;

 cout<< "tro choi bat dau:"<< endl;

 cout << " quy dinh keo la 1 , bua la 2, bao la 3" << endl;
cout<< " moi ban chon theo lan luot"<< endl;
cout<< " nguoi thu nhat chon truoc:" <<endl;
cin>>a ;
cout<< " nguoi thu  hai chon:"<<endl;
cin>>b;

 if( a>3 || a< 1 ){  cout << " nguoi thu nhat chon sai vui long chon tu 1-3";} else { if (a==b){ cout<< " Hai nguoi hoa nhau:";} 
 else { if (a==1 && b== 3 || a==2 && b==1 || a==3 && b==2){ cout<< " nguoi thu nhat chien thang";} 
 else { if ( b==1 && a==3 || b==2 && a==1 || b==3 && a==2){ cout<< " nguoi thu 2 chien thang";} 
 else { if (b<1|| b>3 ){ cout << " nguoi thu hai chon sai vui long chon lai 1-3";}}}}}} 
