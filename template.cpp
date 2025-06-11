/*
    author : GlorytoAlmightyGod
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define VERY_HUGE_NUMBER 1000000

void please_print_the_array(int[], int, int);
int maximum_value_giver(int, int);
int minimum_value_giver(int, int);
int halving_search(int, int*, int, int);



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


void please_print_the_array(int data[], int starting_index, int ending_index) {
    for(int i = starting_index; i <= ending_index; i++) {
        cout << data[i] << " ";
    }
    cout<<endl;
}

int maximum_value_giver(int first_number, int second_number){
    if(first_number>second_number){
        return first_number;
    }
    else{
        return second_number;
    }
}

int minimum_value_giver(int first_number, int second_number){
    if(first_number<second_number){
        return first_number;
    }
    else{
        return second_number;
    }
}

int halving_search(int key, int my_sorted_arr[], int first, int last){
    if(last==first){
        return last;
    }
    else if(last==first+1){
        if(my_sorted_arr[last]<=key){
            return last;
        }
        else{
            return first;
        }
    }
    else{
        int middle = (first+last)/2;
        if(my_sorted_arr[middle]<=key){
            return halving_search(key,my_sorted_arr,middle,last);
        }
        else{
            return halving_search(key,my_sorted_arr,first,middle);
        }
    }
}