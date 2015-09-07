/** main.cpp ---
 */

#include <iostream>
#include <stdlib.h>
#include <numeric>
#include <vector>
#include "../include/myproj.hh"
using namespace std;
int main(void) {
        int _option;
        int _array_size;
        vector<int> _ar;
        cout << "Please enter array size:" << endl;
        cin >> _array_size;
        cout << "Please enter array as a space separeted values:" << endl;
        for(int _ar_i=0; _ar_i<_array_size; _ar_i++)
        {
                int _ar_tmp;
                cin >> _ar_tmp;
                _ar.push_back(_ar_tmp);
        }
        do{
                cout << "1) Insertion sort" << endl;
                cout << "2) Shellsort" << endl;
                cout << "3) Heapsort" << endl;
                cout << "4) Mergesort" << endl;
                cout << "5) Quicksort" << endl;
                cout << "6) Exit Program" << endl;
                cout << "Please select an option: " << endl;
                cin >> _option;
                switch (_option)
                {
                case 1:
                        break;
                case 2:
                        break;
                case 3:
                        break;
                case 4:
                        break;
                case 5:
                        break;
                }
        }while(_option != 6);
        return 0;
}

#ifdef IMPORTANT_MACRO

int my_fcn() {
        return 3;
}

#endif
