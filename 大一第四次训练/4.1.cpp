//
// Created by 仇皓然 on 24-11-25.
//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct student {
        int id;
        int total;
        int chinese;
  student(int id_, int total_, int chinese_) : id(id_), total(total_), chinese(chinese_) {}
};


bool compare(const student &a, const student &b) {
  if (a.total != b.total) {
    return a.total > b.total;
    }
  if(a.chinese != b.chinese){
    return a.chinese > b.chinese;
  }
  return a.id < b.id;
}

int main() {
  int n;
  cin >> n;
  vector<student> students;
  for (int i = 0; i < n; i++) {
    int chinese,math,english;
    cin>>chinese>>math>>english;
    int total = chinese + math + english;
    students.push_back(student(i,total,chinese));
    }

    sort(students.begin(),students.end(),compare);

    for (int i = 0; i < 5; i++) {
      cout << students[i].id << " "<<students[i].total<<endl;
     }
     return 0;
}