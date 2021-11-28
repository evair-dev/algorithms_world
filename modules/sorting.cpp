#include <iostream>

using namespace std;

namespace sorting {
    void print_array(int arr[]) {
        int size_arr = sizeof(arr);
        cout << "[";
        for (int idx = 0; idx < size_arr; idx++) {
            if( idx == size_arr - 1) {
                cout << arr[idx];
                continue;
            }
            cout << arr[idx] << ", ";
        }

        cout << "]" << endl;
    }

    int insertion_sort(int nums[]) {
        cout << "In INSERTION SORT algorithm you start with"<< endl ;
        print_array(nums);
        int len = 8;
        for( int  i = 1; i < len; i++) {
            int ref = nums[i];
            cout << "Insert number => " << nums[i] << endl;
            int j = i - 1;
            while( j >= 0 && nums[j] >= ref ) {
                cout << " -> Change position of " << nums[j] << " to " << nums[j+1] << endl << "    ";
                print_array(nums);
                nums[j+1] = nums[j];
                j -= 1;
                nums[j + 1] = ref;
            }
            cout << "Finish the loop invariant :" << endl;
            print_array(nums);
        }
        cout << "Before all the iterations" << endl;
        print_array(nums);

        return 0;
    }
}



