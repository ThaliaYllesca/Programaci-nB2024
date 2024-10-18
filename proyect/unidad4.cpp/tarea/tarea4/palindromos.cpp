     #include<iostream>
     #include<string>
      
      using namespace std;

      int main(){
        string palabra;

            cout<<"ingrese una palabra:";  cin>>palabra;

            bool espalindromo = true;
            int longitud = palabra.length();

        for(int i = 0; i< longitud / 2; i++){
            if(palabra[i]!= palabra[longitud - 1 -i]){
                espalindromo = false;
                break;
            }
        }

            if(espalindromo){
         cout<<palabra<<"  es un paloligramo."<<endl;
          
            }
             else {
                cout<<" no es paloligramo:"<<endl;

             }

             return 0;
      }
  