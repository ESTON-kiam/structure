#include <iostream>

using namespace std;

int main()
{
    struct{
    int membersID;
    string membersName;
    int membersAge;
    }members1;
    members1.membersID=1145;
    members1.membersName="Eston Kiama";
    members1.membersAge=20;
    cout<<"membersID"<< " "<<"membersName"<< " "<<"memmbersAge"<<endl;
    cout << members1.membersID << " "<< members1.membersName << " " << members1.membersAge <<endl;
//cout << members1.membersName <<endl;
//cout<<members1.membersAge<<endl;
    return 0;

}
