//Basic Logic
/*
Take input from user about subjects
Get the credits for each subject and the grades obtained

Write a basic math eqn to calc CG
Take the avg of grades obtained throughout the semester
*/

#include<iostream>
#include<map>
using namespace std;

int main() {
    cout << "Calculate your CGPA after internalization!" << endl;
    
    //Take input abt sub and credits
    cout << "Enter the number of subjects: ";
    int no_of_subs;
    cin >> no_of_subs;
    cout << "Enter the number of subjects and the credits per subject: (course_name credits)" << endl;
    map<string, int> m;
    int total_credits = 0;
    for(int i = 0; i < no_of_subs; ++i){
        string x; int y;
        //x is course_name and y is credits
        cin >> x >> y;
        m[x] = y;
        total_credits += y;
    }

    //Logic for marks obtained in each subject
    

}