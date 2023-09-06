#include <iostream>

#include "array2.h"

using namespace std;

int main(){
    try{
        int sizerow, sizecolumn;
        cout << "enter size of matrix:\nrow: " << endl;
        cin >> sizerow;
        cout << "column: " << endl;
        cin >> sizecolumn;

        Matrix<int> mat(sizerow, sizecolumn);
        mat.setElement();
        cout << "matrix:" << endl;
        mat.show();

        cout << "enter indexes:\nrow: " << endl;
        int indrow, indcolumn;
        cin >> indrow;
        cout << "column: " << endl;
        cin >> indcolumn;

        int element = mat.getElement(indrow, indcolumn);
        cout << "element at this posision: " << element << endl;

        cout << "enter value of element: " << endl;
        int value;
        cin >> value;
        bool found = mat.find(value);
        if (found){
            cout << "element " << value << " found in the matrix." << endl;
        }
        else{
            cout << "element " << value << " not found in the matrix." << endl;
        }

        Matrix2<int> mat2(-5, 5, -3, 3);

        mat2.setElement();
        mat2.show();
    }
    catch (const out_of_range &e){
        cout << "exception: " << e.what() << endl;
    }

    return 0;
}