#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <sys/types.h> 
#include <sys/stat.h> 
#include <unistd.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
using namespace std;
string num_to_str(int n);
void _input(int number);
void _output(int number);

int NumInRange(int l, int r){
    int temp = rand()%(r-l+1);
    return temp + l;
}




void _input_logic(fstream &fout){
  // use ( fin >>  ) and ( fout << ) instead of ( cin >> ) and( cout << )
  /* Code your logic here */
   

}



void _output_logic(fstream &fin, fstream &fout){
  // use ( fin >>  ) and ( fout << ) instead of ( cin >> ) and( cout << )
  /* Code your logic here */

}


int main(){
    srand(time(0));
    int test_cases = 2; // according to your req.
    system("mkdir TestCase");
    system("mkdir TestCase/Input");
    system("mkdir TestCase/Output");
    for(int i=0;i<test_cases;i++) _input(i) , _output(i);
    return 0;

}



void _input(int number){
   string name = "TestCase/Input/input" + num_to_str(number) + ".txt";
   fstream fout;
   fout.open(name,ios::out | ios::trunc );
   _input_logic(fout);

}

void _output(int number){

  string nameIn = "TestCase/Input/input" + num_to_str(number) + ".txt" ;
  string nameOut = "TestCase/Output/output" + num_to_str(number) + ".txt" ;
  fstream fin , fout;
  fin.open(nameIn,ios::in );
  fout.open(nameOut,ios::out | ios::trunc);
   _output_logic(fin,fout);
}

string num_to_str(int n){
  if(n<=9){
    string num = "";
    num+= char('0' + n);
    return num;
  }
  else{
    string num = "";
    while(n!=0){
      num += char(n%10 + '0' );
      n = n/10;
    }
    reverse(num.begin(),num.end());
    return num;
  }
}



