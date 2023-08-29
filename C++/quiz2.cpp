#include<iostream>
using namespace std;
class PrizmaKup{
private:
    double TabanKenar;
    double Yukseklik;
    double getTabanKenarı() const;
    double getYukseklik() const;
    double getTabanAlanı() const;
    double getHacim() const;
    void HataMesajı() const;
 double getTabanKenarı(){
        /*cout<<"Taban Kenarı:";*/
        return PrizmaKup::TabanKenar;
    }
double getYukseklik(){
        /*cout<<"Yukseklık:";*/
        return PrizmaKup::Yukseklik;
    }

double getTabanAlanı(){
    double s3;
    s3=TabanKenar*TabanKenar;
    return s3;
}
double getHacim(){
    double s1,s2;
    s1=getTabanAlanı();
    s2=getYukseklik();
return s1*s2;
}
void getInfo(){
    cout<<"Yükseklik:"<<getYukseklik()<<endl;
    cout<<"Taban Kenar:"<<getTabanKenarı()<<endl;
    cout<<"Taban Alanı:"<<getTabanAlanı()<<endl;
    cout<<"Hacim"<<getHacim()<<endl;
}
void HataMesajı(){
        cout<<"Sabit olmayan nesne negatif değerler alıyor.";
        cout<<"DİKKAT !1 Değer Defult olarak atanıyor";
}
public:
    PrizmaKup(double TabanKenar=3.1,double Yukseklik=5.1);
    /*void setTabanKenar(double);
    void setYukseklik(double);*/
    void getInfo() const;
    void setYukseklik(double){
    cout<<"Yükseklik giriniz:";
    double temp;
    cin>>temp;
    if(temp>0)
        PrizmaKup::Yukseklik=temp;
    else{
  PrizmaKup::Yukseklik=2.2;
    HataMesajı();
      }     
}
void setTabanKenar(double){
    cout<<"Taban Kenar giriniz::";
    double temp2;
    cin>>temp2;
    if(temp2>0)
        PrizmaKup::TabanKenar=temp2;
    else{
  PrizmaKup::TabanKenar=1.2;
    HataMesajı();
      }     
}
       };

int main(int argc, char const *argv[])
{
    PrizmaKup p1;
    PrizmaKup p2;
    cout<<"Sabit nesne yaratılıyor...";
    p1.setTabanKenar();
    p1.setYukseklik();
    p1.getInfo();
    return 0;
}
