#include <iostream>
using namespace std;

int main(){
    
    int numOfCharacters;
    char symbol1;
    int lineType;
    
    int index = 0;
    
    cout << "Please, enter a number of symbols" << endl;
    cin >> numOfCharacters;
    
    cout << "Please, enter a line of characters" << endl;
    cin >> symbol1;
    
    cout << "Please, choose which line will be - " << endl << "vertical (type 1)" << endl << "or horizontal (type 2)" << endl;
    cin >> lineType;
    
    
    while (index < numOfCharacters){
        
        if(lineType == 1 ){
            cout << symbol1 << endl;
        }
        
        if ( lineType == 2){
            cout << symbol1;
        }
        
        if (lineType != 1 && lineType != 2){
            cout << "Invalid line type!";
            return 0;
        }
        
        index++;

    }

    
}
