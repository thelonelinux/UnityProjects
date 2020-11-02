#include <iostream>
using namespace std;


bool isReverseNumber(int num){
    int rev_num=0;
    while (num>0){
        rev_num=rev_num*10+num%10;
        num=num/10;
    }
    if (rev_num==num){
        return true;
    } else{
        return false;
    }
}

int main() {
    cout<<"Hello Wrold";
    return 0;
}
