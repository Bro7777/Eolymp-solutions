// Problem: Eolymp 7 - Roman numerals
// Link: https://basecamp.eolymp.com/en/problems/7

#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b,c;
    int k=0;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(a[i]!='+'){
            b+=a[i];
            
        }
        else if(a[i]=='+'){
            k=i;
            break;
        }
       


    }
    //cout<<b<<endl;
    int cem=0;
    for(int i=0;i<b.length();i++){
        if(i!=b.length()-1){
            if(b[i]=='I' && b[i+1]!='V' && b[i+1]!='X'){
                cem+=1;
                continue;
            }
            else if(b[i]=='I'){
                cem--;
                continue;
            }
            if(b[i]=='V'){
                cem+=5;
                continue;
            }
            if(b[i]=='X' && b[i+1]!='L' && b[i+1]!='C'){
                cem+=10;
                continue;
            }
            else if(b[i]=='X'){
                cem-=10;
                continue;
            }
            if(b[i]=='L'){
                cem+=50;
                continue;
            }
            if(b[i]=='C' && b[i+1]!='D' && b[i+1]!='M'){
                cem+=100;
                continue;
            }
            else if(b[i]=='C'){
                cem-=100;
                continue;
            }
            if(b[i]=='D'){
                cem+=500;
                continue;
            }
            if(b[i]=='M'){
                cem+=1000;
                continue;
            }
        }
        else{
            if(b[i]=='I'){
                cem+=1;
                continue;
            }
            if(b[i]=='V'){
                cem+=5;
                continue;
            }
            if(b[i]=='X'){
                cem+=10;
                continue;
            }
            if(b[i]=='L'){
                cem+=50;
                continue;
            }
            if(b[i]=='C'){
                cem+=100;
                continue;
            }
            if(b[i]=='D'){
                cem+=500;
                continue;
            }
            if(b[i]=='M'){
                cem+=1000;
                continue;
            }
            
        }

    }


    for(int i=k+1;i<a.length();i++){
        if(i!=a.length()-1){
            if(a[i]=='I' && a[i+1]!='V' && a[i+1]!='X'){
                cem+=1;
                continue;
            }
            else if(a[i]=='I'){
                cem--;
                continue;
            }
            if(a[i]=='V'){
                cem+=5;
                continue;
            }
            if(a[i]=='X' && a[i+1]!='L' && a[i+1]!='C'){
                cem+=10;
                continue;
            }
            else if(a[i]=='X'){
                cem-=10;
                continue;
            }
            if(a[i]=='L'){
                cem+=50;
                continue;
            }
            if(a[i]=='C' && a[i+1]!='D' && a[i+1]!='M'){
                cem+=100;
                continue;
            }
            else if(a[i]=='C'){
                cem-=100;
                continue;
            }
            if(a[i]=='D'){
                cem+=500;
                continue;
            }
            if(a[i]=='M'){
                cem+=1000;
                continue;
            }
        }
        else{
            if(a[i]=='I'){
                cem+=1;
                continue;
            }
            if(a[i]=='V'){
                cem+=5;
                continue;
            }
            if(a[i]=='X'){
                cem+=10;
                continue;
            }
            if(a[i]=='L'){
                cem+=50;
                continue;
            }
            if(a[i]=='C'){
                cem+=100;
                continue;
            }
            if(a[i]=='D'){
                cem+=500;
                continue;
            }
            if(a[i]=='M'){
                cem+=1000;
                continue;
            }
            
        }

    }
    //cout<<cem;
    int minlik,yuzluk,onluq,teklik;
    minlik=cem/1000;
    yuzluk=cem/100%10;
    onluq=cem/10%10;
    teklik=cem%10;

    if(minlik!=0){
        if(minlik==1){
            cout<<"M";
        }
        else if(minlik==2){
            cout<<"MM";

        }
        else if(minlik==3){
            cout<<"MMM";
        }
    }
    if(yuzluk!=0){
        if(yuzluk==9){
            cout<<"CM";
        }
        else if(yuzluk==4){
            cout<<"CD";
        }
        else if(yuzluk<4){
            for(int i=0;i<yuzluk;i++){
                cout<<"C";
            }
        }
        else if(yuzluk>=5){
            cout<<"D";
            for(int i=0;i<yuzluk-5;i++){
                cout<<"C";
            }
        }
    }
    if(onluq!=0){
        if(onluq==9){
            cout<<"XC";
        }
        else if(onluq==4){
            cout<<"XL";
        }
        else if(onluq<4){
            for(int i=0;i<onluq;i++){
                cout<<"X";
            }
        }
        else if(onluq>=5){
            cout<<"L";
            for(int i=0;i<onluq-5;i++){
                cout<<"X";
            }
        }
    }
    if(teklik!=0){
        if(teklik==9){
            cout<<"IX";
        }
        else if(teklik==4){
            cout<<"IV";
        }
        else if(teklik<4){
            for(int i=0;i<teklik;i++){
                cout<<"I";
            }
        }
        else if(teklik>=5){
            cout<<"V";
            for(int i=0;i<teklik-5;i++){
                cout<<"I";
            }
        }
    }

}
