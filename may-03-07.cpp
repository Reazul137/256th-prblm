#include<iostream>
#include<string>
using namespace std;
int main()
{
    int score;
    string grade = "F";

    cout << "This program tells you if you have passed your class, enter your score : "<<endl;
    cin >> score;

    if(score >= 60)
        grade = "p";

    cout << " Your grade "<<grade;
    cout << endl;
    return 0;
}
