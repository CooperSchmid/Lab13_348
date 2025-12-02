// Given Code:
/*
bool fail_lecture(const vector<int>& attendance_records) {
    int absent_count = 0;
    for (int i = 1; i < attendance_records.size(); ++i) {
        absent_count += (attendance_records[i] == 0);
    }
    return absent_count >= 3;
}
*/
// Fixed Code used for testing

#include <iostream>
#include <vector>
using namespace std;

bool fail_lecture(const vector<int>& attendance_records) {
    int absent_count = 0;
    for (int i = 0; i < attendance_records.size(); ++i) {
        absent_count += (attendance_records[i] == 0);
    }
    return absent_count >= 3;
}

int main() {
    vector<int> test = {1,1,1,1,1,1,1,1,1,1};
    cout << "End = " << fail_lecture(test) << endl;
    return 0;
}
