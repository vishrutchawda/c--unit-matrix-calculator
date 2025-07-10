#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void logactivity(const string& activity) {
    ofstream logFile("activity_log.txt", ios::app); 
    if (logFile.is_open()) {
        logFile << activity << endl; 
        logFile.close(); 
    } else {
        cout << "Error opening log file!" << endl;
    }
}

class matrix{
public:
    
    void add(){
    string answer;
    int i,j,a,b,c,d;
    int row1,col1,row2,col2;
   
   
   do{ 
    cout<<"\033[38;2;255;0;255mEnter number of rows in 1st matrix :- \033[0m";
    cin>>row1;
    cout<<"\033[38;2;255;0;255mEnter number of columns in 1st matrix :- \033[0m";
    cin>>col1;
    cout<<"\033[38;2;255;0;255mEnter number of rows in 2nd matrix :- \033[0m";
    cin>>row2;
    cout<<"\033[38;2;255;0;255mEnter number of columns in 2nd matrix :- \033[0m";
    cin>>col2; 
    cout<<endl;
    
    int matrix1[row1][col1];
    int matrix2[row2][col2];
    int matrix3[row1][col1];
    
    
    if(row1 == row2 && col1 == col2){
     for(i=0 ; i<col1 ; i++){
     for(j=0 ; j<row1 ; j++){
      cout<<"\033[38;2;255;255;0mEnter element at ["<<i<<"] ["<<j<<"] of matrix 1 :- \033[0m";
      cin>>matrix1[i][j];
     }
     }
     for(a=0 ; a<col1 ; a++){
     for(b=0 ; b<row1 ; b++){
      cout<<"\033[38;2;255;255;0mEnter element at ["<<a<<"] ["<<b<<"] of matrix 2 :- \033[0m";
      cin>>matrix2[a][b];
     }
     }
     cout<<endl;
     cout<<"\033[38;2;255;255;255mAnswer :-"<<endl;
     for(c=0 ; c<col1 ; c++){
     for(d=0 ; d<row1 ; d++){
     matrix3[c][d] = matrix1[c][d] + matrix2[c][d];
     cout<<'\t'<<"\033[38;2;0;255;255m"<<"  "<<matrix3[c][d]<<"   "<<"\033[0m";
     }
     cout<<endl<<endl;
     }
     
     logactivity("Answer :-\n");
     for(c=0 ; c<col1 ; c++){
     for(d=0 ; d<row1 ; d++){
     
     answer += "\t  " + to_string(matrix3[c][d]) + "   ";
     }
     answer += "\n\n";
     }
     logactivity(answer);
     
     break;
    }
    
    else{
       cout<<endl;
       cout<<"\033[38;2;255;0;0mError :- Number of rows and columns in both matrix must be same!!\033[0m"<<endl; 
       cout<<endl;
    }
    
    }while(1);
    
    }
    
