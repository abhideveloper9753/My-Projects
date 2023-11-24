#include <iostream>
#include<fstream>
#include<string.h>

int main() {
  char name[30];
  int age;
  std::ofstream outfile("student.txt");
  std::cout<<"\nEnter the student name";
  std::cin>>name;
  outfile<<age;
  std::cout<<"\nEntr the student age";
  std::cin>>age;
  outfile<<age;
  outfile.close();
  std::ifstream infile("stdudent.txt");
  infile>>name;
  std::cout<<"Name="<<name;
  infile>>age;
  std::cout<<"Age="<<age;
  infile.close();
  return 0;
  
  

  
  
}