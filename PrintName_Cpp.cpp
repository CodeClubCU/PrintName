//The PRIMARY OBJECTIVE OF THIS CODEBASE IS TO
//LEARN TO USE GIT AND GITHUB AND SEND PULL REQUESTS
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    cout<<"      CodeClub CU      \n\n";
    cout<<"List of Members/Contributers:\n\n";
/*
JUST ADD YOUR NAME IN THE ARRAY BELOW AS A STRING(make sure the code works as it should)
AND COMMIT THE CHANGES USING GIT TO YOUR REPOSITORY AND
THEN SEND A PULL REQUEST
AND GET YOUR FIRST PULL REQUEST MERGED
*/
    vector<string> NameArray = {"CodeClub CU","Arkadipta Paul"};
    int j = 1;
    for (auto i = NameArray.begin(); i != NameArray.end(); ++i)
    {
        cout << j << ')' << "  " << *i << '\n';
        j++;
    }

}
