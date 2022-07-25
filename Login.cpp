#include <iostream>
using namespace std;

main(){
    int password = 123456;
    int input, batas = 1;

    do{
        cout <<"input the password : "; cin >> input;
        if(password == input){
            cout<<"password correct\n";
            break;
        } else {
            cout<<"wrong password, please try again\n";
            batas++;
        }
    }while(batas <= 3);

    if (batas==4){
        cout << "u have 3 times wrong to entry the password";
    }


}
