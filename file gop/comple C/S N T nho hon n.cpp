#include <iostream>
using namespace std;
void uocboi();
void tinhtienkaraoke();
void doitien();
void menu();
void uocboi()
{
    int a,b;
    cout<<"Tim uoc va boi chung lon nhat\n";
    cout<<"Vui long nhap a, b\n";
    cout<<"a = ";cin>>a;
    cout<<"b = ";cin>>b;
    int tich = a*b;
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    cout<<"Uoc chung lon nhat la: "<<a<<endl;
    cout<<"Boi chung lon nhat la: "<<tich/a;
}
void tinhtienkaraoke()
{
    float bill;
    int a,b;
    cout<<"Vui long nhap gio bat dau: ";cin>>a;
    cout<<"Vui long nhap gio ket thuc: ";cin>>b;
    if(a>=12&&a<23&&b>12&&b<=23)
    {
        if(a>=14&&a<=17)
        {
            if((b-a)>3)
            {
                bill = ((b-a-3)*150000*0.7+3*150000)*0.9;
            }   
            else
            {
                bill = (b-a)*150000*0.9;
            }
        }
        if((b-a)>3)
        {
            bill=(b-a-3)*150000*0.7+3*150000;
        }
        else
        {  
            bill = (b-a)*150000;
        }
    }
    else
    {
        cout<<"Quy khach nhap sai\nVui long nhap lai gio karaoke:\n"<<endl;
        tinhtienkaraoke();
    }
    cout<<"So tien can phai tra la: "<<bill;
}
void doitien()
{
    int sotien,sototien,menhgia[9] = {500,200,100,50,20,10,5,2,1};
    cout<<"Moi ban nhap so tien can doi don vi ngan dong: ";cin>>sotien;
    cout<<"So tien can doi la: "<<sotien<<" ngan VND\n";
    for(int i = 0 ; i < 9 ; i ++)
    {
        if(i==0)
        {
            while(sotien<=menhgia[i])
            {
                i++;
            }
        }
        if(sotien>=menhgia[9])
        {
            int j = sotien/menhgia[i];
            cout<<"Ban doi duoc "<<j<<" to menh gia "<<menhgia[i]<<" ngan VND\n";
            sotien -= j*menhgia[i];
            if(sotien==0)
            {
                break;
            }
        }
    }
}
void menu()
{
    int n;
    cout<<"Moi ban chon chuc nang:\n";
    cout<<"Chuc nang 1: Tim uoc chung va boi chung lon nhat\n";
    cout<<"Chuc nang 2: Tinh tien karaoke\n";
    cout<<"Chuc nang 3: Doi tien\n";
    cout<<"Chuc nang 4: Thoat chuong trinh\n";
    cout<<"Ban chon chuc nang: ";cin>>n;
    switch(n)
    {
        case 1:
        uocboi();
        break;
        case 2:
        tinhtienkaraoke();
        break;
        case 3:
        doitien();
        break;
        case 4:
        cout<<"Cam on ban da su dung chuong trinh!";
        exit(0);
        default :
        cout<<"Ban nhap sai chuc nang. Vui long nhap lai !\n"<<endl;
        menu();
    }
}
int main()
{
    menu();
    return 0;
}

