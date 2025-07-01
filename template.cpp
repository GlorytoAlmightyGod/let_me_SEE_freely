/*
    author : GlorytoAlmightyGod
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define VERY_HUGE_NUMBER 1000000

void please_print_the_array(lli[], lli, lli);
lli maximum_value_giver(lli, lli);
lli minimum_value_giver(lli, lli);
lli halfing_search(lli, lli*, lli, lli);



int main(void) {
    lli testcases;
    cin >> testcases;
    for(lli z=0;z<testcases;z++) {
        lli n;
        cin >> n;
        lli a[n+1];
        a[0] = 0;
        for(lli i=1;i<=n;i++){
            cin >> a[i];
        }






        cout<<endl;
    }
    return 0;
}


void please_print_the_array(lli data[], lli starting_index, lli ending_index) {
    for(lli i = starting_index; i <= ending_index; i++) {
        cout << data[i] << " ";
    }
    cout<<endl;
}

lli maximum_value_giver(lli first_number, lli second_number){
    if(first_number>second_number){
        return first_number;
    }
    else{
        return second_number;
    }
}

lli minimum_value_giver(lli first_number, int second_number){
    if(first_number<second_number){
        return first_number;
    }
    else{
        return second_number;
    }
}

lli halfing_search(lli key, lli my_sorted_arr[], lli first, lli last){
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
        lli middle = (first+last)/2;
        if(my_sorted_arr[middle]<key){
            return halfing_search(key,my_sorted_arr,middle,last);
        }
        else{
            return halfing_search(key,my_sorted_arr,first,middle);
        }
    }
}