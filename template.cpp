#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define VERY_HUGE_NUMBER 1000000

int minimum_of(int first_number, int second_number){
    if(first_number<second_number){
        return first_number;
    }
    else{
        return second_number;
    }
}

int maximum_of(int first_number, int second_number){
    if(first_number>second_number){
        return first_number;
    }
    else{
        return second_number;
    }
}

int highest_common_factor_of(int a, int b) {
    if (b==0) {
        return a;
    }
    else{
        return highest_common_factor_of(b, a % b);
    }
}

int least_common_multiple_of(int a, int b) {
    return (a * b) / highest_common_factor_of(a, b);
}


int halfing_search(int, int*, int, int);
void please_print_the_array(int[], int, int);



int main(void) {
    int testcases;
    cin >> testcases;
    for(int z=0;z<testcases;z++) {
        int n;
        cin >> n;
        int a[n+1];
        a[0] = 0;
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }






        cout<<endl;
    }
    return 0;
}

int halfing_search(int key, int my_sorted_arr[], int first, int last){
    if(last==first){
        return first;
    }
    else if(last==first+1){
        if(my_sorted_arr[last]<key){
            return last;
        }
        else{
            if(my_sorted_arr[last]==key){
                if(my_sorted_arr[first]==key){
                    return first;
                }
                else{
                    return last;
                }
            }
            else{
                return first;
            }
        }
    }
    else{
        int middle = (first+last)/2;
        if(my_sorted_arr[middle]<key){
            return halfing_search(key,my_sorted_arr,middle,last);
        }
        else{
            return halfing_search(key,my_sorted_arr,first,middle);
        }
    }
}

void please_print_the_array(int data[], int starting_index, int ending_index) {
    for(int i = starting_index; i <= ending_index; i++) {
        cout << data[i] << " ";
    }
    cout<<endl;
}
