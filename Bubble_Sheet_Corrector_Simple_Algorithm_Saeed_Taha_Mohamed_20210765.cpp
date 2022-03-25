#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// FCAI – Programming 1 – 2022 - Assignment 2
// Program Name: BubbleSheet.cpp
// Program Description: MCQ corrector Machine
// Last Modification Date: xx/xx/xxxx
// Author1 and ID and Group: Saeed Taha Mohamed 20210765
// Teaching Assistant: None
// Purpose:it calculate student bubble sheet answers and give the score at the end.
int main()
{
    // n represent number of questions that the examiner should input
    // score will increase if the student answers matches the examiner's answers
    int n,score=0;
    cout<<"Enter number of Questions"<<endl;
    cin>>n;
    // canswers array will hold the examiner's answers
    // hanswers array will hold the student's answers
    vector <char> canswers(n);
    vector <char> hanswers(n);
    cout<<"Enter correct anwsers"<<endl;
    for(int i = 0; i<n;i++){
        cin>>canswers[i];
    }
    cout<<"Enter User's answers"<<endl;
    for(int i = 0; i<n;i++){
        cin>>hanswers[i];
    }
    // Check Whether examiner's answer is equal to student answer if so score will increment
    for(int i = 0; i< n; i++){
        if(canswers[i] == hanswers[i]){
            score = score + 1;
        }
    }
    cout<<score<<endl;
    return 0;
}
