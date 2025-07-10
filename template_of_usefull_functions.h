lli key_present_in_distinct_sorted_array_at_index(lli, vector <lli>, lli, lli);
lli value_just_greater_than_key_in_my_sorted_array_with_distinct_elements(lli, vector <lli>, lli, lli);
lli value_just_smaller_than_key_in_my_sorted_array_with_distinct_elements(lli, vector <lli>, lli, lli);
void please_print_the_array (INT[], INT, INT);























lli key_present_in_distinct_sorted_array_at_index(lli key, vector <lli> my_sorted_array_with_distinct_elements, lli first, lli last){
    if(my_sorted_array_with_distinct_elements[first] == key){
        return first;
    }
    else if(my_sorted_array_with_distinct_elements[last] == key){
        return last;
    }
    else if(key < my_sorted_array_with_distinct_elements[first] || key > my_sorted_array_with_distinct_elements[last]) {
        return -1;
    }
    else{
        if(first == last - 1){
            return -1;
        }
        else{
            lli middle = (first + last)/2;
            if(key == my_sorted_array_with_distinct_elements[middle]) {
                return middle;
            }
            else if(key < my_sorted_array_with_distinct_elements[middle]) {
                return key_present_in_distinct_sorted_array_at_index(key, my_sorted_array_with_distinct_elements, first, middle);
            }
            else{
                return key_present_in_distinct_sorted_array_at_index(key, my_sorted_array_with_distinct_elements, middle, last);
            }
        }
    }
}

void please_print_the_array (INT data[], INT starting_index, INT ending_index)
{
    for (INT i = starting_index; i <= ending_index; i++)
    {
        cout << data[i] << " ";
    }
    cout<<endl;
}

lli value_just_greater_than_key_in_my_sorted_array_with_distinct_elements(lli key, vector <lli> my_sorted_array_with_distinct_elements, lli first, lli last){
    if(first > last){
        return -1;
    }
    else if(first == last){
        if(key < my_sorted_array_with_distinct_elements[first]){
            return my_sorted_array_with_distinct_elements[first];
        }
        else{
            return -1;
        }
    }
    else{
        if(key < my_sorted_array_with_distinct_elements[first]){
            return my_sorted_array_with_distinct_elements[first];
        }
        else if(key >= my_sorted_array_with_distinct_elements[last]){
            return -1;
        }
        else{
            if(first == last-1){
                return my_sorted_array_with_distinct_elements[last];
            }
            else{
                lli middle = (first+last)/2;
                if(key < my_sorted_array_with_distinct_elements[middle]){
                    return value_just_greater_than_key_in_my_sorted_array_with_distinct_elements(key, my_sorted_array_with_distinct_elements, first, middle);
                }
                else if(key == my_sorted_array_with_distinct_elements[middle]){
                    return my_sorted_array_with_distinct_elements[middle+1];
                }
                else{
                    return value_just_greater_than_key_in_my_sorted_array_with_distinct_elements(key, my_sorted_array_with_distinct_elements, middle+1, last);
                }
            }
        }
    }
}


lli value_just_smaller_than_key_in_my_sorted_array_with_distinct_elements(lli key, vector <lli> my_sorted_array_with_distinct_elements, lli first, lli last){
    if(first > last){
        return -1;
    }
    else if(first == last){
        if(key > my_sorted_array_with_distinct_elements[first]){
            return my_sorted_array_with_distinct_elements[first];
        }
        else{
            return -1;
        }
    }
    else{
        if(key > my_sorted_array_with_distinct_elements[last]){
            return my_sorted_array_with_distinct_elements[last];
        }
        else if(key <= my_sorted_array_with_distinct_elements[first]){
            return -1;
        }
        else{
            if(first == last-1){
                return my_sorted_array_with_distinct_elements[first];
            }
            else{
                lli middle = (first+last)/2;
                if(key < my_sorted_array_with_distinct_elements[middle]){
                    return value_just_smaller_than_key_in_my_sorted_array_with_distinct_elements(key, my_sorted_array_with_distinct_elements, first, middle-1);
                }
                else if(key == my_sorted_array_with_distinct_elements[middle]){
                    if(middle != first){
                        return my_sorted_array_with_distinct_elements[middle-1];
                    }
                    else{
                        return -1;
                    }
                }
                else{
                    return value_just_smaller_than_key_in_my_sorted_array_with_distinct_elements(key, my_sorted_array_with_distinct_elements, middle, last);
                }
            }
        }
    }
}