     #include<iostream>

     using namespace std;

        int main(){
           
           int num1,num2,resp;
            num1=5;
            
      num1++;
      ++num1;
           num2=num1++;
           
           resp=num1+num2;
           cout<<num1<<"\t";
           cout<<num2<<"\t";
           cout<<resp<<"\t";

            cout<<resp;

            return 0;
        }