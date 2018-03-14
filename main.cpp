#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string alpha="abcdefghijklmnopqrstuvwxyz ",beta="phqgiumeaylnofdxjkrcvstzwb ",word,choice,sure,newword="";
    cout<<"Ahlan ya user ya habibi"<<endl;

    while(true){
            cout<<"what do you like to do today?"<<endl;
    cout<<"1-Cipher a message"<<endl;
    cout<<"2-Decipher a message"<<endl;
    cout<<"3-End"<<endl;
    cout<<">>";
    cin>>choice;
    for(int c=0;c<choice.length();c++){
           if(int(choice[c])>=65&&int(choice[c]<=90)){
            choice[c]=char(int(choice[c]+32));
           }
        }
    while(choice!="1"&&choice!="2"&&choice!="cipher"&&choice!="decipher"&&choice!="1-cipher a message"&&choice!="2-decipher a message"&&choice!="3"&&choice!="end"&&choice!="3-end"){
        cout<<"Error,Please choose from 1, 2 or 3"<<endl;
        cin>>choice;
    }
    if(choice=="1"||choice=="cipher"||choice=="1-cipher a message"){
        cout<<"Please enter the message to cipher:"<<endl;
        word="io";
        cin.ignore();
        getline(cin,word);
        newword=word;
        for(int k=0;k<word.length();k++){
           if(int(word[k])>=65&&int(word[k]<=90)){
            word[k]=char(int(word[k]+32));
           }
        }
        for(int i=0;i<word.length();i++){
            for(int j=0;j<alpha.length();j++){
                if(word[i]==alpha[j]){
                    newword[i]=beta[j];
                    break;
                }
                if(j==alpha.length()-1){
                    newword[i]=word[i];
                    break;
                }
            }
        }

        cout<<"your cipher text is:"<<endl<<newword<<endl;
    }
    if(choice=="2"||choice=="decrypt"||choice=="2-decrypt"){
        cout<<"Please enter the message to decipher:";
        word="io";
        cin.ignore();
        getline(cin,word);
        newword=word;
        for(int k=0;k<word.length();k++){
           if(int(word[k])>=65&&int(word[k]<=90)){
            word[k]=char(int(word[k]+32));
           }
        }
        for(int i=0;i<word.length();i++){
            for(int j=0;j<beta.length();j++){
                if(word[i]==beta[j]){
                    newword[i]=alpha[j];
                    break;
                }
                if(j==alpha.length()-1){
                    newword[i]=word[i];
                    break;
                }
            }
        }
        cout<<"your plain text is:"<<endl<<newword<<endl;
    }
    if(choice=="3"||choice=="end"||choice=="3-end"){
            cout<<"Are you sure that you want end this program?"<<endl;
            cout<<"1-Yes"<<endl;
            cout<<"2-No"<<endl;
            cout<<">>";
            cin>>sure;
            while(sure!="2"&&sure!="no"&&sure!="No"&&sure!="2-no"&&sure!="2-No"&&sure!="1"&&sure!="yes"&&sure!="1-Yes"&&sure!="yes"&&sure!="1-yes"){
                    cout<<"please choose 1 or 2"<<endl;
                    cout<<">>";
                    cin>>sure;
                }
            if(sure=="1"||sure=="yes"||sure=="1-Yes"||sure=="yes"||sure=="1-yes"){
                cout<<"Thank you for using this program"<<endl;
                break;
            }
            else{
                continue;
            }

    }


    }
    return 0;
}
