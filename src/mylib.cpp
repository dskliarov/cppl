/** mylib.cpp ---
 *
 * Shared Library to build
 */
#include <vector>
#include <utility>

int my_lib_function() {
        return 3;
}

void insertion_sort(vector <int> & ar){
        for (int i = 0; i < ar.size(); i++) {
                tmp = std::move(ar[i]);

                int j;
                for (j=i; j > 0 && ar[j-1]>tmp; j--) {
                        ar[j] = std::move(ar[j-1]);
                }
                ar[j] = std::move(tmp);
        }

}

