#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL, "Turkish");
double aci1,aci2, aci3;
cout << "Bu bir üç açısı bilinen üçgen çeşidi belirleme programıdır "<<endl;
cout << "birinci açıyı giriniz";
cin >> aci1;
if (aci1 == 0 or aci1 == 180 or aci1 < 0 or aci1>180)
{
cout << "bu bir üçgen değildir";
return 0;
}
cout << "ikinci açıyı giriniz";
cin >> aci2;
if (aci2 == 0 or aci2 == 180 or aci2 < 0 or aci2>180)
{
cout << "bu bir üçgen değildir";
return 0;
}
cout << "üçüncü açıyı giriniz";
cin >> aci3;
if (aci3==3 or aci3== 180 or aci3<0 or aci3>180)
{
cout << "bu bir üçgen değildir";
return 0;
}
if (aci1 + aci2 + aci3 != 180)
{
cout << "bu bir üçgen değildir";
return 0 ;
}
else if (aci1==aci2 and aci2==aci3)
{
cout << "bu bir eşkenar üçgendir";
return 0;
}
else if (aci1 = aci2 and aci3 != aci2 and aci3 != aci1)
{
cout << "bu bir ikiz kenar üçgendir";
return 0;
}
else if (aci1 = aci3 and aci2 != aci3 and aci2 != aci1)
{
cout << "bu bir ikiz kenar üçgendir";
return 0;
}
else if (aci3 = aci2 and aci1 != aci2 and aci1 != aci3)
{
cout << "bu bir ikiz kenar üçgendir";
return 0;
}
else if (aci1 != aci2 != aci3);
{
cout << "bu bir çeşit kenar üçgendir";
return 0;
}
return 0;
}