    void subtraction(){
    string answer;
    int i,j,a,b,c,d;
    int row1,col1,row2,col2;
  
   do{ 
    cout<<"\033[38;2;255;0;255mEnter number of rows in 1st matrix :- \033[0m";
    cin>>row1;
    cout<<"\033[38;2;255;0;255mEnter number of columns in 1st matrix :- \033[0m";
    cin>>col1;
    cout<<"\033[38;2;255;0;255mEnter number of rows in 2nd matrix :- \033[0m";
    cin>>row2;
    cout<<"\033[38;2;255;0;255mEnter number of columns in 2nd matrix :- \033[0m";
    cin>>col2; 
    cout<<endl;
    
    int matrix1[row1][col1];
    int matrix2[row2][col2];
    int matrix3[row1][col1];
    
    
    if(row1 == row2 && col1 == col2){
     for(i=0 ; i<col1 ; i++){
     for(j=0 ; j<row1 ; j++){
      cout<<"\033[38;2;255;255mEnter element at ["<<i<<"] ["<<j<<"] of matrix 1 :- \033[0m";
      cin>>matrix1[i][j];
     }
     }
     for(a=0 ; a<col1 ; a++){
     for(b=0 ; b<row1 ; b++){
      cout<<"\033[38;2;255;255mEnter element at ["<<a<<"] ["<<b<<"] of matrix 2 :- \033[0m";
      cin>>matrix2[a][b];
     }
     }
     cout<<endl;
     cout<<"\033[38;2;255;255;255mAnswer :-"<<endl;
     
     for(c=0 ; c<col1 ; c++){
     for(d=0 ; d<row1 ; d++){
     matrix3[c][d] = matrix1[c][d] - matrix2[c][d];
     cout<<'\t'<<"\033[38;2;0;255;255m"<<"  "<<matrix3[c][d]<<"   "<<"\033[0m";
     }
     cout<<endl<<endl;
     }
     
     logactivity("Answer :-\n");
     for(c=0 ; c<col1 ; c++){
     for(d=0 ; d<row1 ; d++){
     
     answer += "\t  " + to_string(matrix3[c][d]) + "   ";
     }
     answer += "\n\n";
     }
     logactivity(answer);
     
     break;
    }
    
    else{
       cout<<endl;
       cout<<"\033[38;2;255;0;0mError :- Number of rows and columns in both matrix must be same!!"<<endl; 
       cout<<endl;
    }
    
    }while(1);
    }
    
void multiplication() {
    string answer;
    int i, j, a, b, c, d;
    int row1, col1, row2, col2;

    do {
        cout<<"\033[38;2;255;0;255mEnter number of rows in 1st matrix :- \033[0m";
        cin>>row1;
        cout<<"\033[38;2;255;0;255mEnter number of columns in 1st matrix :- \033[0m";
        cin>>col1;
        cout<<"\033[38;2;255;0;255mEnter number of rows in 2nd matrix :- \033[0m";
        cin>>row2;
        cout<<"\033[38;2;255;0;255mEnter number of columns in 2nd matrix :- \033[0m";
        cin>>col2;
        cout<<endl;
        
        int matrix1[row1][col1];
        int matrix2[row2][col2];
        int matrix3[row1][col2]; 

        if (row2 == col1) {
        for (i = 0; i < col1; i++) { 
        for (j = 0; j < row1; j++) { 
        cout << "\033[38;2;255;255;0mEnter element at [" << i << "] [" << j << "] of matrix 1 :- \033[0m";
        cin >> matrix1[i][j];
         }
        }
        
        for (a = 0; a < col2; a++) { 
        for (b = 0; b < row2; b++) { 
        cout << "\033[38;2;255;255;0mEnter element at [" << a << "] [" << b << "] of matrix 2 :- \033[0m";
        cin >> matrix2[a][b];
          }
         }
        
        cout << endl;
        cout<<"\033[38;2;255;255;255mAnswer :-\033[0m"<<endl;
        
        for (c = 0; c < col2; c++) {
        for (d = 0; d < row1; d++) {
        matrix3[c][d] = 0;
        for (int k = 0; k < col1; k++) {
        matrix3[c][d] += matrix1[c][k] * matrix2[k][d];
          }
        cout<<'\t'<<"\033[38;2;0;255;255m"<<"  "<<matrix3[c][d]<<"   "<<"\033[0m"; 
         }
        cout<<endl<<endl;
          }
        
        logactivity("Answer :-\n");
        for(c=0 ; c<col2 ; c++){
        for(d=0 ; d<row1 ; d++){
        answer += "\t  " + to_string(matrix3[c][d]) + "   ";
        }
     
     answer += "\n\n";
     
     }
     
     logactivity(answer);
     
        break;
        
        }
        else {
        cout<<endl;
        cout << "\033[38;2;255;0;0mError :- Number of columns in matrix 1 and number of rows in matrix 2 must be same!!" << endl;
        cout<<endl;
        }
    } while (1);
}

    void transpose(){
    string answer;
    int row, col , i , j;
    
    cout << "\033[38;2;255;0;255mEnter number of rows :- \033[0m";
    cin >> row;
    cout << "\033[38;2;255;0;255mEnter number of columns :- \033[0m";
    cin >> col;
    cout<<endl;
    
    int matrix[row][col];
    int transpose[row][col];
    for (i = 0; i < col; i++) { 
    for (j = 0; j < row; j++) { 
    cout << "\033[38;2;255;255mEnter element at [" << i << "] [" << j << "] :- \033[0m";
    cin >> matrix[i][j];
      }
    }
    cout<<endl;
    cout<<"\033[38;2;255;255;255mAnswer :-"<<endl;
    for (int i = 0; i < col; i++) {
    for (int j = 0; j < row; j++) {
    transpose[i][j] = matrix[j][i];
    cout<<'\t'<<"\033[38;2;0;255;255m"<<"  "<<transpose[i][j]<<"   "<<"\033[0m";
    }
    cout<<endl<<endl;
  }
    
     logactivity("Answer :-\n");
     for(i=0 ; i<col ; i++){
     for(j=0 ; j<row ; j++){
     
     answer += "\t  " + to_string(transpose[i][j]) + "   ";
     }
     answer += "\n\n";
     }
     logactivity(answer);
}
    
    
};

