//Basic Logic
/*
Take input from user about subjects
Get the credits for each subject and the grades obtained

Write a basic math eqn to calc CG
Take the avg of grades obtained throughout the semester
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    cout << "Calculate your CGPA after internalization!" << endl;
    
    //Take input abt sub and credits
    cout << "Enter the number of subjects: ";
    int no_of_subs;
    cin >> no_of_subs;
    cout << "Enter the name of subjects and the credits per subject: (course_name credits)" << endl;
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
    vector< pair<string, int> > avg_marks(no_of_subs);
    cout << "Enter the subject name and best marks obtained in any two out of CIE-1, CIE-2 and CIE-3:" << endl;
    for(int i = 0; i < no_of_subs; ++i){
        string sub_name; cin >> sub_name;
        int a, b; cin >> a >> b;
        int avg = (a+b);
        avg_marks[i] = {sub_name, avg};
    }

    //Storing grade point for each subject
    vector<int> gp;
    for(auto &it : m){
        for(int i = 0; i < no_of_subs; ++i){
            if(it.first == avg_marks[i].first){
                if(avg_marks[i].second >= 90) gp.push_back(10*it.second);
                else if(avg_marks[i].second >= 80) gp.push_back(9*it.second);
                else if(avg_marks[i].second >= 70) gp.push_back(8*it.second);
                else if(avg_marks[i].second >= 60) gp.push_back(7*it.second);
                else if(avg_marks[i].second >= 50) gp.push_back(6*it.second);
                else if(avg_marks[i].second >= 40) gp.push_back(5*it.second);
                else gp.push_back(0);
            }
        }
    }

    int sum_gp = accumulate(gp.begin(), gp.end(), 0);
    float CG = static_cast<float>(sum_gp) / total_credits;
    cout << "Your CGPA is: " << CG << endl;

}