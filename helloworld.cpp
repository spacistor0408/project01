#include <iostream>
#include <math.h>

using namespace std ;

int main(){

    int input ;
    bool isSqrExist = false ;
    while ( true ) {


        cout << "please enter a value to find whether square root exist:" ;
        cin >> input ;

        for ( int i = 1 ; pow(i,2) <= input ; i++ ) {

            if ( pow(i,2) == input ) {
                isSqrExist = true ;
                break ;
            } // if
                
        } // for

        if ( isSqrExist ) {
            cout << "find the square root ! " << endl ; 
            break ; 
        }
        else {
            cout << "the value doesn't have square root" << endl ; 
        }
            
    }
    cout << endl ;
    
} // main