    #include<iostream>
    
    using namespace std ;

    int main(){

        int n;
            cout<<"ingrese el tamaño de la matriz cuadrada:";  cin>>n;

        int matriz[n][n];
        int transpuesta[n][n];
            cout<<"ingrese los elementos de la matriz:"<<endl;
            for (int i = 0; i <n; i++) {
            for (int j = 0;j < n; j++){
                cin>> matriz[i][j];
            }

    }
            for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                transpuesta[j][i]= matriz [i][j];
            }
            }
            cout<<"matriz transpuesta:"<<endl;
            for(int i = 0; i < n; i++){
            for(int j = 0 ; j < n; j++){
                 cout << matriz[j][i]<<" ";

            }
                cout << endl;
            }
            return 0;
    }