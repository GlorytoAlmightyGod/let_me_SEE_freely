#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void create_a_new_file(char name_of_file[]) {
    FILE *fptr;
    fptr = fopen(name_of_file, "w");
    fclose(fptr);
}

void write_to_an_existing_file(char name_of_file[], string text_to_be_written) {
    ofstream fptr;
    fptr.open(name_of_file, ios::app);
    fptr << text_to_be_written;
    fptr << endl;
    fptr.close();
}

void read_an_existing_file(char name_of_file[]) {
    ifstream fptr(name_of_file);
    string text_in_the_file;
    while (getline(fptr, text_in_the_file)) {
        cout << text_in_the_file;
        cout << endl;
    }
    fptr.close();
}

void template_copier() {
    ifstream fptr("template.cpp");
    string text_in_the_file;
    while (getline(fptr, text_in_the_file)) {
        write_to_an_existing_file("auto_generated.cpp", text_in_the_file);
    }
}

void test_basic_file_operations();
void test_the_development();


int main(void) {
    test_the_development();
    return 0;
}
/*
void test_basic_file_operations() {
    for(int i=1;i<=10;i++) {
        write_to_an_existing_file("auto_generated.cpp", "----\n");
    }
    read_an_existing_file("auto_generated.cpp");
}
*/
void test_the_development() {
    // template_copier();
    ifstream fptr("template.cpp");
    string text_in_the_file;
    while (getline(fptr, text_in_the_file)) {
        write_to_an_existing_file("auto_generated.cpp", text_in_the_file);
    }
}

